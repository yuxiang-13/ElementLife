// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/LifeAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAssetManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAssetManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData_NoRegister();
// End Cross Module References
	void ULifeAssetManager::StaticRegisterNativesULifeAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAssetManager);
	UClass* Z_Construct_UClass_ULifeAssetManager_NoRegister()
	{
		return ULifeAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeGameDataPath_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LifeGameDataPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameDataMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPawnData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeAssetManager\n *\n *\x09Game implementation of the asset manager that overrides functionality and stores game-specific types.\n *\x09It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n *\x09This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini.\n */" },
		{ "IncludePath", "System/LifeAssetManager.h" },
		{ "ModuleRelativePath", "System/LifeAssetManager.h" },
		{ "ToolTip", "ULifeAssetManager\n\n    Game implementation of the asset manager that overrides functionality and stores game-specific types.\n    It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n    This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LifeGameDataPath_MetaData[] = {
		{ "Comment", "// Global game data asset to use.\n" },
		{ "ModuleRelativePath", "System/LifeAssetManager.h" },
		{ "ToolTip", "Global game data asset to use." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LifeGameDataPath = { "LifeGameDataPath", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAssetManager, LifeGameDataPath), Z_Construct_UClass_ULifeGameData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LifeGameDataPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LifeGameDataPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_ValueProp = { "GameDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp = { "GameDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_MetaData[] = {
		{ "Comment", "// Loaded version of the game data\n" },
		{ "ModuleRelativePath", "System/LifeAssetManager.h" },
		{ "ToolTip", "Loaded version of the game data" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap = { "GameDataMap", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAssetManager, GameDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_DefaultPawnData_MetaData[] = {
		{ "Comment", "// Pawn data used when spawning player pawns if there isn't one set on the player state.\n" },
		{ "ModuleRelativePath", "System/LifeAssetManager.h" },
		{ "ToolTip", "Pawn data used when spawning player pawns if there isn't one set on the player state." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAssetManager, DefaultPawnData), Z_Construct_UClass_ULifePawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_DefaultPawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_DefaultPawnData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets_ElementProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets_MetaData[] = {
		{ "Comment", "// Assets loaded and tracked by the asset manager.\n" },
		{ "ModuleRelativePath", "System/LifeAssetManager.h" },
		{ "ToolTip", "Assets loaded and tracked by the asset manager." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAssetManager, LoadedAssets), METADATA_PARAMS(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LifeGameDataPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_GameDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_DefaultPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAssetManager_Statics::NewProp_LoadedAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAssetManager_Statics::ClassParams = {
		&ULifeAssetManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAssetManager()
	{
		if (!Z_Registration_Info_UClass_ULifeAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAssetManager.OuterSingleton, Z_Construct_UClass_ULifeAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAssetManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAssetManager>()
	{
		return ULifeAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAssetManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAssetManager, ULifeAssetManager::StaticClass, TEXT("ULifeAssetManager"), &Z_Registration_Info_UClass_ULifeAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAssetManager), 2266679352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeAssetManager_h_2678159621(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
