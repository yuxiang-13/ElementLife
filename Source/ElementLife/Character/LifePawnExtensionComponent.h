// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LifePawnComponent.h"
#include "LifePawnExtensionComponent.generated.h"


class ULifePawnData;
class ULifeAbilitySystemComponent;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLifeDynamicMulticastDelegate);



/**
 * ULifePawnExtensionComponent
 *
 *	Component used to add functionality to all Pawn classes.
 */
UCLASS()
class ULifePawnExtensionComponent : public ULifePawnComponent
{
	GENERATED_BODY()

public:

	ULifePawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the pawn extension component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Life|Pawn")
	static ULifePawnExtensionComponent* FindPawnExtensionComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<ULifePawnExtensionComponent>() : nullptr); }

	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	void SetPawnData(const ULifePawnData* InPawnData);

	UFUNCTION(BlueprintPure, Category = "Life|Pawn")
	ULifeAbilitySystemComponent* GetLifeAbilitySystemComponent() const { return AbilitySystemComponent; }

	// Should be called by the owning pawn to become the avatar of the ability system.
	void InitializeAbilitySystem(ULifeAbilitySystemComponent* InASC, AActor* InOwnerActor);

	// Should be called by the owning pawn to remove itself as the avatar of the ability system.
	void UninitializeAbilitySystem();

	// Should be called by the owning pawn when the pawn's controller changes.
	void HandleControllerChanged();

	// Should be called by the owning pawn when the player state has been replicated.
	void HandlePlayerStateReplicated();

	// Should be called by the owning pawn when the input component is setup.
	void SetupPlayerInputComponent();

	// Call this anytime the pawn needs to check if it's ready to be initialized (pawn data assigned, possessed, etc..). 
	bool CheckPawnReadyToInitialize();

	// Returns true if the pawn is ready to be initialized.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Life|Pawn", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool IsPawnReadyToInitialize() const { return bPawnReadyToInitialize; }

	// Register with the OnPawnReadyToInitialize delegate and broadcast if condition is already met.
	void OnPawnReadyToInitialize_RegisterAndCall(FSimpleMulticastDelegate::FDelegate Delegate);

	// Register with the OnAbilitySystemInitialized delegate and broadcast if condition is already met.
	void OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate Delegate);

	// Register with the OnAbilitySystemUninitialized delegate.
	void OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate Delegate);

protected:

	virtual void OnRegister() override;

	UFUNCTION()
	void OnRep_PawnData();

	// Delegate fired when pawn has everything needed for initialization.
	FSimpleMulticastDelegate OnPawnReadyToInitialize;

	UPROPERTY(BlueprintAssignable, Meta = (DisplayName = "On Pawn Ready To Initialize"))
	FLifeDynamicMulticastDelegate BP_OnPawnReadyToInitialize;

	// Delegate fired when our pawn becomes the ability system's avatar actor
	FSimpleMulticastDelegate OnAbilitySystemInitialized;

	// Delegate fired when our pawn is removed as the ability system's avatar actor
	FSimpleMulticastDelegate OnAbilitySystemUninitialized;

protected:

	// Pawn data used to create the pawn.  Specified from a spawn function or on a placed instance.
	UPROPERTY(EditInstanceOnly, ReplicatedUsing = OnRep_PawnData, Category = "Life|Pawn")
	const ULifePawnData* PawnData;

	// Pointer to the ability system component that is cached for convenience.
	UPROPERTY()
	ULifeAbilitySystemComponent* AbilitySystemComponent;

	// True when the pawn has everything needed for initialization.
	int32 bPawnReadyToInitialize : 1;
};
