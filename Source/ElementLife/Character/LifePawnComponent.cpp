// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifePawnComponent.h"


ULifePawnComponent::ULifePawnComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}
