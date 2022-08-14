// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "LifePawnComponent.generated.h"


UINTERFACE(BlueprintType)
class ELEMENTLIFE_API ULifeReadyInterface : public UInterface
{
	GENERATED_BODY()
};

class ILifeReadyInterface
{
	GENERATED_BODY()

public:
	virtual bool IsPawnComponentReadyToInitialize() const = 0;
};




/**
 * ULifePawnComponent
 *
 *	An actor component that can be used for adding custom behavior to pawns.
 */
UCLASS(Blueprintable, Meta = (BlueprintSpawnableComponent))
class ELEMENTLIFE_API ULifePawnComponent : public UPawnComponent, public ILifeReadyInterface
{
	GENERATED_BODY()

public:

	ULifePawnComponent(const FObjectInitializer& ObjectInitializer);

	virtual bool IsPawnComponentReadyToInitialize() const override { return true; }
};
