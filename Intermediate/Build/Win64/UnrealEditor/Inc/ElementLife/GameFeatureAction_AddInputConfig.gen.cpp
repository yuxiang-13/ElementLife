// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_AddInputConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputConfig() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair();
// End Cross Module References
	void UGameFeatureAction_AddInputConfig::StaticRegisterNativesUGameFeatureAction_AddInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddInputConfig);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig_NoRegister()
	{
		return UGameFeatureAction_AddInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Registers a Player Mappable Input config to the Game User Settings\n * \n * Expects that local players are set up to use the EnhancedInput system.\n */" },
		{ "DisplayName", "Add Input Config" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
		{ "ToolTip", "Registers a Player Mappable Input config to the Game User Settings\n\nExpects that local players are set up to use the EnhancedInput system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_Inner = { "InputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappableConfigPair, METADATA_PARAMS(nullptr, 0) }; // 2340107687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_MetaData[] = {
		{ "Category", "GameFeatureAction_AddInputConfig" },
		{ "Comment", "/** The player mappable configs to register for user with this config */" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
		{ "ToolTip", "The player mappable configs to register for user with this config" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs = { "InputConfigs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputConfig, InputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_MetaData)) }; // 2340107687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::ClassParams = {
		&UGameFeatureAction_AddInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_AddInputConfig>()
	{
		return UGameFeatureAction_AddInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputConfig);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputConfig, UGameFeatureAction_AddInputConfig::StaticClass, TEXT("UGameFeatureAction_AddInputConfig"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputConfig), 3008966783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputConfig_h_4255516168(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
