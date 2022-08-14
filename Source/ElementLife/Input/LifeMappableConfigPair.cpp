// Copyright Epic Games, Inc. All Rights Reserved.

#include "Input/LifeMappableConfigPair.h"
#include "System/LifeAssetManager.h"
#include "ICommonUIModule.h"
#include "CommonUISettings.h"
#include "PlayerMappableInputConfig.h"

bool FMappableConfigPair::CanBeActivated() const
{
	const FGameplayTagContainer& PlatformTraits = ICommonUIModule::GetSettings().GetPlatformTraits();

	// If the current platform does NOT have all the dependent traits, then don't activate it
	if (!DependentPlatformTraits.IsEmpty() && !PlatformTraits.HasAll(DependentPlatformTraits))
	{
		return false;
	}

	// If the platform has any of the excluded traits, then we shouldn't activate this config.
	if (!ExcludedPlatformTraits.IsEmpty() && PlatformTraits.HasAny(ExcludedPlatformTraits))
	{
		return false;
	}

	return true;
}

bool FMappableConfigPair::RegisterPair(const FMappableConfigPair& Pair)
{
	ULifeAssetManager& AssetManager = ULifeAssetManager::Get();

	
	return false;
}

bool FMappableConfigPair::ActivatePair(const FMappableConfigPair& Pair)
{
	ULifeAssetManager& AssetManager = ULifeAssetManager::Get();
	// Only activate a pair that has been successfully registered
	if (FMappableConfigPair::RegisterPair(Pair) && Pair.CanBeActivated())
	{		
	}
	return false;
}

void FMappableConfigPair::DeactivatePair(const FMappableConfigPair& Pair)
{
	ULifeAssetManager& AssetManager = ULifeAssetManager::Get();
	
}

void FMappableConfigPair::UnregisterPair(const FMappableConfigPair& Pair)
{
	ULifeAssetManager& AssetManager = ULifeAssetManager::Get();

}
