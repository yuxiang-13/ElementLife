// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_AddInputBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputBinding() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputConfig_NoRegister();
// End Cross Module References
	void UGameFeatureAction_AddInputBinding::StaticRegisterNativesUGameFeatureAction_AddInputBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddInputBinding);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding_NoRegister()
	{
		return UGameFeatureAction_AddInputBinding::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds InputMappingContext to local players' EnhancedInput system. \n * Expects that local players are set up to use the EnhancedInput system.\n */" },
		{ "DisplayName", "Add Input Binds" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddInputBinding.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputBinding.h" },
		{ "ToolTip", "Adds InputMappingContext to local players' EnhancedInput system.\nExpects that local players are set up to use the EnhancedInput system." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_Inner = { "InputConfigs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeInputConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "Input" },
		{ "Comment", "//~ End UObject interface\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs = { "InputConfigs", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputBinding, InputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::NewProp_InputConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::ClassParams = {
		&UGameFeatureAction_AddInputBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputBinding()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_AddInputBinding>()
	{
		return UGameFeatureAction_AddInputBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputBinding);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputBinding, UGameFeatureAction_AddInputBinding::StaticClass, TEXT("UGameFeatureAction_AddInputBinding"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputBinding), 28014098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputBinding_h_173007194(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
