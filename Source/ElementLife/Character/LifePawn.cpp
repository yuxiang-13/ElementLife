// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifePawn.h"
#include "Net/UnrealNetwork.h"
#include "LifeLogChannels.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Controller.h"

ALifePawn::ALifePawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}
void ALifePawn::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ALifePawn::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ALifePawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void ALifePawn::UnPossessed()
{
	AController* const OldController = Controller;

	Super::UnPossessed();
}
