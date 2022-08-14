// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeAbilitySystemGlobals.h"
#include "LifeGameplayEffectContext.h"

ULifeAbilitySystemGlobals::ULifeAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FGameplayEffectContext* ULifeAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FLifeGameplayEffectContext();
}
