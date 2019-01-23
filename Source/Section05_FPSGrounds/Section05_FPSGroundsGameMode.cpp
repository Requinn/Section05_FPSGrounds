// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Section05_FPSGroundsGameMode.h"
#include "Section05_FPSGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASection05_FPSGroundsGameMode::ASection05_FPSGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Player/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASection05_FPSGroundsHUD::StaticClass();
}
