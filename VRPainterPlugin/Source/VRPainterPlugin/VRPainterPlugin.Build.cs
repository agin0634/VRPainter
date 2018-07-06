// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VRPainterPlugin : ModuleRules
{
	public VRPainterPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        //bEnforceIWYU = true;

        //Engine Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "HeadMountedDisplay" });

        //The path for the header files
        PublicIncludePaths.AddRange(new string[] { "VRPainterPlugin/Public" });

        //The path for the source files
        PrivateIncludePaths.AddRange(new string[] { "VRPainterPlugin/Private" });

        DynamicallyLoadedModuleNames.AddRange(new string[] { "VRPainterPlugin" });
    }
}
