// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeExperienceManager.h"
#include "Engine/AssetManager.h"
#include "LifeExperienceDefinition.h"
#include "GameModes/LifeExperienceManager.h"
#include "Engine/Engine.h"

#if WITH_EDITOR

void ULifeExperienceManager::OnPlayInEditorBegun()
{
	ensure(GameFeaturePluginRequestCountMap.IsEmpty());
	GameFeaturePluginRequestCountMap.Empty();
}

void ULifeExperienceManager::NotifyOfPluginActivation(const FString PluginURL)
{
	if (GIsEditor)
	{
		ULifeExperienceManager* ExperienceManagerSubsystem = GEngine->GetEngineSubsystem<ULifeExperienceManager>();
		check(ExperienceManagerSubsystem);

		// Track the number of requesters who activate this plugin. Multiple load/activation requests are always allowed because concurrent requests are handled.
		int32& Count = ExperienceManagerSubsystem->GameFeaturePluginRequestCountMap.FindOrAdd(PluginURL);
		++Count;
	}
}

bool ULifeExperienceManager::RequestToDeactivatePlugin(const FString PluginURL)
{
	if (GIsEditor)
	{
		ULifeExperienceManager* ExperienceManagerSubsystem = GEngine->GetEngineSubsystem<ULifeExperienceManager>();
		check(ExperienceManagerSubsystem);

		// Only let the last requester to get this far deactivate the plugin
		int32& Count = ExperienceManagerSubsystem->GameFeaturePluginRequestCountMap.FindChecked(PluginURL);
		--Count;

		if (Count == 0)
		{
			ExperienceManagerSubsystem->GameFeaturePluginRequestCountMap.Remove(PluginURL);
			return true;
		}

		return false;
	}

	return true;
}

#endif