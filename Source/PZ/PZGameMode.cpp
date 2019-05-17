// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PZGameMode.h"
#include "PZHUD.h"
#include "PZCharacter.h"
#include "UObject/ConstructorHelpers.h"

APZGameMode::APZGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APZHUD::StaticClass();
}
