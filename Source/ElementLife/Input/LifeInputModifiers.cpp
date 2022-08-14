// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeInputModifiers.h"
#include "Settings/LifeSettingsShared.h"
#include "Player/LifeLocalPlayer.h"
#include "EnhancedPlayerInput.h"
#include "GameFramework/PlayerController.h"
#include "Input/LifeAimSensitivityData.h"

DEFINE_LOG_CATEGORY_STATIC(LogLifeInputModifiers, Log, All);

//////////////////////////////////////////////////////////////////////
// LifeInputModifiersHelpers

namespace LifeInputModifiersHelpers
{
	/** Returns the owning LifeLocalPlayer of an Enhanced Player Input pointer */
	static ULifeLocalPlayer* GetLocalPlayer(const UEnhancedPlayerInput* PlayerInput)
	{
		if (PlayerInput)
		{
			if (APlayerController* PC = Cast<APlayerController>(PlayerInput->GetOuter()))
			{
				return Cast<ULifeLocalPlayer>(PC->GetLocalPlayer());
			}
		}
		return nullptr;
	}
	
}

//////////////////////////////////////////////////////////////////////
// ULifeSettingBasedScalar

FInputActionValue ULifeSettingBasedScalar::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	
	return CurrentValue;	
}

//////////////////////////////////////////////////////////////////////
// ULifeInputModifierDeadZone

FInputActionValue ULifeInputModifierDeadZone::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	
	return CurrentValue;
}

FLinearColor ULifeInputModifierDeadZone::GetVisualizationColor_Implementation(FInputActionValue SampleValue, FInputActionValue FinalValue) const
{
	// Taken from UInputModifierDeadZone::GetVisualizationColor_Implementation
	if (FinalValue.GetValueType() == EInputActionValueType::Boolean || FinalValue.GetValueType() == EInputActionValueType::Axis1D)
	{
		return FLinearColor(FinalValue.Get<float>() == 0.f ? 1.f : 0.f, 0.f, 0.f);
	}
	return FLinearColor((FinalValue.Get<FVector2D>().X == 0.f ? 0.5f : 0.f) + (FinalValue.Get<FVector2D>().Y == 0.f ? 0.5f : 0.f), 0.f, 0.f);
}

//////////////////////////////////////////////////////////////////////
// ULifeInputModifierGamepadSensitivity

FInputActionValue ULifeInputModifierGamepadSensitivity::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
		return CurrentValue;
}

//////////////////////////////////////////////////////////////////////
// ULifeInputModifierAimInversion

FInputActionValue ULifeInputModifierAimInversion::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	return CurrentValue;
}