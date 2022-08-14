// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Hotfix/LifeHotfixManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHotfixManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHotfixManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHotfixManager();
	HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeHotfixManager::StaticRegisterNativesULifeHotfixManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHotfixManager);
	UClass* Z_Construct_UClass_ULifeHotfixManager_NoRegister()
	{
		return ULifeHotfixManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHotfixManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHotfixManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineHotfixManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHotfixManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hotfix/LifeHotfixManager.h" },
		{ "ModuleRelativePath", "Hotfix/LifeHotfixManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHotfixManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHotfixManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHotfixManager_Statics::ClassParams = {
		&ULifeHotfixManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHotfixManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHotfixManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHotfixManager()
	{
		if (!Z_Registration_Info_UClass_ULifeHotfixManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHotfixManager.OuterSingleton, Z_Construct_UClass_ULifeHotfixManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHotfixManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHotfixManager>()
	{
		return ULifeHotfixManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHotfixManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeHotfixManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeHotfixManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHotfixManager, ULifeHotfixManager::StaticClass, TEXT("ULifeHotfixManager"), &Z_Registration_Info_UClass_ULifeHotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHotfixManager), 1265207178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeHotfixManager_h_2821904196(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeHotfixManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeHotfixManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
