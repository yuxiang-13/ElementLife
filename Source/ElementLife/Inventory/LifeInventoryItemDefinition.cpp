// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeInventoryItemDefinition.h"

//////////////////////////////////////////////////////////////////////
// ULifeInventoryItemDefinition

ULifeInventoryItemDefinition::ULifeInventoryItemDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

const ULifeInventoryItemFragment* ULifeInventoryItemDefinition::FindFragmentByClass(TSubclassOf<ULifeInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (ULifeInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

//////////////////////////////////////////////////////////////////////
// ULifeInventoryItemDefinition

const ULifeInventoryItemFragment* ULifeInventoryFunctionLibrary::FindItemDefinitionFragment(TSubclassOf<ULifeInventoryItemDefinition> ItemDef, TSubclassOf<ULifeInventoryItemFragment> FragmentClass)
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<ULifeInventoryItemDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}
	return nullptr;
}
