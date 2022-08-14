// Copyright Epic Games, Inc. All Rights Reserved.


#include "Input/LifeInputComboComponent.h"
#include "EnhancedInputComponent.h"
#include "LifeInputComponent.h"
#include "GameFramework/PlayerController.h"

ULifeInputComboComponent::ULifeInputComboComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULifeInputComboComponent::OnRegister()
{
	Super::OnRegister();
	
	BindInputCallbacks();
}

void ULifeInputComboComponent::OnUnregister()
{
	Super::OnUnregister();
	
	RemoveInputCallbacks();
}

void ULifeInputComboComponent::BindInputCallbacks()
{
	if (ULifeInputComponent* Input = GetInputComponent())
	{
		for (const FComboStep& Step : ComboSteps)
		{
			if (Step.Action)
			{
				Input->BindAction(Step.Action, ETriggerEvent::Triggered, this, &ULifeInputComboComponent::OnComboStepCompleted);
				// TODO: store handles
				BindHandles.Add(8);
			}
		}
	}
}

void ULifeInputComboComponent::RemoveInputCallbacks()
{
	if (ULifeInputComponent* Input = GetInputComponent())
	{
		Input->RemoveBinds(BindHandles);
	}
}

void ULifeInputComboComponent::OnComboStepCompleted(const FInputActionInstance& Instance)
{
	// It shouldn't be possible to have no combo steps
	ensure(!ComboSteps.IsEmpty());
	
	int32 CurrentComboStep = ComboStack.Num();
	const float TriggeredWorldTime = Instance.GetLastTriggeredWorldTime();	
	const float PreviousStepActivationTime = ComboStack[CurrentComboStep].Value;
	
	// If this is the first combo then we can just add it to the stack
	if (Instance.GetSourceAction() == ComboSteps[CurrentComboStep].Action)
	{
		if (TriggeredWorldTime - PreviousStepActivationTime <= ComboSteps[CurrentComboStep].CooldownTime)
		{
			// Check if the time is valid
			TTuple<const UInputAction*, float> NewlyCompletedStep;
			NewlyCompletedStep.Key = Instance.GetSourceAction();
			NewlyCompletedStep.Value = TriggeredWorldTime;
			ComboStack.Emplace(NewlyCompletedStep);	
		}
	}
	
	// Check if the combo was completed or not
	if (ComboStack.Num() == ComboSteps.Num())
	{
		NativeOnComboCompleted();
	}
}

void ULifeInputComboComponent::NativeOnComboCompleted()
{
	ComboStack.Empty();
	ScriptOnComboCompleted();
}

void ULifeInputComboComponent::NativeOnComboCanceled()
{
	ComboStack.Empty();
	ScriptOnComboCanceled();
}

ULifeInputComponent* ULifeInputComboComponent::GetInputComponent() const
{
	APlayerController* Owner = Cast<APlayerController>(GetOwner());
	return Owner ? Cast<ULifeInputComponent>(Owner->PlayerInput) : nullptr;
}

