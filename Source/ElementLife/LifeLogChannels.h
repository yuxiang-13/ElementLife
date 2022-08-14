// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"

ELEMENTLIFE_API DECLARE_LOG_CATEGORY_EXTERN(LogLife, Log, All);
ELEMENTLIFE_API DECLARE_LOG_CATEGORY_EXTERN(LogLifeExperience, Log, All);
ELEMENTLIFE_API DECLARE_LOG_CATEGORY_EXTERN(LogLifeAbilitySystem, Log, All);
ELEMENTLIFE_API DECLARE_LOG_CATEGORY_EXTERN(LogLifeTeams, Log, All);

ELEMENTLIFE_API FString GetClientServerContextString(UObject* ContextObject = nullptr);
