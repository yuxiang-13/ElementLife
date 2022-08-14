// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeLocalPlayer.h"
#include "Input/LifeInputConfig.h"
#include "InputMappingContext.h"
#include "AudioMixerBlueprintLibrary.h"
#include "GameFramework/PlayerController.h"

ULifeLocalPlayer::ULifeLocalPlayer()
{
}

void ULifeLocalPlayer::PostInitProperties()
{
	Super::PostInitProperties();
}

void ULifeLocalPlayer::SwitchController(class APlayerController* PC)
{
	Super::SwitchController(PC);

	OnPlayerControllerChanged(PlayerController);
}

bool ULifeLocalPlayer::SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld)
{
	const bool bResult = Super::SpawnPlayActor(URL, OutError, InWorld);

	OnPlayerControllerChanged(PlayerController);

	return bResult;
}

void ULifeLocalPlayer::InitOnlineSession()
{
	OnPlayerControllerChanged(PlayerController);

	Super::InitOnlineSession();
}

void ULifeLocalPlayer::OnPlayerControllerChanged(APlayerController* NewController)
{
}

// ULifeSettingsLocal* ULifeLocalPlayer::GetLocalSettings() const
// {
// 	return ULifeSettingsLocal::Get();
// }

// ULifeSettingsShared* ULifeLocalPlayer::GetSharedSettings() const
// {
// 	if (!SharedSettings)
// 	{
// 		SharedSettings = ULifeSettingsShared::LoadOrCreateSettings(this);
// 	}
//
// 	return SharedSettings;
// }

void ULifeLocalPlayer::OnAudioOutputDeviceChanged(const FString& InAudioOutputDeviceId)
{
	FOnCompletedDeviceSwap DevicesSwappedCallback;
	DevicesSwappedCallback.BindUFunction(this, FName("OnCompletedAudioDeviceSwap"));
	UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(GetWorld(), InAudioOutputDeviceId, DevicesSwappedCallback);
}

void ULifeLocalPlayer::OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult)
{
	if (SwapResult.Result == ESwapAudioOutputDeviceResultState::Failure)
	{
	}
}