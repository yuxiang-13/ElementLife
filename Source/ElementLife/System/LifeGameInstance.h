// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CommonGameInstance.h"
#include "LifeGameInstance.generated.h"

class ULifeSocialManager;
class ULifeSocialParty;
class USocialManager;
class ALifePlayerController;

UCLASS(Config = Game)
class ELEMENTLIFE_API ULifeGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:

	ULifeGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	ALifePlayerController* GetPrimaryPlayerController() const;

protected:

	virtual void Init() override;
	virtual void Shutdown() override;
};
