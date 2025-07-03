// Copyright Epic Games, Inc. All Rights Reserved.

#include "BorneGameMode.h"
#include "BorneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABorneGameMode::ABorneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
