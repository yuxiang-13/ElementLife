// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameSession.h"


ALifeGameSession::ALifeGameSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ALifeGameSession::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();
}

void ALifeGameSession::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();
}
