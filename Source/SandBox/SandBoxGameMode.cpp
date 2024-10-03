// Copyright Epic Games, Inc. All Rights Reserved.

#include "SandBoxGameMode.h"
#include "SandBoxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASandBoxGameMode::ASandBoxGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
