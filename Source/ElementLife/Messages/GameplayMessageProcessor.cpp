// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameplayMessageProcessor.h"

#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameFramework/GameStateBase.h"

void UGameplayMessageProcessor::BeginPlay()
{
	Super::BeginPlay();

	StartListening();
}

void UGameplayMessageProcessor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	StopListening();

	// Remove any listener handles
	UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);
	for (FGameplayMessageListenerHandle& Handle : ListenerHandles)
	{
		MessageSubsystem.UnregisterListener(Handle);
	}
	ListenerHandles.Empty();
}

void UGameplayMessageProcessor::StartListening()
{

}

void UGameplayMessageProcessor::StopListening()
{
}

void UGameplayMessageProcessor::AddListenerHandle(FGameplayMessageListenerHandle&& Handle)
{
	ListenerHandles.Add(MoveTemp(Handle));
}

double UGameplayMessageProcessor::GetServerTime() const
{
	if (AGameStateBase* GameState = GetWorld()->GetGameState())
	{
		return GameState->GetServerWorldTimeSeconds();
	}
	else
	{
		return 0.0;
	}
}
