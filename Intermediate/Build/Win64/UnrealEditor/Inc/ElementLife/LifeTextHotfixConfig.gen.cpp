// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Hotfix/LifeTextHotfixConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeTextHotfixConfig() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeTextHotfixConfig_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeTextHotfixConfig();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
// End Cross Module References
	void ULifeTextHotfixConfig::StaticRegisterNativesULifeTextHotfixConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeTextHotfixConfig);
	UClass* Z_Construct_UClass_ULifeTextHotfixConfig_NoRegister()
	{
		return ULifeTextHotfixConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULifeTextHotfixConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextReplacements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextReplacements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextReplacements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeTextHotfixConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeTextHotfixConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class allows hotfixing individual FText values anywhere\n */" },
		{ "IncludePath", "Hotfix/LifeTextHotfixConfig.h" },
		{ "ModuleRelativePath", "Hotfix/LifeTextHotfixConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class allows hotfixing individual FText values anywhere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements_Inner = { "TextReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData[] = {
		{ "Category", "LifeTextHotfixConfig" },
		{ "Comment", "// The list of FText values to hotfix\n" },
		{ "ModuleRelativePath", "Hotfix/LifeTextHotfixConfig.h" },
		{ "ToolTip", "The list of FText values to hotfix" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements = { "TextReplacements", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeTextHotfixConfig, TextReplacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeTextHotfixConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeTextHotfixConfig_Statics::NewProp_TextReplacements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeTextHotfixConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeTextHotfixConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeTextHotfixConfig_Statics::ClassParams = {
		&ULifeTextHotfixConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeTextHotfixConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeTextHotfixConfig_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeTextHotfixConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeTextHotfixConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeTextHotfixConfig()
	{
		if (!Z_Registration_Info_UClass_ULifeTextHotfixConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeTextHotfixConfig.OuterSingleton, Z_Construct_UClass_ULifeTextHotfixConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeTextHotfixConfig.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeTextHotfixConfig>()
	{
		return ULifeTextHotfixConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeTextHotfixConfig);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeTextHotfixConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeTextHotfixConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeTextHotfixConfig, ULifeTextHotfixConfig::StaticClass, TEXT("ULifeTextHotfixConfig"), &Z_Registration_Info_UClass_ULifeTextHotfixConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeTextHotfixConfig), 3239637006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeTextHotfixConfig_h_3214684661(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeTextHotfixConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeTextHotfixConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
