// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryGroup01GameMode.h"
#include "InventoryGroup01Character.h"
#include "UObject/ConstructorHelpers.h"

AInventoryGroup01GameMode::AInventoryGroup01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
