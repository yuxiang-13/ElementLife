// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "LifeDebugCameraController.generated.h"


/**
 * ALifeDebugCameraController
 *
 *	Used for controlling the debug camera when it is enabled via the cheat manager.
 */
UCLASS()
class ALifeDebugCameraController : public ADebugCameraController
{
	GENERATED_BODY()

public:

	ALifeDebugCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void AddCheats(bool bForce) override;
};
