// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayCueManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayCueManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayCueManager();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void ULifeGameplayCueManager::StaticRegisterNativesULifeGameplayCueManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameplayCueManager);
	UClass* Z_Construct_UClass_ULifeGameplayCueManager_NoRegister()
	{
		return ULifeGameplayCueManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameplayCueManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PreloadedCues_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedCues_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PreloadedCues;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AlwaysLoadedCues_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysLoadedCues_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AlwaysLoadedCues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameplayCueManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayCueManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeGameplayCueManager\n *\n * Game-specific manager for gameplay cues\n */" },
		{ "IncludePath", "AbilitySystem/LifeGameplayCueManager.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayCueManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeGameplayCueManager\n\nGame-specific manager for gameplay cues" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp = { "PreloadedCues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData[] = {
		{ "Comment", "// Cues that were preloaded on the client due to being referenced by content\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayCueManager.h" },
		{ "ToolTip", "Cues that were preloaded on the client due to being referenced by content" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues = { "PreloadedCues", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayCueManager, PreloadedCues), METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData[] = {
		{ "Comment", "// Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayCueManager.h" },
		{ "ToolTip", "Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayCueManager, AlwaysLoadedCues), METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGameplayCueManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_PreloadedCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayCueManager_Statics::NewProp_AlwaysLoadedCues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameplayCueManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameplayCueManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameplayCueManager_Statics::ClassParams = {
		&ULifeGameplayCueManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeGameplayCueManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayCueManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayCueManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayCueManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameplayCueManager()
	{
		if (!Z_Registration_Info_UClass_ULifeGameplayCueManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameplayCueManager.OuterSingleton, Z_Construct_UClass_ULifeGameplayCueManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameplayCueManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameplayCueManager>()
	{
		return ULifeGameplayCueManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameplayCueManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayCueManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayCueManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameplayCueManager, ULifeGameplayCueManager::StaticClass, TEXT("ULifeGameplayCueManager"), &Z_Registration_Info_UClass_ULifeGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameplayCueManager), 1949001276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayCueManager_h_4293870290(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayCueManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
