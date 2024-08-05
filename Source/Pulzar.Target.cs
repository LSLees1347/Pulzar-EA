// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class PulzarTarget : TargetRules
{
	public PulzarTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		bUsesSteam = true;

		ExtraModuleNames.AddRange( new string[] { "Pulzar" } );
	}
}
