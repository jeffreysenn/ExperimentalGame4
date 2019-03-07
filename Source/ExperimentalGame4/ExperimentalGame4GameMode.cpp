// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ExperimentalGame4GameMode.h"
#include "ExperimentalGame4Character.h"
#include "UObject/ConstructorHelpers.h"

AExperimentalGame4GameMode::AExperimentalGame4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
