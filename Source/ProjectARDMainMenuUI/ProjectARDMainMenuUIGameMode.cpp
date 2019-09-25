// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjectARDMainMenuUIGameMode.h"
#include "ProjectARDMainMenuUICharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectARDMainMenuUIGameMode::AProjectARDMainMenuUIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
