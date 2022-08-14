// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonLocalPlayer.h"
#include "AudioMixerBlueprintLibrary.h"
#include "LifeLocalPlayer.generated.h"

class UInputMappingContext;

/**
 * ULifeLocalPlayer
 */
UCLASS()
class ELEMENTLIFE_API ULifeLocalPlayer : public UCommonLocalPlayer
{
	GENERATED_BODY()

public:

	ULifeLocalPlayer();

	//~UObject interface
	virtual void PostInitProperties() override;
	//~End of UObject interface

	//~UPlayer interface
	virtual void SwitchController(class APlayerController* PC) override;
	//~End of UPlayer interface

	//~ULocalPlayer interface
	virtual bool SpawnPlayActor(const FString& URL, FString& OutError, UWorld* InWorld) override;
	virtual void InitOnlineSession() override;
	//~End of ULocalPlayer interface


protected:
	void OnAudioOutputDeviceChanged(const FString& InAudioOutputDeviceId);
	
	UFUNCTION()
	void OnCompletedAudioDeviceSwap(const FSwapAudioOutputResult& SwapResult);

private:
	void OnPlayerControllerChanged(APlayerController* NewController);

private:

	UPROPERTY(Transient)
	mutable const UInputMappingContext* InputMappingContext;


	UPROPERTY()
	TWeakObjectPtr<APlayerController> LastBoundPC;
};
