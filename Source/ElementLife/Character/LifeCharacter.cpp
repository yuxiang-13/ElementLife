// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeCharacter.h"
#include "LifeCharacterMovementComponent.h"
#include "LifeLogChannels.h"
#include "LifeGameplayTags.h"
#include "Character/LifePawnExtensionComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Camera/LifeCameraComponent.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "Character/LifeHealthComponent.h"
#include "Player/LifePlayerController.h"
#include "Player/LifePlayerState.h"
#include "System/LifeSignificanceManager.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"

static FName NAME_LifeCharacterCollisionProfile_Capsule(TEXT("LifePawnCapsule"));
static FName NAME_LifeCharacterCollisionProfile_Mesh(TEXT("LifePawnMesh"));

ALifeCharacter::ALifeCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<ULifeCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Avoid ticking characters if possible.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	NetCullDistanceSquared = 900000000.0f;

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	CapsuleComp->InitCapsuleSize(40.0f, 90.0f);
	CapsuleComp->SetCollisionProfileName(NAME_LifeCharacterCollisionProfile_Capsule);

	USkeletalMeshComponent* MeshComp = GetMesh();
	check(MeshComp);
	MeshComp->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));  // Rotate mesh to be X forward since it is exported as Y forward.
	MeshComp->SetCollisionProfileName(NAME_LifeCharacterCollisionProfile_Mesh);

	ULifeCharacterMovementComponent* LifeMoveComp = CastChecked<ULifeCharacterMovementComponent>(GetCharacterMovement());
	LifeMoveComp->GravityScale = 1.0f;
	LifeMoveComp->MaxAcceleration = 2400.0f;
	LifeMoveComp->BrakingFrictionFactor = 1.0f;
	LifeMoveComp->BrakingFriction = 6.0f;
	LifeMoveComp->GroundFriction = 8.0f;
	LifeMoveComp->BrakingDecelerationWalking = 1400.0f;
	LifeMoveComp->bUseControllerDesiredRotation = false;
	LifeMoveComp->bOrientRotationToMovement = false;
	LifeMoveComp->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	LifeMoveComp->bAllowPhysicsRotationDuringAnimRootMotion = false;
	LifeMoveComp->GetNavAgentPropertiesRef().bCanCrouch = true;
	LifeMoveComp->bCanWalkOffLedgesWhenCrouching = true;
	LifeMoveComp->SetCrouchedHalfHeight(65.0f);

	PawnExtComponent = CreateDefaultSubobject<ULifePawnExtensionComponent>(TEXT("PawnExtensionComponent"));
	PawnExtComponent->OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemInitialized));
	PawnExtComponent->OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemUninitialized));

	HealthComponent = CreateDefaultSubobject<ULifeHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDeathStarted.AddDynamic(this, &ThisClass::OnDeathStarted);
	HealthComponent->OnDeathFinished.AddDynamic(this, &ThisClass::OnDeathFinished);

	CameraComponent = CreateDefaultSubobject<ULifeCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetRelativeLocation(FVector(-300.0f, 0.0f, 75.0f));

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	BaseEyeHeight = 80.0f;
	CrouchedEyeHeight = 50.0f;
}

void ALifeCharacter::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ALifeCharacter::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	const bool bRegisterWithSignificanceManager = !IsNetMode(NM_DedicatedServer);
	if (bRegisterWithSignificanceManager)
	{
		if (ULifeSignificanceManager* SignificanceManager = USignificanceManager::Get<ULifeSignificanceManager>(World))
		{
//@TODO: SignificanceManager->RegisterObject(this, (EFortSignificanceType)SignificanceType);
		}
	}
}

void ALifeCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UWorld* World = GetWorld();

	const bool bRegisterWithSignificanceManager = !IsNetMode(NM_DedicatedServer);
	if (bRegisterWithSignificanceManager)
	{
		if (ULifeSignificanceManager* SignificanceManager = USignificanceManager::Get<ULifeSignificanceManager>(World))
		{
			SignificanceManager->UnregisterObject(this);
		}
	}
}

void ALifeCharacter::Reset()
{
	DisableMovementAndCollision();

	K2_OnReset();

	UninitAndDestroy();
}

void ALifeCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, ReplicatedAcceleration, COND_SimulatedOnly);
}

void ALifeCharacter::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
	{
		// Compress Acceleration: XY components as direction + magnitude, Z component as direct value
		const double MaxAccel = MovementComponent->MaxAcceleration;
		const FVector CurrentAccel = MovementComponent->GetCurrentAcceleration();
		double AccelXYRadians, AccelXYMagnitude;
		FMath::CartesianToPolar(CurrentAccel.X, CurrentAccel.Y, AccelXYMagnitude, AccelXYRadians);

		ReplicatedAcceleration.AccelXYRadians   = FMath::FloorToInt((AccelXYRadians / TWO_PI) * 255.0);     // [0, 2PI] -> [0, 255]
		ReplicatedAcceleration.AccelXYMagnitude = FMath::FloorToInt((AccelXYMagnitude / MaxAccel) * 255.0);	// [0, MaxAccel] -> [0, 255]
		ReplicatedAcceleration.AccelZ           = FMath::FloorToInt((CurrentAccel.Z / MaxAccel) * 127.0);   // [-MaxAccel, MaxAccel] -> [-127, 127]
	}
}

void ALifeCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

}

ALifePlayerController* ALifeCharacter::GetLifePlayerController() const
{
	return CastChecked<ALifePlayerController>(Controller, ECastCheckedType::NullAllowed);
}

ALifePlayerState* ALifeCharacter::GetLifePlayerState() const
{
	return CastChecked<ALifePlayerState>(GetPlayerState(), ECastCheckedType::NullAllowed);
}

ULifeAbilitySystemComponent* ALifeCharacter::GetLifeAbilitySystemComponent() const
{
	return Cast<ULifeAbilitySystemComponent>(GetAbilitySystemComponent());
}

UAbilitySystemComponent* ALifeCharacter::GetAbilitySystemComponent() const
{
	return PawnExtComponent->GetLifeAbilitySystemComponent();
}

void ALifeCharacter::OnAbilitySystemInitialized()
{
	ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent();
	check(LifeASC);

	HealthComponent->InitializeWithAbilitySystem(LifeASC);

	InitializeGameplayTags();
}

void ALifeCharacter::OnAbilitySystemUninitialized()
{
	HealthComponent->UninitializeFromAbilitySystem();
}

void ALifeCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	PawnExtComponent->HandleControllerChanged();
}

void ALifeCharacter::UnPossessed()
{
	Super::UnPossessed();

	PawnExtComponent->HandleControllerChanged();
}

void ALifeCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();

	PawnExtComponent->HandleControllerChanged();
}

void ALifeCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	PawnExtComponent->HandlePlayerStateReplicated();
}

void ALifeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PawnExtComponent->SetupPlayerInputComponent();
}

void ALifeCharacter::InitializeGameplayTags()
{
	// Clear tags that may be lingering on the ability system from the previous pawn.
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		const FLifeGameplayTags& GameplayTags = FLifeGameplayTags::Get();

		for (const TPair<uint8, FGameplayTag>& TagMapping : GameplayTags.MovementModeTagMap)
		{
			if (TagMapping.Value.IsValid())
			{
				LifeASC->SetLooseGameplayTagCount(TagMapping.Value, 0);
			}
		}

		for (const TPair<uint8, FGameplayTag>& TagMapping : GameplayTags.CustomMovementModeTagMap)
		{
			if (TagMapping.Value.IsValid())
			{
				LifeASC->SetLooseGameplayTagCount(TagMapping.Value, 0);
			}
		}

		ULifeCharacterMovementComponent* LifeMoveComp = CastChecked<ULifeCharacterMovementComponent>(GetCharacterMovement());
		SetMovementModeTag(LifeMoveComp->MovementMode, LifeMoveComp->CustomMovementMode, true);
	}
}

void ALifeCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool ALifeCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		return LifeASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool ALifeCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		return LifeASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool ALifeCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		return LifeASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}

void ALifeCharacter::FellOutOfWorld(const class UDamageType& dmgType)
{
	HealthComponent->DamageSelfDestruct(/*bFellOutOfWorld=*/ true);
}

void ALifeCharacter::OnDeathStarted(AActor*)
{
	DisableMovementAndCollision();
}

void ALifeCharacter::OnDeathFinished(AActor*)
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::DestroyDueToDeath);
}


void ALifeCharacter::DisableMovementAndCollision()
{
	if (Controller)
	{
		Controller->SetIgnoreMoveInput(true);
	}

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CapsuleComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	ULifeCharacterMovementComponent* LifeMoveComp = CastChecked<ULifeCharacterMovementComponent>(GetCharacterMovement());
	LifeMoveComp->StopMovementImmediately();
	LifeMoveComp->DisableMovement();
}

void ALifeCharacter::DestroyDueToDeath()
{
	K2_OnDeathFinished();

	UninitAndDestroy();
}


void ALifeCharacter::UninitAndDestroy()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		DetachFromControllerPendingDestroy();
		SetLifeSpan(0.1f);
	}

	// Uninitialize the ASC if we're still the avatar actor (otherwise another pawn already did it when they became the avatar actor)
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		if (LifeASC->GetAvatarActor() == this)
		{
			PawnExtComponent->UninitializeAbilitySystem();
		}
	}

	SetActorHiddenInGame(true);
}

void ALifeCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	ULifeCharacterMovementComponent* LifeMoveComp = CastChecked<ULifeCharacterMovementComponent>(GetCharacterMovement());

	SetMovementModeTag(PrevMovementMode, PreviousCustomMode, false);
	SetMovementModeTag(LifeMoveComp->MovementMode, LifeMoveComp->CustomMovementMode, true);
}

void ALifeCharacter::SetMovementModeTag(EMovementMode MovementMode, uint8 CustomMovementMode, bool bTagEnabled)
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		const FLifeGameplayTags& GameplayTags = FLifeGameplayTags::Get();
		const FGameplayTag* MovementModeTag = nullptr;

		if (MovementMode == MOVE_Custom)
		{
			MovementModeTag = GameplayTags.CustomMovementModeTagMap.Find(CustomMovementMode);
		}
		else
		{
			MovementModeTag = GameplayTags.MovementModeTagMap.Find(MovementMode);
		}

		if (MovementModeTag && MovementModeTag->IsValid())
		{
			LifeASC->SetLooseGameplayTagCount(*MovementModeTag, (bTagEnabled ? 1 : 0));
		}
	}
}

void ALifeCharacter::ToggleCrouch()
{
	const ULifeCharacterMovementComponent* LifeMoveComp = CastChecked<ULifeCharacterMovementComponent>(GetCharacterMovement());

	if (bIsCrouched || LifeMoveComp->bWantsToCrouch)
	{
		UnCrouch();
	}
	else if (LifeMoveComp->IsMovingOnGround())
	{
		Crouch();
	}
}

void ALifeCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->SetLooseGameplayTagCount(FLifeGameplayTags::Get().Status_Crouching, 1);
	}


	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

void ALifeCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->SetLooseGameplayTagCount(FLifeGameplayTags::Get().Status_Crouching, 0);
	}

	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
}

bool ALifeCharacter::CanJumpInternal_Implementation() const
{
	// same as ACharacter's implementation but without the crouch check
	return JumpIsAllowedInternal();
}

void ALifeCharacter::OnRep_ReplicatedAcceleration()
{
	if (ULifeCharacterMovementComponent* LifeMovementComponent = Cast<ULifeCharacterMovementComponent>(GetCharacterMovement()))
	{
		// Decompress Acceleration
		const double MaxAccel         = LifeMovementComponent->MaxAcceleration;
		const double AccelXYMagnitude = double(ReplicatedAcceleration.AccelXYMagnitude) * MaxAccel / 255.0; // [0, 255] -> [0, MaxAccel]
		const double AccelXYRadians   = double(ReplicatedAcceleration.AccelXYRadians) * TWO_PI / 255.0;     // [0, 255] -> [0, 2PI]

		FVector UnpackedAcceleration(FVector::ZeroVector);
		FMath::PolarToCartesian(AccelXYMagnitude, AccelXYRadians, UnpackedAcceleration.X, UnpackedAcceleration.Y);
		UnpackedAcceleration.Z = double(ReplicatedAcceleration.AccelZ) * MaxAccel / 127.0; // [-127, 127] -> [-MaxAccel, MaxAccel]

		LifeMovementComponent->SetReplicatedAcceleration(UnpackedAcceleration);
	}
}
