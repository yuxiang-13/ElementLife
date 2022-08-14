// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeLogChannels.h"
#include "GameFramework/Actor.h"

DEFINE_LOG_CATEGORY(LogLife);
DEFINE_LOG_CATEGORY(LogLifeExperience);
DEFINE_LOG_CATEGORY(LogLifeAbilitySystem);
DEFINE_LOG_CATEGORY(LogLifeTeams);

FString GetClientServerContextString(UObject* ContextObject)
{
	ENetRole Role = ROLE_None;

	if (AActor* Actor = Cast<AActor>(ContextObject))
	{
		Role = Actor->GetLocalRole();
	}
	else if (UActorComponent* Component = Cast<UActorComponent>(ContextObject))
	{
		Role = Component->GetOwnerRole();
	}

	if (Role != ROLE_None)
	{
		return (Role == ROLE_Authority) ? TEXT("Server") : TEXT("Client");
	}
	else
	{
#if WITH_EDITOR
		if (GIsEditor)
		{
			extern ENGINE_API FString GPlayInEditorContextString;
			return GPlayInEditorContextString;
		}
#endif
	}

	return TEXT("[]");
}
