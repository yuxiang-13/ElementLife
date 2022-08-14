// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeAttributeSet.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"


ULifeAttributeSet::ULifeAttributeSet()
{
}

UWorld* ULifeAttributeSet::GetWorld() const
{
	const UObject* Outer = GetOuter();
	check(Outer);

	return Outer->GetWorld();
}

ULifeAbilitySystemComponent* ULifeAttributeSet::GetLifeAbilitySystemComponent() const
{
	return Cast<ULifeAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
