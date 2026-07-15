// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleAssaultNew : ModuleRules
{
	public ObstacleAssaultNew(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleAssaultNew",
			"ObstacleAssaultNew/Variant_Platforming",
			"ObstacleAssaultNew/Variant_Platforming/Animation",
			"ObstacleAssaultNew/Variant_Combat",
			"ObstacleAssaultNew/Variant_Combat/AI",
			"ObstacleAssaultNew/Variant_Combat/Animation",
			"ObstacleAssaultNew/Variant_Combat/Gameplay",
			"ObstacleAssaultNew/Variant_Combat/Interfaces",
			"ObstacleAssaultNew/Variant_Combat/UI",
			"ObstacleAssaultNew/Variant_SideScrolling",
			"ObstacleAssaultNew/Variant_SideScrolling/AI",
			"ObstacleAssaultNew/Variant_SideScrolling/Gameplay",
			"ObstacleAssaultNew/Variant_SideScrolling/Interfaces",
			"ObstacleAssaultNew/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
