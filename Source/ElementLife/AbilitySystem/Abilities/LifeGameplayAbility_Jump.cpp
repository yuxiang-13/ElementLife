// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameplayAbility_Jump.h"
#include "Character/LifeCharacter.h"


ULifeGameplayAbility_Jump::ULifeGameplayAbility_Jump(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

bool ULifeGameplayAbility_Jump::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		return false;
	}

	const ALifeCharacter* LifeCharacter = Cast<ALifeCharacter>(ActorInfo->AvatarActor.Get());
	if (!LifeCharacter || !LifeCharacter->CanJump())
	{
		return false;
	}

	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

void ULifeGameplayAbility_Jump::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// Stop jumping in case the ability blueprint doesn't call it.
	CharacterJumpStop();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void ULifeGameplayAbility_Jump::CharacterJumpStart()
{
	if (ALifeCharacter* LifeCharacter = GetLifeCharacterFromActorInfo())
	{
		if (LifeCharacter->IsLocallyControlled() && !LifeCharacter->bPressedJump)
		{
			LifeCharacter->UnCrouch();
			LifeCharacter->Jump();
		}
	}
}

void ULifeGameplayAbility_Jump::CharacterJumpStop()
{
	if (ALifeCharacter* LifeCharacter = GetLifeCharacterFromActorInfo())
	{
		if (LifeCharacter->IsLocallyControlled() && LifeCharacter->bPressedJump)
		{
			LifeCharacter->StopJumping();
		}
	}
}
