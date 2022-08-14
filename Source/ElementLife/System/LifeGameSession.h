// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "LifeGameSession.generated.h"


UCLASS(Config = Game)
class ALifeGameSession : public AGameSession
{
	GENERATED_BODY()

public:

	ALifeGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
};
