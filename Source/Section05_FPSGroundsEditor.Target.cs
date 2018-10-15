// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Section05_FPSGroundsEditorTarget : TargetRules
{
	public Section05_FPSGroundsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Section05_FPSGrounds");
	}
}
