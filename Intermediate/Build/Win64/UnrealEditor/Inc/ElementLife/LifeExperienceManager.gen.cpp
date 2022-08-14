// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeExperienceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeExperienceManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceManager();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeExperienceManager::StaticRegisterNativesULifeExperienceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeExperienceManager);
	UClass* Z_Construct_UClass_ULifeExperienceManager_NoRegister()
	{
		return ULifeExperienceManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeExperienceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeExperienceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manager for experiences - primarily for arbitration between multiple PIE sessions\n */" },
		{ "IncludePath", "GameModes/LifeExperienceManager.h" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceManager.h" },
		{ "ToolTip", "Manager for experiences - primarily for arbitration between multiple PIE sessions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeExperienceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeExperienceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeExperienceManager_Statics::ClassParams = {
		&ULifeExperienceManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeExperienceManager()
	{
		if (!Z_Registration_Info_UClass_ULifeExperienceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeExperienceManager.OuterSingleton, Z_Construct_UClass_ULifeExperienceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeExperienceManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeExperienceManager>()
	{
		return ULifeExperienceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeExperienceManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeExperienceManager, ULifeExperienceManager::StaticClass, TEXT("ULifeExperienceManager"), &Z_Registration_Info_UClass_ULifeExperienceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeExperienceManager), 1482835771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManager_h_3371996183(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
