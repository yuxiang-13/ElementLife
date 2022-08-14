// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeCombatSet.h"
#include "Net/UnrealNetwork.h"


ULifeCombatSet::ULifeCombatSet()
	: BaseDamage(0.0f)
	, BaseHeal(0.0f)
{
}

void ULifeCombatSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ULifeCombatSet, BaseDamage, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ULifeCombatSet, BaseHeal, COND_OwnerOnly, REPNOTIFY_Always);
}

void ULifeCombatSet::OnRep_BaseDamage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULifeCombatSet, BaseDamage, OldValue);
}

void ULifeCombatSet::OnRep_BaseHeal(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ULifeCombatSet, BaseHeal, OldValue);
}
