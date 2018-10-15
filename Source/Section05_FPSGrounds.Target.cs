// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Section05_FPSGroundsTarget : TargetRules
{
	public Section05_FPSGroundsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Section05_FPSGrounds");
	}
}
