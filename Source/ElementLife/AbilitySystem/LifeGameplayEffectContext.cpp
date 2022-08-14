// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameplayEffectContext.h"
#include "Components/PrimitiveComponent.h"
#include "AbilitySystem/LifeAbilitySourceInterface.h"

FLifeGameplayEffectContext* FLifeGameplayEffectContext::ExtractEffectContext(struct FGameplayEffectContextHandle Handle)
{
	FGameplayEffectContext* BaseEffectContext = Handle.Get();
	if ((BaseEffectContext != nullptr) && BaseEffectContext->GetScriptStruct()->IsChildOf(FLifeGameplayEffectContext::StaticStruct()))
	{
		return (FLifeGameplayEffectContext*)BaseEffectContext;
	}

	return nullptr;
}

bool FLifeGameplayEffectContext::NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
{
	FGameplayEffectContext::NetSerialize(Ar, Map, bOutSuccess);

	// Not serialized for post-activation use:
	// CartridgeID

	return true;
}

void FLifeGameplayEffectContext::SetAbilitySource(const ILifeAbilitySourceInterface* InObject, float InSourceLevel)
{
	AbilitySourceObject = MakeWeakObjectPtr(Cast<const UObject>(InObject));
	//SourceLevel = InSourceLevel;
}

const ILifeAbilitySourceInterface* FLifeGameplayEffectContext::GetAbilitySource() const
{
	return Cast<ILifeAbilitySourceInterface>(AbilitySourceObject.Get());
}

const UPhysicalMaterial* FLifeGameplayEffectContext::GetPhysicalMaterial() const
{
	if (const FHitResult* HitResultPtr = GetHitResult())
	{
		return HitResultPtr->PhysMaterial.Get();
	}
	return nullptr;
}
