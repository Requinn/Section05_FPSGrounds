// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Section05_FPSGroundsHUD.generated.h"

UCLASS()
class ASection05_FPSGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASection05_FPSGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

