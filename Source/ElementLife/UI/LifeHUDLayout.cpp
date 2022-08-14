// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeHUDLayout.h"
#include "Input/CommonInputMode.h"
#include "NativeGameplayTags.h"
#include "CommonUIExtensions.h"
#include "Input/CommonUIInputTypes.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_LAYER_MENU, "UI.Layer.Menu");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_ACTION_ESCAPE, "UI.Action.Escape");

ULifeHUDLayout::ULifeHUDLayout(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ULifeHUDLayout::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	RegisterUIActionBinding(FBindUIActionArgs(FUIActionTag::ConvertChecked(TAG_UI_ACTION_ESCAPE), false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleEscapeAction)));
}

void ULifeHUDLayout::HandleEscapeAction()
{
	if (ensure(!EscapeMenuClass.IsNull()))
	{
		UCommonUIExtensions::PushStreamedContentToLayer_ForPlayer(GetOwningLocalPlayer(), TAG_UI_LAYER_MENU, EscapeMenuClass);
	}
}