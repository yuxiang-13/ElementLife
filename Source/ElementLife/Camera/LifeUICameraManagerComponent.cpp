// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeUICameraManagerComponent.h"
#include "EngineUtils.h"
#include "Algo/Transform.h"
#include "DrawDebugHelpers.h"
#include "Engine/Canvas.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "Slate/SceneViewport.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "GameFramework/HUD.h"
#include "Engine/Engine.h"

#include "LifeCameraMode.h"
#include "LifePlayerCameraManager.h"

ULifeUICameraManagerComponent* ULifeUICameraManagerComponent::GetComponent(APlayerController* PC)
{
	if (PC != nullptr)
	{
		if (ALifePlayerCameraManager* PCCamera = Cast<ALifePlayerCameraManager>(PC->PlayerCameraManager))
		{
			return PCCamera->GetUICameraComponent();
		}
	}

	return nullptr;
}

ULifeUICameraManagerComponent::ULifeUICameraManagerComponent()
{
	bWantsInitializeComponent = true;

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		// Register "showdebug" hook.
		if (!IsRunningDedicatedServer())
		{
			AHUD::OnShowDebugInfo.AddUObject(this, &ThisClass::OnShowDebugInfo);
		}
	}
}

void ULifeUICameraManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

void ULifeUICameraManagerComponent::SetViewTarget(AActor* InViewTarget, FViewTargetTransitionParams TransitionParams)
{
	TGuardValue<bool> UpdatingViewTargetGuard(bUpdatingViewTarget, true);

	ViewTarget = InViewTarget;
	CastChecked<ALifePlayerCameraManager>(GetOwner())->SetViewTarget(ViewTarget, TransitionParams);
}

bool ULifeUICameraManagerComponent::NeedsToUpdateViewTarget() const
{
	return false;
}

void ULifeUICameraManagerComponent::UpdateViewTarget(struct FTViewTarget& OutVT, float DeltaTime)
{
}

void ULifeUICameraManagerComponent::OnShowDebugInfo(AHUD* HUD, UCanvas* Canvas, const FDebugDisplayInfo& DisplayInfo, float& YL, float& YPos)
{
}