// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiPlayerKeyboard : ModuleRules
{
	public MultiPlayerKeyboard(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"MultiPlayerKeyboard/Public"
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"MultiPlayerKeyboard/Private",
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "Engine"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
                "InputCore"
            }
			);
	}
}
