// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PvZ_B : ModuleRules
{
	public PvZ_B(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
