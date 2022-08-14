// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LifePawnData.generated.h"

class APawn;
class ULifeAbilitySet;
class ULifeInputConfig;
class ULifeAbilityTagRelationshipMapping;
class ULifeCameraMode;


/**
 * ULifePawnData
 *
 *	Non-mutable data asset that contains properties used to define a pawn.
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Life Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class ULifePawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	ULifePawnData(const FObjectInitializer& ObjectInitializer);

public:

	// Class to instantiate for this pawn (should usually derive from ALifePawn or ALifeCharacter).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Life|Pawn")
	TSubclassOf<APawn> PawnClass;

	// Ability sets to grant to this pawn's ability system.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Life|Abilities")
	TArray<ULifeAbilitySet*> AbilitySets;

	// What mapping of ability tags to use for actions taking by this pawn
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Life|Abilities")
	ULifeAbilityTagRelationshipMapping* TagRelationshipMapping;

	// Input configuration used by player controlled pawns to create input mappings and bind input actions.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Life|Input")
	ULifeInputConfig* InputConfig;

	// Default camera mode used by player controlled pawns.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Life|Camera")
	TSubclassOf<ULifeCameraMode> DefaultCameraMode;
};
