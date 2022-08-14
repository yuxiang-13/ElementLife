// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbilitySystem/Abilities/LifeGameplayAbility_Reset.h"
#include "TimerManager.h"
#include "LifeLogChannels.h"
#include "GameplayTagsManager.h"
#include "LifeGameplayTags.h"
#include "AbilitySystem/LifeAbilitySystemComponent.h"
#include "Character/LifeCharacter.h"
#include "GameFramework/GameplayMessageSubsystem.h"

ULifeGameplayAbility_Reset::ULifeGameplayAbility_Reset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

	UGameplayTagsManager::Get().CallOrRegister_OnDoneAddingNativeTagsDelegate(FSimpleDelegate::CreateUObject(this, &ThisClass::DoneAddingNativeTags));
}

void ULifeGameplayAbility_Reset::DoneAddingNativeTags()
{
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		// Add the ability trigger tag as default to the CDO.
		FAbilityTriggerData TriggerData;
		TriggerData.TriggerTag = FLifeGameplayTags::Get().GameplayEvent_RequestReset;
		TriggerData.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
		AbilityTriggers.Add(TriggerData);
	}
}

void ULifeGameplayAbility_Reset::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	check(ActorInfo);

	ULifeAbilitySystemComponent* LifeASC = CastChecked<ULifeAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get());

	FGameplayTagContainer AbilityTypesToIgnore;
	AbilityTypesToIgnore.AddTag(FLifeGameplayTags::Get().Ability_Behavior_SurvivesDeath);

	// Cancel all abilities and block others from starting.
	LifeASC->CancelAbilities(nullptr, &AbilityTypesToIgnore, this);

	SetCanBeCanceled(false);

	if (!ChangeActivationGroup(ELifeAbilityActivationGroup::Exclusive_Blocking))
	{
		UE_LOG(LogLifeAbilitySystem, Error, TEXT("ULifeGameplayAbility_Reset::ActivateAbility: Ability [%s] failed to change activation group to blocking."), *GetName());
	}

	// Execute the reset from the character
	if (ALifeCharacter* LifeChar = Cast<ALifeCharacter>(CurrentActorInfo->AvatarActor.Get()))
	{
		LifeChar->Reset();
	}

	// Let others know a reset has occurred
	FLifePlayerResetMessage Message;
	Message.OwnerPlayerState = CurrentActorInfo->OwnerActor.Get();
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(FLifeGameplayTags::Get().GameplayEvent_Reset, Message);

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	const bool bReplicateEndAbility = true;
	const bool bWasCanceled = false;
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, bReplicateEndAbility, bWasCanceled);
}
