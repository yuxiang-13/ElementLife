// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeAbilityCost_PlayerTagStack.h"
#include "Player/LifePlayerState.h"
#include "LifeGameplayAbility.h"
#include "GameFramework/PlayerController.h"

ULifeAbilityCost_PlayerTagStack::ULifeAbilityCost_PlayerTagStack()
{
	Quantity.SetValue(1.0f);
}

bool ULifeAbilityCost_PlayerTagStack::CheckCost(const ULifeGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (AController* PC = Ability->GetControllerFromActorInfo())
	{
		if (ALifePlayerState* PS = Cast<ALifePlayerState>(PC->PlayerState))
		{
			const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

			const float NumStacksReal = Quantity.GetValueAtLevel(AbilityLevel);
			const int32 NumStacks = FMath::TruncToInt(NumStacksReal);

			return PS->GetStatTagStackCount(Tag) >= NumStacks;
		}
	}
	return false;
}

void ULifeAbilityCost_PlayerTagStack::ApplyCost(const ULifeGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	if (ActorInfo->IsNetAuthority())
	{
		if (AController* PC = Ability->GetControllerFromActorInfo())
		{
			if (ALifePlayerState* PS = Cast<ALifePlayerState>(PC->PlayerState))
			{
				const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

				const float NumStacksReal = Quantity.GetValueAtLevel(AbilityLevel);
				const int32 NumStacks = FMath::TruncToInt(NumStacksReal);

				PS->RemoveStatTagStack(Tag, NumStacks);
			}
		}
	}
}
