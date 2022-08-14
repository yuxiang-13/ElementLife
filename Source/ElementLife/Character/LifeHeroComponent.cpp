// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeHeroComponent.h"
#include "LifeLogChannels.h"
#include "GameFramework/Pawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Player/LifePlayerController.h"
#include "Player/LifePlayerState.h"
#include "Character/LifePawnExtensionComponent.h"
#include "Character/LifePawnData.h"
#include "Character/LifeCharacter.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "Input/LifeInputConfig.h"
#include "Input/LifeInputComponent.h"
#include "Camera/LifeCameraComponent.h"
#include "LifeGameplayTags.h"
#include "Engine/LocalPlayer.h"
#include "Components/GameFrameworkComponentManager.h"
#include "System/LifeAssetManager.h"
#include "PlayerMappableInputConfig.h"
#include "Player/LifeLocalPlayer.h"

#if WITH_EDITOR
#include "Misc/UObjectToken.h"
#endif	// WITH_EDITOR

namespace LifeHero
{
	static const float LookYawRate = 300.0f;
	static const float LookPitchRate = 165.0f;
};

const FName ULifeHeroComponent::NAME_BindInputsNow("BindInputsNow");

ULifeHeroComponent::ULifeHeroComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AbilityCameraMode = nullptr;
	bPawnHasInitialized = false;
	bReadyToBindInputs = false;
}

void ULifeHeroComponent::OnRegister()
{
	Super::OnRegister();

	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnExtComp->OnPawnReadyToInitialize_RegisterAndCall(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnPawnReadyToInitialize));
		}
	}
	else
	{
		UE_LOG(LogLife, Error, TEXT("[ULifeHeroComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("LifeHeroComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName HeroMessageLogName = TEXT("LifeHeroComponent");
			
			FMessageLog(HeroMessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));
				
			FMessageLog(HeroMessageLogName).Open();
		}
#endif
	}
}

bool ULifeHeroComponent::IsPawnComponentReadyToInitialize() const
{
	// The player state is required.
	if (!GetPlayerState<ALifePlayerState>())
	{
		return false;
	}

	const APawn* Pawn = GetPawn<APawn>();

	// A pawn is required.
	if (!Pawn)
	{
		return false;
	}

	// If we're authority or autonomous, we need to wait for a controller with registered ownership of the player state.
	if (Pawn->GetLocalRole() != ROLE_SimulatedProxy)
	{
		AController* Controller = GetController<AController>();

		const bool bHasControllerPairedWithPS = (Controller != nullptr) && \
												(Controller->PlayerState != nullptr) && \
												(Controller->PlayerState->GetOwner() == Controller);

		if (!bHasControllerPairedWithPS)
		{
			return false;
		}
	}
	
	const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
	const bool bIsBot = Pawn->IsBotControlled();

	if (bIsLocallyControlled && !bIsBot)
	{
		// The input component is required when locally controlled.
		if (!Pawn->InputComponent)
		{
			return false;
		}
	}

	return true;
}

void ULifeHeroComponent::OnPawnReadyToInitialize()
{
	if (!ensure(!bPawnHasInitialized))
	{
		// Don't initialize twice
		return;
	}

	APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}
	const bool bIsLocallyControlled = Pawn->IsLocallyControlled();

	ALifePlayerState* LifePS = GetPlayerState<ALifePlayerState>();
	check(LifePS);

	const ULifePawnData* PawnData = nullptr;

	if (ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		PawnData = PawnExtComp->GetPawnData<ULifePawnData>();

		// The player state holds the persistent data for this player (state that persists across deaths and multiple pawns).
		// The ability system component and attribute sets live on the player state.
		PawnExtComp->InitializeAbilitySystem(LifePS->GetLifeAbilitySystemComponent(), LifePS);
	}

	if (ALifePlayerController* LifePC = GetController<ALifePlayerController>())
	{
		if (Pawn->InputComponent != nullptr)
		{
			InitializePlayerInput(Pawn->InputComponent);
		}
	}

	if (bIsLocallyControlled && PawnData)
	{
		if (ULifeCameraComponent* CameraComponent = ULifeCameraComponent::FindCameraComponent(Pawn))
		{
			CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
		}
	}

	bPawnHasInitialized = true;
}

void ULifeHeroComponent::BeginPlay()
{
	Super::BeginPlay();
}

void ULifeHeroComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnExtComp->UninitializeAbilitySystem();
		}	
	}

	Super::EndPlay(EndPlayReason);
}

void ULifeHeroComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	Subsystem->ClearAllMappings();

	if (const ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const ULifePawnData* PawnData = PawnExtComp->GetPawnData<ULifePawnData>())
		{
			if (const ULifeInputConfig* InputConfig = PawnData->InputConfig)
			{
				const FLifeGameplayTags& GameplayTags = FLifeGameplayTags::Get();
	
				// Register any default input configs with the settings so that they will be applied to the player during AddInputMappings
				for (const FMappableConfigPair& Pair : DefaultInputConfigs)
				{
					FMappableConfigPair::ActivatePair(Pair);
				}
				
				ULifeInputComponent* LifeIC = CastChecked<ULifeInputComponent>(PlayerInputComponent);
				LifeIC->AddInputMappings(InputConfig, Subsystem);
				// if (ULifeSettingsLocal* LocalSettings = ULifeSettingsLocal::Get())
				// {
				// 	LocalSettings->OnInputConfigActivated.AddUObject(this, &ULifeHeroComponent::OnInputConfigActivated);
				// 	LocalSettings->OnInputConfigDeactivated.AddUObject(this, &ULifeHeroComponent::OnInputConfigDeactivated);
				// }

				TArray<uint32> BindHandles;
				LifeIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out*/ BindHandles);

				LifeIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, /*bLogIfNotFound=*/ false);
				LifeIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, /*bLogIfNotFound=*/ false);
				LifeIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Look_Stick, ETriggerEvent::Triggered, this, &ThisClass::Input_LookStick, /*bLogIfNotFound=*/ false);
				LifeIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Crouch, ETriggerEvent::Triggered, this, &ThisClass::Input_Crouch, /*bLogIfNotFound=*/ false);
				LifeIC->BindNativeAction(InputConfig, GameplayTags.InputTag_AutoRun, ETriggerEvent::Triggered, this, &ThisClass::Input_AutoRun, /*bLogIfNotFound=*/ false);
			}
		}
	}

	if (ensure(!bReadyToBindInputs))
	{
		bReadyToBindInputs = true;
	}

	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APlayerController*>(PC), NAME_BindInputsNow);
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APawn*>(Pawn), NAME_BindInputsNow);
}

void ULifeHeroComponent::OnInputConfigActivated(const FLoadedMappableConfigPair& ConfigPair)
{
	if (ALifePlayerController* LifePC = GetController<ALifePlayerController>())
	{
		if (APawn* Pawn = GetPawn<APawn>())
		{
			if (ULifeInputComponent* LifeIC = Cast<ULifeInputComponent>(Pawn->InputComponent))
			{
				if (const ULocalPlayer* LP = LifePC->GetLocalPlayer())
				{
					if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
					{
						LifeIC->AddInputConfig(ConfigPair, Subsystem);	
					}	
				}
			}
		}
	}
}

void ULifeHeroComponent::OnInputConfigDeactivated(const FLoadedMappableConfigPair& ConfigPair)
{
	if (ALifePlayerController* LifePC = GetController<ALifePlayerController>())
	{
		if (APawn* Pawn = GetPawn<APawn>())
		{
			if (ULifeInputComponent* LifeIC = Cast<ULifeInputComponent>(Pawn->InputComponent))
			{
				if (const ULocalPlayer* LP = LifePC->GetLocalPlayer())
				{
					if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
					{
						LifeIC->RemoveInputConfig(ConfigPair, Subsystem);
					}
				}
			}
		}
	}
}

void ULifeHeroComponent::AddAdditionalInputConfig(const ULifeInputConfig* InputConfig)
{
	TArray<uint32> BindHandles;

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	ULifeInputComponent* LifeIC = Pawn->FindComponentByClass<ULifeInputComponent>();
	check(LifeIC);

	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	if (const ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		LifeIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out*/ BindHandles);
	}
}

void ULifeHeroComponent::RemoveAdditionalInputConfig(const ULifeInputConfig* InputConfig)
{
	//@TODO: Implement me!
}

bool ULifeHeroComponent::HasPawnInitialized() const
{
	return bPawnHasInitialized;
}

bool ULifeHeroComponent::IsReadyToBindInputs() const
{
	return bReadyToBindInputs;
}

void ULifeHeroComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (ULifeAbilitySystemComponent* LifeASC = PawnExtComp->GetLifeAbilitySystemComponent())
			{
				LifeASC->AbilityInputTagPressed(InputTag);
			}
		}	
	}
}

void ULifeHeroComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	if (const ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (ULifeAbilitySystemComponent* LifeASC = PawnExtComp->GetLifeAbilitySystemComponent())
		{
			LifeASC->AbilityInputTagReleased(InputTag);
		}
	}
}

void ULifeHeroComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	AController* Controller = Pawn ? Pawn->GetController() : nullptr;

	// If the player has attempted to move again then cancel auto running
	if (ALifePlayerController* LifeController = Cast<ALifePlayerController>(Controller))
	{
		LifeController->SetIsAutoRunning(false);
	}
	
	if (Controller)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();
		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);

		if (Value.X != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::RightVector);
			Pawn->AddMovementInput(MovementDirection, Value.X);
		}

		if (Value.Y != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			Pawn->AddMovementInput(MovementDirection, Value.Y);
		}
	}
}

void ULifeHeroComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X);
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y);
	}
}

void ULifeHeroComponent::Input_LookStick(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	const UWorld* World = GetWorld();
	check(World);

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X * LifeHero::LookYawRate * World->GetDeltaSeconds());
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y * LifeHero::LookPitchRate * World->GetDeltaSeconds());
	}
}

void ULifeHeroComponent::Input_Crouch(const FInputActionValue& InputActionValue)
{
	if (ALifeCharacter* Character = GetPawn<ALifeCharacter>())
	{
		Character->ToggleCrouch();
	}
}

void ULifeHeroComponent::Input_AutoRun(const FInputActionValue& InputActionValue)
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		if (ALifePlayerController* Controller = Cast<ALifePlayerController>(Pawn->GetController()))
		{
			// Toggle auto running
			Controller->SetIsAutoRunning(!Controller->GetIsAutoRunning());
		}	
	}
}

TSubclassOf<ULifeCameraMode> ULifeHeroComponent::DetermineCameraMode() const
{
	if (AbilityCameraMode)
	{
		return AbilityCameraMode;
	}

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return nullptr;
	}

	if (ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const ULifePawnData* PawnData = PawnExtComp->GetPawnData<ULifePawnData>())
		{
			return PawnData->DefaultCameraMode;
		}
	}

	return nullptr;
}

void ULifeHeroComponent::SetAbilityCameraMode(TSubclassOf<ULifeCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (CameraMode)
	{
		AbilityCameraMode = CameraMode;
		AbilityCameraModeOwningSpecHandle = OwningSpecHandle;
	}
}

void ULifeHeroComponent::ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (AbilityCameraModeOwningSpecHandle == OwningSpecHandle)
	{
		AbilityCameraMode = nullptr;
		AbilityCameraModeOwningSpecHandle = FGameplayAbilitySpecHandle();
	}
}
