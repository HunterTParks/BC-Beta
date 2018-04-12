// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BC_BetaGameMode.h"
#include "BC_BetaHUD.h"
#include "BC_BetaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABC_BetaGameMode::ABC_BetaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABC_BetaHUD::StaticClass();
}
