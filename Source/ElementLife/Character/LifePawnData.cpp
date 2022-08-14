// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifePawnData.h"
#include "GameFramework/Pawn.h"
#include "Character/LifePawnExtensionComponent.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "AbilitySystem/LifeAbilitySet.h"

ULifePawnData::ULifePawnData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PawnClass = nullptr;
	InputConfig = nullptr;
	DefaultCameraMode = nullptr;
}
