// Copyright Epic Games, Inc. All Rights Reserved.

#include "R1GameMode.h"
#include "R1PlayerController.h"
#include "R1Character.h"
#include "UObject/ConstructorHelpers.h"

AR1GameMode::AR1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AR1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}