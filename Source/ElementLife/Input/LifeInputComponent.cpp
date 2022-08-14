// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeInputComponent.h"
#include "Player/LifeLocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "PlayerMappableInputConfig.h"

ULifeInputComponent::ULifeInputComponent(const FObjectInitializer& ObjectInitializer)
{
}

void ULifeInputComponent::AddInputMappings(const ULifeInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	ULifeLocalPlayer* LocalPlayer = InputSubsystem->GetLocalPlayer<ULifeLocalPlayer>();
	check(LocalPlayer);

	
}

void ULifeInputComponent::RemoveInputMappings(const ULifeInputConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const
{
	check(InputConfig);
	check(InputSubsystem);

	ULifeLocalPlayer* LocalPlayer = InputSubsystem->GetLocalPlayer<ULifeLocalPlayer>();
	check(LocalPlayer);
	
	
}

void ULifeInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}

void ULifeInputComponent::AddInputConfig(const FLoadedMappableConfigPair& ConfigPair, UEnhancedInputLocalPlayerSubsystem* InputSubsystem)
{
	check(InputSubsystem);
	if (ensure(ConfigPair.bIsActive))
	{
		InputSubsystem->AddPlayerMappableConfig(ConfigPair.Config);	
	}
}

void ULifeInputComponent::RemoveInputConfig(const FLoadedMappableConfigPair& ConfigPair, UEnhancedInputLocalPlayerSubsystem* InputSubsystem)
{
	check(InputSubsystem);
	if (!ConfigPair.bIsActive)
	{
		InputSubsystem->AddPlayerMappableConfig(ConfigPair.Config);	
	}	
}