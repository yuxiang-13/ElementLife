// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/PrimaryAssetId.h"
#include "Engine/DataAsset.h"

#include "LifeUserFacingExperienceDefinition.generated.h"

class UWorld;
class UCommonSession_HostSessionRequest;
class UTexture2D;
class UUserWidget;

/** Description of settings used to display experiences in the UI and start a new session */
UCLASS(BlueprintType)
class ULifeUserFacingExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** 地图 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience, meta=(AllowedTypes="Map"))
	FPrimaryAssetId MapID;

	/** 体验资源 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience, meta=(AllowedTypes="LifeExperienceDefinition"))
	FPrimaryAssetId ExperienceID;

	/** Extra arguments passed as URL options to the game 当前配置的别名，自己设置 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	TMap<FString, FString> ExtraArgs;

	/** 主标题 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	FText TileTitle;

	/** 副标题 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	FText TileSubTitle;

	/** 标题描述 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	FText TileDescription;

	/** UI */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	UTexture2D* TileIcon;

	/** 过度界面的UI */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=LoadingScreen)
	TSoftClassPtr<UUserWidget> LoadingScreenWidget;

	/** 如果为真，这是一种默认体验，应用于快速播放，并在UI中给予优先权 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	bool bIsDefaultExperience = false;

	/** If true, this will show up in the experiences list in the front-end */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	bool bShowInFrontEnd = true;

	/** If true, 记录游戏 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	bool bRecordReplay = false;

	/** 最大玩家数 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Experience)
	int32 MaxPlayerCount = 16;

public:
	/** Create a request object that is used to actually start a session with these settings */
	UFUNCTION(BlueprintCallable, BlueprintPure=false)
	UCommonSession_HostSessionRequest* CreateHostingRequest() const;
};
