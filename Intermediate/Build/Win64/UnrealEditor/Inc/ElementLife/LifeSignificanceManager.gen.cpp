// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/LifeSignificanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeSignificanceManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeSignificanceManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeSignificanceManager();
	SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeSignificanceManager::StaticRegisterNativesULifeSignificanceManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeSignificanceManager);
	UClass* Z_Construct_UClass_ULifeSignificanceManager_NoRegister()
	{
		return ULifeSignificanceManager::StaticClass();
	}
	struct Z_Construct_UClass_ULifeSignificanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeSignificanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignificanceManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSignificanceManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LifeSignificanceManager.h" },
		{ "ModuleRelativePath", "System/LifeSignificanceManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeSignificanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeSignificanceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeSignificanceManager_Statics::ClassParams = {
		&ULifeSignificanceManager::StaticClass,
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
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeSignificanceManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSignificanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeSignificanceManager()
	{
		if (!Z_Registration_Info_UClass_ULifeSignificanceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeSignificanceManager.OuterSingleton, Z_Construct_UClass_ULifeSignificanceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeSignificanceManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeSignificanceManager>()
	{
		return ULifeSignificanceManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeSignificanceManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeSignificanceManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeSignificanceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeSignificanceManager, ULifeSignificanceManager::StaticClass, TEXT("ULifeSignificanceManager"), &Z_Registration_Info_UClass_ULifeSignificanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeSignificanceManager), 2445915977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeSignificanceManager_h_2673147147(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeSignificanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeSignificanceManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
