// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonActivatableWidget.h"
#include "LifeActivatableWidget.h"

#include "LifeHUDLayout.generated.h"


/**
 * ULifeHUDLayout
 *
 *	Widget used to lay out the player's HUD (typically specified by an Add Widgets action in the experience)
 */
UCLASS(Abstract, BlueprintType, Blueprintable, Meta = (DisplayName = "Life HUD Layout", Category = "Life|HUD"))
class ULifeHUDLayout : public ULifeActivatableWidget
{
	GENERATED_BODY()

public:

	ULifeHUDLayout(const FObjectInitializer& ObjectInitializer);

	void NativeOnInitialized() override;

protected:
	void HandleEscapeAction();

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UCommonActivatableWidget> EscapeMenuClass;
};
