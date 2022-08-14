// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeCharacterWithAbilities.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "AbilitySystem/LifeAbilitySet.h"
#include "AbilitySystem/Attributes/LifeHealthSet.h"
#include "AbilitySystem/Attributes/LifeCombatSet.h"

ALifeCharacterWithAbilities::ALifeCharacterWithAbilities(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<ULifeAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	CreateDefaultSubobject<ULifeHealthSet>(TEXT("HealthSet"));
	CreateDefaultSubobject<ULifeCombatSet>(TEXT("CombatSet"));

	// AbilitySystemComponent needs to be updated at a high frequency.
	NetUpdateFrequency = 100.0f;
}

void ALifeCharacterWithAbilities::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

UAbilitySystemComponent* ALifeCharacterWithAbilities::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
