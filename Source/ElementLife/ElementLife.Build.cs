// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ElementLife : ModuleRules
{
	public ElementLife(ReadOnlyTargetRules Target) : base(Target)
	{
		
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				"ElementLife"
			}
		);
		
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreOnline",
				"CoreUObject",
				"ApplicationCore",
				"Engine",
				"PhysicsCore",
				"GameplayTags",
				"GameplayTasks",
				"GameplayAbilities",
				"AIModule",
				"ModularGameplayActors",
				"DataRegistry",
				"ReplicationGraph",
				"GameFeatures",
				"SignificanceManager",
				"CommonGame",
				"ControlFlows"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"CommonUI",
				"CommonUIEditor",
				"CommonInput",
				"UMG",
				"InputCore",
				"Slate",
				"SlateCore",
				"RenderCore",
				"DeveloperSettings",
				"EnhancedInput",
				"NetCore",
				"RHI",
				"Projects",
				"Gauntlet",
				"CommonInput",
				"NetworkReplayStreaming",
				"ClientPilot",
				"CommonUser"
			}
		);
	}
}
