// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BC_BetaHUD.generated.h"

UCLASS()
class ABC_BetaHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABC_BetaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

