// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatalhaGameMode.h"
#include "BatalhaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABatalhaGameMode::ABatalhaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
