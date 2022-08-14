// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifePlayerController.h"
#include "LifeLogChannels.h"
#include "GameModes/LifeGameMode.h"
#include "LifePlayerState.h"
#include "Camera/LifePlayerCameraManager.h"
#include "UI/LifeHUD.h"
#include "Character/LifePawnData.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "EngineUtils.h"
#include "LifeGameplayTags.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemGlobals.h"
#include "CommonInputSubsystem.h"
#include "LifeLocalPlayer.h"

ALifePlayerController::ALifePlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerCameraManagerClass = ALifePlayerCameraManager::StaticClass();

}

void ALifePlayerController::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ALifePlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(false);
}

void ALifePlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ALifePlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
}

void ALifePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// If we are auto running then add some player input
	if (GetIsAutoRunning())
	{
		if (APawn* CurrentPawn = GetPawn())
		{
			const FRotator MovementRotation(0.0f, GetControlRotation().Yaw, 0.0f);
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			CurrentPawn->AddMovementInput(MovementDirection, 1.0f);	
		}
	}
}

ALifePlayerState* ALifePlayerController::GetLifePlayerState() const
{
	return CastChecked<ALifePlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

ULifeAbilitySystemComponent* ALifePlayerController::GetLifeAbilitySystemComponent() const
{
	const ALifePlayerState* LifePS = GetLifePlayerState();
	return (LifePS ? LifePS->GetLifeAbilitySystemComponent() : nullptr);
}

ALifeHUD* ALifePlayerController::GetLifeHUD() const
{
	return CastChecked<ALifeHUD>(GetHUD(), ECastCheckedType::NullAllowed);
}

void ALifePlayerController::OnPlayerStateChangedTeam(UObject* TeamAgent, int32 OldTeam, int32 NewTeam)
{
}

void ALifePlayerController::OnPlayerStateChanged()
{
	// Empty, place for derived classes to implement without having to hook all the other events
}

void ALifePlayerController::BroadcastOnPlayerStateChanged()
{
	OnPlayerStateChanged();

	// Unbind from the old player state, if any
	FGenericTeamId OldTeamID = FGenericTeamId::NoTeam;
	if (LastSeenPlayerState != nullptr)
	{
	}

	// Bind to the new player state, if any
	FGenericTeamId NewTeamID = FGenericTeamId::NoTeam;
	if (PlayerState != nullptr)
	{
	}

	LastSeenPlayerState = PlayerState;
}

void ALifePlayerController::InitPlayerState()
{
	Super::InitPlayerState();
	BroadcastOnPlayerStateChanged();
}

void ALifePlayerController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
	BroadcastOnPlayerStateChanged();
}

void ALifePlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	BroadcastOnPlayerStateChanged();
}

void ALifePlayerController::SetPlayer(UPlayer* InPlayer)
{
	Super::SetPlayer(InPlayer);

	if (const ULifeLocalPlayer* LifeLocalPlayer = Cast<ULifeLocalPlayer>(InPlayer))
	{
	}
}

void ALifePlayerController::OnSettingsChanged(ULifeSettingsShared* InSettings)
{
}

void ALifePlayerController::AddCheats(bool bForce)
{
}

void ALifePlayerController::ServerCheat_Implementation(const FString& Msg)
{
}

bool ALifePlayerController::ServerCheat_Validate(const FString& Msg)
{
	return true;
}

void ALifePlayerController::ServerCheatAll_Implementation(const FString& Msg)
{
}

bool ALifePlayerController::ServerCheatAll_Validate(const FString& Msg)
{
	return true;
}

void ALifePlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void ALifePlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->ProcessAbilityInput(DeltaTime, bGamePaused);
	}

	Super::PostProcessInput(DeltaTime, bGamePaused);
}

void ALifePlayerController::OnCameraPenetratingTarget()
{
	bHideViewTargetPawnNextFrame = true;
}

void ALifePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

#if WITH_SERVER_CODE && WITH_EDITOR
	if (GIsEditor && (InPawn != nullptr) && (GetPawn() == InPawn))
	{
	}
#endif

	SetIsAutoRunning(false);
}

void ALifePlayerController::SetIsAutoRunning(const bool bEnabled)
{
	const bool bIsAutoRunning = GetIsAutoRunning();
	if (bEnabled != bIsAutoRunning)
	{
		if (!bEnabled)
		{
			OnEndAutoRun();
		}
		else
		{
			OnStartAutoRun();
		}
	}
}

bool ALifePlayerController::GetIsAutoRunning() const
{
	bool bIsAutoRunning = false;
	if (const ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		bIsAutoRunning = LifeASC->GetTagCount(FLifeGameplayTags::Get().Status_AutoRunning) > 0;
	}
	return bIsAutoRunning;
}

void ALifePlayerController::OnStartAutoRun()
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->SetLooseGameplayTagCount(FLifeGameplayTags::Get().Status_AutoRunning, 1);
		K2_OnStartAutoRun();
	}	
}

void ALifePlayerController::OnEndAutoRun()
{
	if (ULifeAbilitySystemComponent* LifeASC = GetLifeAbilitySystemComponent())
	{
		LifeASC->SetLooseGameplayTagCount(FLifeGameplayTags::Get().Status_AutoRunning, 0);
		K2_OnEndAutoRun();
	}
}

void ALifePlayerController::UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId)
{
	if (bForceFeedbackEnabled)
	{
		if (const UCommonInputSubsystem* CommonInputSubsystem = UCommonInputSubsystem::Get(GetLocalPlayer()))
		{
			const ECommonInputType CurrentInputType = CommonInputSubsystem->GetCurrentInputType();
			if (CurrentInputType == ECommonInputType::Gamepad || CurrentInputType == ECommonInputType::Touch)
			{
				InputInterface->SetForceFeedbackChannelValues(ControllerId, ForceFeedbackValues);
				return;
			}
		}
	}
	
	InputInterface->SetForceFeedbackChannelValues(ControllerId, FForceFeedbackValues());
}

void ALifePlayerController::UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents)
{
	Super::UpdateHiddenComponents(ViewLocation, OutHiddenComponents);

	if (bHideViewTargetPawnNextFrame)
	{
		AActor* const ViewTargetPawn = PlayerCameraManager ? Cast<AActor>(PlayerCameraManager->GetViewTarget()) : nullptr;
		if (ViewTargetPawn)
		{
			// internal helper func to hide all the components
			auto AddToHiddenComponents = [&OutHiddenComponents](const TInlineComponentArray<UPrimitiveComponent*>& InComponents)
			{
				// add every component and all attached children
				for (UPrimitiveComponent* Comp : InComponents)
				{
					if (Comp->IsRegistered())
					{
						OutHiddenComponents.Add(Comp->ComponentId);

						for (USceneComponent* AttachedChild : Comp->GetAttachChildren())
						{
							static FName NAME_NoParentAutoHide(TEXT("NoParentAutoHide"));
							UPrimitiveComponent* AttachChildPC = Cast<UPrimitiveComponent>(AttachedChild);
							if (AttachChildPC && AttachChildPC->IsRegistered() && !AttachChildPC->ComponentTags.Contains(NAME_NoParentAutoHide))
							{
								OutHiddenComponents.Add(AttachChildPC->ComponentId);
							}
						}
					}
				}
			};

			//TODO Solve with an interface.  Gather hidden components or something.
			//TODO Hiding isn't awesome, sometimes you want the effect of a fade out over a proximity, needs to bubble up to designers.

			// hide pawn's components
			TInlineComponentArray<UPrimitiveComponent*> PawnComponents;
			ViewTargetPawn->GetComponents(PawnComponents);
			AddToHiddenComponents(PawnComponents);

			//// hide weapon too
			//if (ViewTargetPawn->CurrentWeapon)
			//{
			//	TInlineComponentArray<UPrimitiveComponent*> WeaponComponents;
			//	ViewTargetPawn->CurrentWeapon->GetComponents(WeaponComponents);
			//	AddToHiddenComponents(WeaponComponents);
			//}
		}

		// we consumed it, reset for next frame
		bHideViewTargetPawnNextFrame = false;
	}
}


void ALifePlayerController::OnUnPossess()
{
	// Make sure the pawn that is being unpossessed doesn't remain our ASC's avatar actor
	if (APawn* PawnBeingUnpossessed = GetPawn())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PlayerState))
		{
			if (ASC->GetAvatarActor() == PawnBeingUnpossessed)
			{
				ASC->SetAvatarActor(nullptr);
			}
		}
	}

	Super::OnUnPossess();
}

//////////////////////////////////////////////////////////////////////
// ALifeReplayPlayerController

void ALifeReplayPlayerController::SetPlayer(UPlayer* InPlayer)
{
	Super::SetPlayer(InPlayer);
}
