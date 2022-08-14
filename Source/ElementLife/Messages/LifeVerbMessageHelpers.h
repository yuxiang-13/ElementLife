// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LifeVerbMessage.h"
#include "GameplayEffectTypes.h"

#include "LifeVerbMessageHelpers.generated.h"

class APlayerState;
class APlayerController;
struct FGameplayCueParameters;


UCLASS()
class ELEMENTLIFE_API ULifeVerbMessageHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Life")
	static APlayerState* GetPlayerStateFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "Life")
	static APlayerController* GetPlayerControllerFromObject(UObject* Object);

	UFUNCTION(BlueprintCallable, Category = "Life")
	static FGameplayCueParameters VerbMessageToCueParameters(const FLifeVerbMessage& Message);

	UFUNCTION(BlueprintCallable, Category = "Life")
	static FLifeVerbMessage CueParametersToVerbMessage(const FGameplayCueParameters& Params);
};
