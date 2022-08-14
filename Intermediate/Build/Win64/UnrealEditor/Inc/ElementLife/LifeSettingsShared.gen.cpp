// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Settings/LifeSettingsShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeSettingsShared() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_EColorBlindMode();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorBlindMode;
	static UEnum* EColorBlindMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_EColorBlindMode, Z_Construct_UPackage__Script_ElementLife(), TEXT("EColorBlindMode"));
		}
		return Z_Registration_Info_UEnum_EColorBlindMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<EColorBlindMode>()
	{
		return EColorBlindMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enumerators[] = {
		{ "EColorBlindMode::Off", (int64)EColorBlindMode::Off },
		{ "EColorBlindMode::Deuteranope", (int64)EColorBlindMode::Deuteranope },
		{ "EColorBlindMode::Protanope", (int64)EColorBlindMode::Protanope },
		{ "EColorBlindMode::Tritanope", (int64)EColorBlindMode::Tritanope },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deuteranope.Comment", "// Deuteranope (green weak/blind)\n" },
		{ "Deuteranope.Name", "EColorBlindMode::Deuteranope" },
		{ "Deuteranope.ToolTip", "Deuteranope (green weak/blind)" },
		{ "ModuleRelativePath", "Settings/LifeSettingsShared.h" },
		{ "Off.Name", "EColorBlindMode::Off" },
		{ "Protanope.Comment", "// Protanope (red weak/blind)\n" },
		{ "Protanope.Name", "EColorBlindMode::Protanope" },
		{ "Protanope.ToolTip", "Protanope (red weak/blind)" },
		{ "Tritanope.Comment", "// Tritanope(blue weak / bind)\n" },
		{ "Tritanope.Name", "EColorBlindMode::Tritanope" },
		{ "Tritanope.ToolTip", "Tritanope(blue weak / bind)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"EColorBlindMode",
		"EColorBlindMode",
		Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_EColorBlindMode()
	{
		if (!Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton, Z_Construct_UEnum_ElementLife_EColorBlindMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorBlindMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting;
	static UEnum* ELifeAllowBackgroundAudioSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeAllowBackgroundAudioSetting"));
		}
		return Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAllowBackgroundAudioSetting>()
	{
		return ELifeAllowBackgroundAudioSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enumerators[] = {
		{ "ELifeAllowBackgroundAudioSetting::Off", (int64)ELifeAllowBackgroundAudioSetting::Off },
		{ "ELifeAllowBackgroundAudioSetting::AllSounds", (int64)ELifeAllowBackgroundAudioSetting::AllSounds },
		{ "ELifeAllowBackgroundAudioSetting::Num", (int64)ELifeAllowBackgroundAudioSetting::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enum_MetaDataParams[] = {
		{ "AllSounds.Name", "ELifeAllowBackgroundAudioSetting::AllSounds" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Settings/LifeSettingsShared.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ELifeAllowBackgroundAudioSetting::Num" },
		{ "Off.Name", "ELifeAllowBackgroundAudioSetting::Off" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeAllowBackgroundAudioSetting",
		"ELifeAllowBackgroundAudioSetting",
		Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting()
	{
		if (!Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeAllowBackgroundAudioSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeGamepadSensitivity;
	static UEnum* ELifeGamepadSensitivity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeGamepadSensitivity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeGamepadSensitivity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeGamepadSensitivity"));
		}
		return Z_Registration_Info_UEnum_ELifeGamepadSensitivity.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeGamepadSensitivity>()
	{
		return ELifeGamepadSensitivity_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enumerators[] = {
		{ "ELifeGamepadSensitivity::Invalid", (int64)ELifeGamepadSensitivity::Invalid },
		{ "ELifeGamepadSensitivity::Slow", (int64)ELifeGamepadSensitivity::Slow },
		{ "ELifeGamepadSensitivity::SlowPlus", (int64)ELifeGamepadSensitivity::SlowPlus },
		{ "ELifeGamepadSensitivity::SlowPlusPlus", (int64)ELifeGamepadSensitivity::SlowPlusPlus },
		{ "ELifeGamepadSensitivity::Normal", (int64)ELifeGamepadSensitivity::Normal },
		{ "ELifeGamepadSensitivity::NormalPlus", (int64)ELifeGamepadSensitivity::NormalPlus },
		{ "ELifeGamepadSensitivity::NormalPlusPlus", (int64)ELifeGamepadSensitivity::NormalPlusPlus },
		{ "ELifeGamepadSensitivity::Fast", (int64)ELifeGamepadSensitivity::Fast },
		{ "ELifeGamepadSensitivity::FastPlus", (int64)ELifeGamepadSensitivity::FastPlus },
		{ "ELifeGamepadSensitivity::FastPlusPlus", (int64)ELifeGamepadSensitivity::FastPlusPlus },
		{ "ELifeGamepadSensitivity::Insane", (int64)ELifeGamepadSensitivity::Insane },
		{ "ELifeGamepadSensitivity::MAX", (int64)ELifeGamepadSensitivity::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fast.DisplayName", "07 - Fast" },
		{ "Fast.Name", "ELifeGamepadSensitivity::Fast" },
		{ "FastPlus.DisplayName", "08 - Fast+" },
		{ "FastPlus.Name", "ELifeGamepadSensitivity::FastPlus" },
		{ "FastPlusPlus.DisplayName", "09 - Fast++" },
		{ "FastPlusPlus.Name", "ELifeGamepadSensitivity::FastPlusPlus" },
		{ "Insane.DisplayName", "10 - Insane" },
		{ "Insane.Name", "ELifeGamepadSensitivity::Insane" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELifeGamepadSensitivity::Invalid" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ELifeGamepadSensitivity::MAX" },
		{ "ModuleRelativePath", "Settings/LifeSettingsShared.h" },
		{ "Normal.DisplayName", "04 - Normal" },
		{ "Normal.Name", "ELifeGamepadSensitivity::Normal" },
		{ "NormalPlus.DisplayName", "05 - Normal+" },
		{ "NormalPlus.Name", "ELifeGamepadSensitivity::NormalPlus" },
		{ "NormalPlusPlus.DisplayName", "06 - Normal++" },
		{ "NormalPlusPlus.Name", "ELifeGamepadSensitivity::NormalPlusPlus" },
		{ "Slow.DisplayName", "01 - Slow" },
		{ "Slow.Name", "ELifeGamepadSensitivity::Slow" },
		{ "SlowPlus.DisplayName", "02 - Slow+" },
		{ "SlowPlus.Name", "ELifeGamepadSensitivity::SlowPlus" },
		{ "SlowPlusPlus.DisplayName", "03 - Slow++" },
		{ "SlowPlusPlus.Name", "ELifeGamepadSensitivity::SlowPlusPlus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeGamepadSensitivity",
		"ELifeGamepadSensitivity",
		Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity()
	{
		if (!Z_Registration_Info_UEnum_ELifeGamepadSensitivity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeGamepadSensitivity.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeGamepadSensitivity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h_Statics::EnumInfo[] = {
		{ EColorBlindMode_StaticEnum, TEXT("EColorBlindMode"), &Z_Registration_Info_UEnum_EColorBlindMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3541412849U) },
		{ ELifeAllowBackgroundAudioSetting_StaticEnum, TEXT("ELifeAllowBackgroundAudioSetting"), &Z_Registration_Info_UEnum_ELifeAllowBackgroundAudioSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 870443208U) },
		{ ELifeGamepadSensitivity_StaticEnum, TEXT("ELifeGamepadSensitivity"), &Z_Registration_Info_UEnum_ELifeGamepadSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1914063062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h_3968589157(TEXT("/Script/ElementLife"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
