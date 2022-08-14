// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifePlayerState.h"
#include "LifeLogChannels.h"
#include "Net/UnrealNetwork.h"
#include "LifePlayerController.h"
#include "Character/LifePawnExtensionComponent.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "AbilitySystem/LifeAbilitySet.h"
#include "AbilitySystem/Attributes/LifeHealthSet.h"
#include "AbilitySystem/Attributes/LifeCombatSet.h"
#include "Character/LifePawnData.h"
#include "Components/GameFrameworkComponentManager.h"

//@TODO: Would like to isolate this a bit better to get the pawn data in here without this having to know about other stuff
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameModes/LifeGameMode.h"
#include "GameModes/LifeExperienceManagerComponent.h"

const FName ALifePlayerState::NAME_LifeAbilityReady("LifeAbilitiesReady");

ALifePlayerState::ALifePlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, MyPlayerConnectionType(ELifePlayerConnectionType::Player)
{
	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<ULifeAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	CreateDefaultSubobject<ULifeHealthSet>(TEXT("HealthSet"));
	CreateDefaultSubobject<ULifeCombatSet>(TEXT("CombatSet"));

	// AbilitySystemComponent needs to be updated at a high frequency.
	NetUpdateFrequency = 100.0f;

	MySquadID = INDEX_NONE;
}

void ALifePlayerState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void ALifePlayerState::Reset()
{
	Super::Reset();
}

void ALifePlayerState::ClientInitialize(AController* C)
{
	Super::ClientInitialize(C);

	if (ULifePawnExtensionComponent* PawnExtComp = ULifePawnExtensionComponent::FindPawnExtensionComponent(GetPawn()))
	{
		PawnExtComp->CheckPawnReadyToInitialize();
	}
}

void ALifePlayerState::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	//@TODO: Copy stats
}

void ALifePlayerState::OnDeactivated()
{
	bool bDestroyDeactivatedPlayerState = false;

	switch (GetPlayerConnectionType())
	{
		case ELifePlayerConnectionType::Player:
		case ELifePlayerConnectionType::InactivePlayer:
			//@TODO: Ask the experience if we should destroy disconnecting players immediately or leave them around
			// (e.g., for long running servers where they might build up if lots of players cycle through)
			bDestroyDeactivatedPlayerState = true;
			break;
		default:
			bDestroyDeactivatedPlayerState = true;
			break;
	}
	
	SetPlayerConnectionType(ELifePlayerConnectionType::InactivePlayer);

	if (bDestroyDeactivatedPlayerState)
	{
		Destroy();
	}
}

void ALifePlayerState::OnReactivated()
{
	if (GetPlayerConnectionType() == ELifePlayerConnectionType::InactivePlayer)
	{
		SetPlayerConnectionType(ELifePlayerConnectionType::Player);
	}
}

void ALifePlayerState::OnExperienceLoaded(const ULifeExperienceDefinition* /*CurrentExperience*/)
{
	if (ALifeGameMode* LifeGameMode = GetWorld()->GetAuthGameMode<ALifeGameMode>())
	{
		if (const ULifePawnData* NewPawnData = LifeGameMode->GetPawnDataForController(GetOwningController()))
		{
			SetPawnData(NewPawnData);
		}
		else
		{
			UE_LOG(LogLife, Error, TEXT("ALifePlayerState::OnExperienceLoaded(): Unable to find PawnData to initialize player state [%s]!"), *GetNameSafe(this));
		}
	}
}

void ALifePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	FDoRepLifetimeParams SharedParams;
	SharedParams.bIsPushBased = true;

	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, PawnData, SharedParams);
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, MyPlayerConnectionType, SharedParams)
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, MySquadID, SharedParams);

	DOREPLIFETIME(ThisClass, StatTags);
}

ALifePlayerController* ALifePlayerState::GetLifePlayerController() const
{
	return Cast<ALifePlayerController>(GetOwner());
}

UAbilitySystemComponent* ALifePlayerState::GetAbilitySystemComponent() const
{
	return GetLifeAbilitySystemComponent();
}

void ALifePlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, GetPawn());

	if (GetNetMode() != NM_Client)
	{
		AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);
		ULifeExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<ULifeExperienceManagerComponent>();
		check(ExperienceComponent);
		ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnLifeExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	}
}

void ALifePlayerState::SetPawnData(const ULifePawnData* InPawnData)
{
	check(InPawnData);

	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if (PawnData)
	{
		UE_LOG(LogLife, Error, TEXT("Trying to set PawnData [%s] on player state [%s] that already has valid PawnData [%s]."), *GetNameSafe(InPawnData), *GetNameSafe(this), *GetNameSafe(PawnData));
		return;
	}

	MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, PawnData, this);
	PawnData = InPawnData;

	for (const ULifeAbilitySet* AbilitySet : PawnData->AbilitySets)
	{
		if (AbilitySet)
		{
			AbilitySet->GiveToAbilitySystem(AbilitySystemComponent, nullptr);
		}
	}

	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(this, NAME_LifeAbilityReady);
	
	ForceNetUpdate();
}

void ALifePlayerState::OnRep_PawnData()
{
}

void ALifePlayerState::SetPlayerConnectionType(ELifePlayerConnectionType NewType)
{
	MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, MyPlayerConnectionType, this);
	MyPlayerConnectionType = NewType;
}

void ALifePlayerState::SetSquadID(int32 NewSquadId)
{
	if (HasAuthority())
	{
		MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, MySquadID, this);

		MySquadID = NewSquadId;
	}
}



void ALifePlayerState::OnRep_MySquadID()
{
	//@TODO: Let the squad subsystem know (once that exists)
}

void ALifePlayerState::AddStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.AddStack(Tag, StackCount);
}

void ALifePlayerState::RemoveStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.RemoveStack(Tag, StackCount);
}

int32 ALifePlayerState::GetStatTagStackCount(FGameplayTag Tag) const
{
	return StatTags.GetStackCount(Tag);
}

bool ALifePlayerState::HasStatTag(FGameplayTag Tag) const
{
	return StatTags.ContainsTag(Tag);
}

void ALifePlayerState::ClientBroadcastMessage_Implementation(const FLifeVerbMessage Message)
{
	// This check is needed to prevent running the action when in standalone mode
	if (GetNetMode() == NM_Client)
	{
		UGameplayMessageSubsystem::Get(this).BroadcastMessage(Message.Verb, Message);
	}
}
