// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ElementLife : ModuleRules
{
	public ElementLife(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "ModularGameplayActors", "CommonUser" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
