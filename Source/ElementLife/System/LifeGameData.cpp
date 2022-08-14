// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameData.h"
#include "LifeAssetManager.h"

ULifeGameData::ULifeGameData()
{
}

const ULifeGameData& ULifeGameData::ULifeGameData::Get()
{
	return ULifeAssetManager::Get().GetGameData();
}