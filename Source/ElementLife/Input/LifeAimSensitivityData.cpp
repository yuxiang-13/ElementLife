// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeAimSensitivityData.h"

ULifeAimSensitivityData::ULifeAimSensitivityData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SensitivityMap =
	{
		{ ELifeGamepadSensitivity::Slow,			0.5f },
		{ ELifeGamepadSensitivity::SlowPlus,		0.75f },
		{ ELifeGamepadSensitivity::SlowPlusPlus,	0.9f },
		{ ELifeGamepadSensitivity::Normal,		1.0f },
		{ ELifeGamepadSensitivity::NormalPlus,	1.1f },
		{ ELifeGamepadSensitivity::NormalPlusPlus,1.25f },
		{ ELifeGamepadSensitivity::Fast,			1.5f },
		{ ELifeGamepadSensitivity::FastPlus,		1.75f },
		{ ELifeGamepadSensitivity::FastPlusPlus,	2.0f },
		{ ELifeGamepadSensitivity::Insane,		2.5f },
	};
}

const float ULifeAimSensitivityData::SensitivtyEnumToFloat(const ELifeGamepadSensitivity InSensitivity) const
{
	if (const float* Sens = SensitivityMap.Find(InSensitivity))
	{
		return *Sens;
	}

	return 1.0f;
}
