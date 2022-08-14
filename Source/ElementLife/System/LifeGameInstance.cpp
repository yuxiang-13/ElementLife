// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameInstance.h"
#include "Player/LifePlayerController.h"

ULifeGameInstance::ULifeGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ULifeGameInstance::Init()
{
	Super::Init();
}

void ULifeGameInstance::Shutdown()
{
	Super::Shutdown();
}

ALifePlayerController* ULifeGameInstance::GetPrimaryPlayerController() const
{
	return Cast<ALifePlayerController>(Super::GetPrimaryPlayerController(false));
}