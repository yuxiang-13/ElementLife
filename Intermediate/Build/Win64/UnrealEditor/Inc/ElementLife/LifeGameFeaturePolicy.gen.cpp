// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/LifeGameFeaturePolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameFeaturePolicy() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeaturePolicy_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeaturePolicy();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeature_HotfixManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeature_HotfixManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths();
// End Cross Module References
	void ULifeGameFeaturePolicy::StaticRegisterNativesULifeGameFeaturePolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameFeaturePolicy);
	UClass* Z_Construct_UClass_ULifeGameFeaturePolicy_NoRegister()
	{
		return ULifeGameFeaturePolicy::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameFeaturePolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Observers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultGameFeaturesProjectPolicies,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manager to keep track of the state machines that bring a game feature plugin into memory and active\n * This class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)\n */" },
		{ "IncludePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manager to keep track of the state machines that bring a game feature plugin into memory and active\nThis class discovers plugins either that are built-in and distributed with the game or are reported externally (i.e. by a web service or other endpoint)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "GameFeatures/LifeGameFeaturePolicy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameFeaturePolicy, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::NewProp_Observers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameFeaturePolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::ClassParams = {
		&ULifeGameFeaturePolicy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameFeaturePolicy()
	{
		if (!Z_Registration_Info_UClass_ULifeGameFeaturePolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameFeaturePolicy.OuterSingleton, Z_Construct_UClass_ULifeGameFeaturePolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameFeaturePolicy.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameFeaturePolicy>()
	{
		return ULifeGameFeaturePolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameFeaturePolicy);
	void ULifeGameFeature_HotfixManager::StaticRegisterNativesULifeGameFeature_HotfixManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameFeature_HotfixManager);
	UClass* Z_Construct_UClass_ULifeGameFeature_HotfixManager_NoRegister()
	{
		return ULifeGameFeature_HotfixManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// checked\n" },
		{ "IncludePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ToolTip", "checked" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(ULifeGameFeature_HotfixManager, IGameFeatureStateChangeObserver), false },  // 2774822704
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameFeature_HotfixManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::ClassParams = {
		&ULifeGameFeature_HotfixManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameFeature_HotfixManager()
	{
		if (!Z_Registration_Info_UClass_ULifeGameFeature_HotfixManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameFeature_HotfixManager.OuterSingleton, Z_Construct_UClass_ULifeGameFeature_HotfixManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameFeature_HotfixManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameFeature_HotfixManager>()
	{
		return ULifeGameFeature_HotfixManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameFeature_HotfixManager);
	void ULifeGameFeature_AddGameplayCuePaths::StaticRegisterNativesULifeGameFeature_AddGameplayCuePaths()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameFeature_AddGameplayCuePaths);
	UClass* Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_NoRegister()
	{
		return ULifeGameFeature_AddGameplayCuePaths::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// checked\n" },
		{ "IncludePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ModuleRelativePath", "GameFeatures/LifeGameFeaturePolicy.h" },
		{ "ToolTip", "checked" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameFeatureStateChangeObserver_NoRegister, (int32)VTABLE_OFFSET(ULifeGameFeature_AddGameplayCuePaths, IGameFeatureStateChangeObserver), false },  // 2774822704
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameFeature_AddGameplayCuePaths>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::ClassParams = {
		&ULifeGameFeature_AddGameplayCuePaths::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths()
	{
		if (!Z_Registration_Info_UClass_ULifeGameFeature_AddGameplayCuePaths.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameFeature_AddGameplayCuePaths.OuterSingleton, Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameFeature_AddGameplayCuePaths.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameFeature_AddGameplayCuePaths>()
	{
		return ULifeGameFeature_AddGameplayCuePaths::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameFeature_AddGameplayCuePaths);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_LifeGameFeaturePolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_LifeGameFeaturePolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameFeaturePolicy, ULifeGameFeaturePolicy::StaticClass, TEXT("ULifeGameFeaturePolicy"), &Z_Registration_Info_UClass_ULifeGameFeaturePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameFeaturePolicy), 956293293U) },
		{ Z_Construct_UClass_ULifeGameFeature_HotfixManager, ULifeGameFeature_HotfixManager::StaticClass, TEXT("ULifeGameFeature_HotfixManager"), &Z_Registration_Info_UClass_ULifeGameFeature_HotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameFeature_HotfixManager), 2038546849U) },
		{ Z_Construct_UClass_ULifeGameFeature_AddGameplayCuePaths, ULifeGameFeature_AddGameplayCuePaths::StaticClass, TEXT("ULifeGameFeature_AddGameplayCuePaths"), &Z_Registration_Info_UClass_ULifeGameFeature_AddGameplayCuePaths, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameFeature_AddGameplayCuePaths), 1007540131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_LifeGameFeaturePolicy_h_414593494(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_LifeGameFeaturePolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_LifeGameFeaturePolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
