// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeUserFacingExperienceDefinition.h"

#include "CommonSessionSubsystem.h"

UCommonSession_HostSessionRequest* ULifeUserFacingExperienceDefinition::CreateHostingRequest() const
{
	const FString ExperienceName = ExperienceID.PrimaryAssetName.ToString();
	const FString UserFacingExperienceName = GetPrimaryAssetId().PrimaryAssetName.ToString();
	UCommonSession_HostSessionRequest* Result = NewObject<UCommonSession_HostSessionRequest>();
	Result->OnlineMode = ECommonSessionOnlineMode::Online;
	Result->bUseLobbies = true;
	Result->MapID = MapID;
	Result->ModeNameForAdvertisement = UserFacingExperienceName;
	Result->ExtraArgs = ExtraArgs;
	Result->ExtraArgs.Add(TEXT("Experience"), ExperienceName);
	Result->MaxPlayerCount = MaxPlayerCount;

	if (bRecordReplay)
	{
		Result->ExtraArgs.Add(TEXT("DemoRec"), FString());
	}

	return Result;
}
