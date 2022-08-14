// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeRuntimeOptions.h"

ULifeRuntimeOptions::ULifeRuntimeOptions()
{
	OptionCommandPrefix = TEXT("ro");
}

ULifeRuntimeOptions* ULifeRuntimeOptions::GetRuntimeOptions()
{
	return GetMutableDefault<ULifeRuntimeOptions>();
}

const ULifeRuntimeOptions& ULifeRuntimeOptions::Get()
{
	const ULifeRuntimeOptions& RuntimeOptions = *GetDefault<ULifeRuntimeOptions>();
	return RuntimeOptions;
}