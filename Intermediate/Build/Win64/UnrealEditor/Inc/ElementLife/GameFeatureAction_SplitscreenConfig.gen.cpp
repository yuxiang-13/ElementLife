// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_SplitscreenConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_SplitscreenConfig() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void UGameFeatureAction_SplitscreenConfig::StaticRegisterNativesUGameFeatureAction_SplitscreenConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_SplitscreenConfig);
	UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_NoRegister()
	{
		return UGameFeatureAction_SplitscreenConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSplitscreen_MetaData[];
#endif
		static void NewProp_bDisableSplitscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSplitscreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
		{ "DisplayName", "Splitscreen Config" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_SplitscreenConfig.h" },
	};
#endif
	void Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_SetBit(void* Obj)
	{
		((UGameFeatureAction_SplitscreenConfig*)Obj)->bDisableSplitscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen = { "bDisableSplitscreen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameFeatureAction_SplitscreenConfig), &Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::NewProp_bDisableSplitscreen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_SplitscreenConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::ClassParams = {
		&UGameFeatureAction_SplitscreenConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_SplitscreenConfig>()
	{
		return UGameFeatureAction_SplitscreenConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_SplitscreenConfig);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_SplitscreenConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_SplitscreenConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_SplitscreenConfig, UGameFeatureAction_SplitscreenConfig::StaticClass, TEXT("UGameFeatureAction_SplitscreenConfig"), &Z_Registration_Info_UClass_UGameFeatureAction_SplitscreenConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_SplitscreenConfig), 674250319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_SplitscreenConfig_h_2195408395(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_SplitscreenConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_SplitscreenConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
