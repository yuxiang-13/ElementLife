// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LifeAbilityCost.h"
#include "LifeAbilityCost_PlayerTagStack.generated.h"

/**
 * Represents a cost that requires expending a quantity of a tag stack on the player state
 */
UCLASS(meta=(DisplayName="Player Tag Stack"))
class ULifeAbilityCost_PlayerTagStack : public ULifeAbilityCost
{
	GENERATED_BODY()

public:
	ULifeAbilityCost_PlayerTagStack();

	//~ULifeAbilityCost interface
	virtual bool CheckCost(const ULifeGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual void ApplyCost(const ULifeGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) override;
	//~End of ULifeAbilityCost interface

protected:
	/** How much of the tag to spend (keyed on ability level) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Costs)
	FScalableFloat Quantity;

	/** Which tag to spend some of */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Costs)
	FGameplayTag Tag;
};
