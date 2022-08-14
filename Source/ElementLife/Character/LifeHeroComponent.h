// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/LifePawnComponent.h"
#include "Camera/LifeCameraMode.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilitySpec.h"
#include "Input/LifeMappableConfigPair.h"
#include "LifeHeroComponent.generated.h"


class ALifePlayerState;
class UInputComponent;
struct FInputActionValue;
class ULifeInputConfig;

/**
 * ULifeHeroComponent
 *
 *	A component used to create a player controlled pawns (characters, vehicles, etc..).
 */
UCLASS(Blueprintable, Meta=(BlueprintSpawnableComponent))
class ULifeHeroComponent : public ULifePawnComponent
{
	GENERATED_BODY()

public:

	ULifeHeroComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the hero component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Life|Hero")
	static ULifeHeroComponent* FindHeroComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<ULifeHeroComponent>() : nullptr); }

	void SetAbilityCameraMode(TSubclassOf<ULifeCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle);
	void ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle);

	void AddAdditionalInputConfig(const ULifeInputConfig* InputConfig);
	void RemoveAdditionalInputConfig(const ULifeInputConfig* InputConfig);

	/** True if this has completed OnPawnReadyToInitialize so is prepared for late-added features */
	bool HasPawnInitialized() const;

	/** True if this player has sent the BindInputsNow event and is prepared for bindings */
	bool IsReadyToBindInputs() const;

	static const FName NAME_BindInputsNow;

protected:

	virtual void OnRegister() override;

	virtual bool IsPawnComponentReadyToInitialize() const override;
	void OnPawnReadyToInitialize();

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent);

	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_LookMouse(const FInputActionValue& InputActionValue);
	void Input_LookStick(const FInputActionValue& InputActionValue);
	void Input_Crouch(const FInputActionValue& InputActionValue);
	void Input_AutoRun(const FInputActionValue& InputActionValue);

	TSubclassOf<ULifeCameraMode> DetermineCameraMode() const;
	
	void OnInputConfigActivated(const FLoadedMappableConfigPair& ConfigPair);
	void OnInputConfigDeactivated(const FLoadedMappableConfigPair& ConfigPair);

protected:

	/**
	 * Input Configs that should be added to this player when initalizing the input.
	 * 
	 * NOTE: You should only add to this if you do not have a game feature plugin accessible to you.
	 * If you do, then use the GameFeatureAction_AddInputConfig instead. 
	 */
	UPROPERTY(EditAnywhere)
	TArray<FMappableConfigPair> DefaultInputConfigs;
	
	// Camera mode set by an ability.
	TSubclassOf<ULifeCameraMode> AbilityCameraMode;

	// Spec handle for the last ability to set a camera mode.
	FGameplayAbilitySpecHandle AbilityCameraModeOwningSpecHandle;

	// True when the pawn has fully finished initialization
	bool bPawnHasInitialized;

	// True when player input bindings have been applyed, will never be true for non-players
	bool bReadyToBindInputs;
};
