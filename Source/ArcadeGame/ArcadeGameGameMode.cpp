// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArcadeGameGameMode.h"
#include "ArcadeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArcadeGameGameMode::AArcadeGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
