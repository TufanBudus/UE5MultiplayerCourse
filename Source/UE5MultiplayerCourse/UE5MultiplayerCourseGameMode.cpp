// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5MultiplayerCourseGameMode.h"
#include "UE5MultiplayerCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5MultiplayerCourseGameMode::AUE5MultiplayerCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
