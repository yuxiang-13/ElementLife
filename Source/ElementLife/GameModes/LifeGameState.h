// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModularGameState.h"
#include "AbilitySystemInterface.h"
#include "Messages/LifeVerbMessage.h"

#include "LifeGameState.generated.h"

class ULifeExperienceManagerComponent;
class ULifeAbilitySystemComponent;
class UAbilitySystemComponent;

/**
 * ALifeGameState
 *
 *	The base game state class used by this project.
 */
UCLASS(Config = Game)
class ELEMENTLIFE_API ALifeGameState : public AModularGameStateBase, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	ALifeGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	float GetServerFPS() const { return ServerFPS; }

	//~AActor interface
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of AActor interface

	//~AGameStateBase interface
	virtual void AddPlayerState(APlayerState* PlayerState) override;
	virtual void RemovePlayerState(APlayerState* PlayerState) override;
	//~End of AGameStateBase interface

	//~IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~End of IAbilitySystemInterface

	UFUNCTION(BlueprintCallable, Category = "Life|GameState")
	ULifeAbilitySystemComponent* GetLifeAbilitySystemComponent() const { return AbilitySystemComponent; }

	// Send a message that all clients will (probably) get
	// (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)
	UFUNCTION(NetMulticast, Unreliable, BlueprintCallable, Category = "Life|GameState")
	void MulticastMessageToClients(const FLifeVerbMessage Message);

	// Send a message that all clients will be guaranteed to get
	// (use only for client notifications that cannot handle being lost)
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "Life|GameState")
	void MulticastReliableMessageToClients(const FLifeVerbMessage Message);

private:
	UPROPERTY()
	ULifeExperienceManagerComponent* ExperienceManagerComponent;

	// The ability system component subobject for game-wide things (primarily gameplay cues)
	UPROPERTY(VisibleAnywhere, Category = "Life|GameState")
	ULifeAbilitySystemComponent* AbilitySystemComponent;


protected:

	virtual void Tick(float DeltaSeconds) override;

protected:
	UPROPERTY(Replicated)
	float ServerFPS;
};
