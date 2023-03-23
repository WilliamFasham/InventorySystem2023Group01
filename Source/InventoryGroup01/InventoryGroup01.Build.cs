// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class InventoryGroup01 : ModuleRules
{
	public InventoryGroup01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
