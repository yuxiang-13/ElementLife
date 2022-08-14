// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeTextHotfixConfig.h"
#include "Internationalization/TextLocalizationManager.h"

ULifeTextHotfixConfig::ULifeTextHotfixConfig(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ULifeTextHotfixConfig::ApplyTextReplacements() const
{
	FTextLocalizationManager::Get().RegisterPolyglotTextData(TextReplacements);
}

void ULifeTextHotfixConfig::PostInitProperties()
{
	Super::PostInitProperties();
	ApplyTextReplacements();
}

void ULifeTextHotfixConfig::PostReloadConfig(FProperty* PropertyThatWasLoaded)
{
	Super::PostReloadConfig(PropertyThatWasLoaded);
	ApplyTextReplacements();
}

#if WITH_EDITOR
void ULifeTextHotfixConfig::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	ApplyTextReplacements();
}
#endif
