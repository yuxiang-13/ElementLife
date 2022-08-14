// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "LifeGameEngine.generated.h"


UCLASS()
class ULifeGameEngine : public UGameEngine
{
	GENERATED_BODY()

public:

	ULifeGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void Init(IEngineLoop* InEngineLoop) override;
};
