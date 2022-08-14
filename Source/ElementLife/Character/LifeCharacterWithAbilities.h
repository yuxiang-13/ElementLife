// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/LifeCharacter.h"
#include "LifeCharacterWithAbilities.generated.h"

// ALifeCharacter typically gets the ability system component from the possessing player state
// This represents a character with a self-contained ability system component.
UCLASS(Blueprintable)
class ALifeCharacterWithAbilities : public ALifeCharacter
{
	GENERATED_BODY()

public:
	ALifeCharacterWithAbilities(const FObjectInitializer& ObjectInitializer);

	virtual void PostInitializeComponents() override;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

private:

	// The ability system component sub-object used by player characters.
	UPROPERTY(VisibleAnywhere, Category = "Life|PlayerState")
	ULifeAbilitySystemComponent* AbilitySystemComponent;
};
