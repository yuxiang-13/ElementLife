// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LifeInventoryItemDefinition.generated.h"

class ULifeInventoryItemInstance;

//////////////////////////////////////////////////////////////////////

// Represents a fragment of an item definition
UCLASS(DefaultToInstanced, EditInlineNew, Abstract)
class ULifeInventoryItemFragment : public UObject
{
	GENERATED_BODY()

public:
	virtual void OnInstanceCreated(ULifeInventoryItemInstance* Instance) const {}
};

//////////////////////////////////////////////////////////////////////

/**
 * ULifeInventoryItemDefinition
 */
UCLASS(Blueprintable, Const, Abstract)
class ULifeInventoryItemDefinition : public UObject
{
	GENERATED_BODY()

public:
	ULifeInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, Instanced)
	TArray<TObjectPtr<ULifeInventoryItemFragment>> Fragments;

public:
	const ULifeInventoryItemFragment* FindFragmentByClass(TSubclassOf<ULifeInventoryItemFragment> FragmentClass) const;
};

//@TODO: Make into a subsystem instead?
UCLASS()
class ULifeInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType=FragmentClass))
	static const ULifeInventoryItemFragment* FindItemDefinitionFragment(TSubclassOf<ULifeInventoryItemDefinition> ItemDef, TSubclassOf<ULifeInventoryItemFragment> FragmentClass);
};
