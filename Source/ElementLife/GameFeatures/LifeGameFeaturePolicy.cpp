// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFeatures/LifeGameFeaturePolicy.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Engine/Engine.h"
#include "GameFeaturesSubsystem.h"
#include "GameFeatureData.h"
#include "GameFeaturesSubsystemSettings.h"
#include "AbilitySystem/LifeGameplayCueManager.h"
#include "GameplayCueSet.h"

ULifeGameFeaturePolicy::ULifeGameFeaturePolicy(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

ULifeGameFeaturePolicy& ULifeGameFeaturePolicy::Get()
{
	return UGameFeaturesSubsystem::Get().GetPolicy<ULifeGameFeaturePolicy>();
}

void ULifeGameFeaturePolicy::InitGameFeatureManager()
{
	Observers.Add(NewObject<ULifeGameFeature_HotfixManager>());
	Observers.Add(NewObject<ULifeGameFeature_AddGameplayCuePaths>());

	UGameFeaturesSubsystem& Subsystem = UGameFeaturesSubsystem::Get();
	for (UObject* Observer : Observers)
	{
		Subsystem.AddObserver(Observer);
	}

	Super::InitGameFeatureManager();
}

void ULifeGameFeaturePolicy::ShutdownGameFeatureManager()
{
	Super::ShutdownGameFeatureManager();

	UGameFeaturesSubsystem& Subsystem = UGameFeaturesSubsystem::Get();
	for (UObject* Observer : Observers)
	{
		Subsystem.RemoveObserver(Observer);
	}
	Observers.Empty();
}

TArray<FPrimaryAssetId> ULifeGameFeaturePolicy::GetPreloadAssetListForGameFeature(const UGameFeatureData* GameFeatureToLoad) const
{
	return Super::GetPreloadAssetListForGameFeature(GameFeatureToLoad);
}

const TArray<FName> ULifeGameFeaturePolicy::GetPreloadBundleStateForGameFeature() const
{
	return Super::GetPreloadBundleStateForGameFeature();
}

void ULifeGameFeaturePolicy::GetGameFeatureLoadingMode(bool& bLoadClientData, bool& bLoadServerData) const
{
	// Editor will load both, this can cause hitching as the bundles are set to not preload in editor
	bLoadClientData = !IsRunningDedicatedServer();
	bLoadServerData = !IsRunningClientOnly();
}

bool ULifeGameFeaturePolicy::IsPluginAllowed(const FString& PluginURL) const
{
	return Super::IsPluginAllowed(PluginURL);
}

//////////////////////////////////////////////////////////////////////
//

#include "Hotfix/LifeHotfixManager.h"

void ULifeGameFeature_HotfixManager::OnGameFeatureLoading(const UGameFeatureData* GameFeatureData)
{
	if (ULifeHotfixManager* HotfixManager = Cast<ULifeHotfixManager>(UOnlineHotfixManager::Get(nullptr)))
	{
		HotfixManager->RequestPatchAssetsFromIniFiles();
	}
}

//////////////////////////////////////////////////////////////////////
//

#include "GameFeatureAction_AddGameplayCuePath.h"
#include "GameplayCueManager.h"
#include "AbilitySystemGlobals.h"

void ULifeGameFeature_AddGameplayCuePaths::OnGameFeatureRegistering(const UGameFeatureData* GameFeatureData, const FString& PluginName)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(ULifeGameFeature_AddGameplayCuePaths::OnGameFeatureRegistering);
	
	const FString PluginRootPath = TEXT("/") + PluginName;
	for (const UGameFeatureAction* Action : GameFeatureData->GetActions())
	{
		if (const UGameFeatureAction_AddGameplayCuePath* AddGameplayCueGFA = Cast<UGameFeatureAction_AddGameplayCuePath>(Action))
		{
			const TArray<FDirectoryPath>& DirsToAdd = AddGameplayCueGFA->GetDirectoryPathsToAdd();
			
			if (ULifeGameplayCueManager* GCM = ULifeGameplayCueManager::Get())
			{
				UGameplayCueSet* RuntimeGameplayCueSet = GCM->GetRuntimeCueSet();
				const int32 PreInitializeNumCues = RuntimeGameplayCueSet ? RuntimeGameplayCueSet->GameplayCueData.Num() : 0;

				for (const FDirectoryPath& Directory : DirsToAdd)
				{
					FString MutablePath = Directory.Path;
					UGameFeaturesSubsystem::FixPluginPackagePath(MutablePath, PluginRootPath, false);
					GCM->AddGameplayCueNotifyPath(MutablePath, /** bShouldRescanCueAssets = */ false);	
				}
				
				// Rebuild the runtime library with these new paths
				if (!DirsToAdd.IsEmpty())
				{
					GCM->InitializeRuntimeObjectLibrary();	
				}

				const int32 PostInitializeNumCues = RuntimeGameplayCueSet ? RuntimeGameplayCueSet->GameplayCueData.Num() : 0;
				if (PreInitializeNumCues != PostInitializeNumCues)
				{
					GCM->RefreshGameplayCuePrimaryAsset();
				}
			}
		}
	}
}

void ULifeGameFeature_AddGameplayCuePaths::OnGameFeatureUnregistering(const UGameFeatureData* GameFeatureData, const FString& PluginName)
{
	const FString PluginRootPath = TEXT("/") + PluginName;
	for (const UGameFeatureAction* Action : GameFeatureData->GetActions())
	{
		if (const UGameFeatureAction_AddGameplayCuePath* AddGameplayCueGFA = Cast<UGameFeatureAction_AddGameplayCuePath>(GameFeatureData))
		{
			const TArray<FDirectoryPath>& DirsToAdd = AddGameplayCueGFA->GetDirectoryPathsToAdd();
			
			if (UGameplayCueManager* GCM = UAbilitySystemGlobals::Get().GetGameplayCueManager())
			{
				int32 NumRemoved = 0;
				for (const FDirectoryPath& Directory : DirsToAdd)
				{
					FString MutablePath = Directory.Path;
					UGameFeaturesSubsystem::FixPluginPackagePath(MutablePath, PluginRootPath, false);
					NumRemoved += GCM->RemoveGameplayCueNotifyPath(MutablePath, /** bShouldRescanCueAssets = */ false);
				}

				ensure(NumRemoved == DirsToAdd.Num());
				
				// Rebuild the runtime library only if there is a need to
				if (NumRemoved > 0)
				{
					GCM->InitializeRuntimeObjectLibrary();	
				}			
			}
	}
	}
}