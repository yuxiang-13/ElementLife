// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/ElementLifeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementLifeGameMode() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_AElementLifeGameMode_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_AElementLifeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void AElementLifeGameMode::StaticRegisterNativesAElementLifeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElementLifeGameMode);
	UClass* Z_Construct_UClass_AElementLifeGameMode_NoRegister()
	{
		return AElementLifeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AElementLifeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElementLifeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElementLifeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ElementLifeGameMode.h" },
		{ "ModuleRelativePath", "ElementLifeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElementLifeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementLifeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElementLifeGameMode_Statics::ClassParams = {
		&AElementLifeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AElementLifeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElementLifeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElementLifeGameMode()
	{
		if (!Z_Registration_Info_UClass_AElementLifeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElementLifeGameMode.OuterSingleton, Z_Construct_UClass_AElementLifeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElementLifeGameMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<AElementLifeGameMode>()
	{
		return AElementLifeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElementLifeGameMode);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_ElementLifeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_ElementLifeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElementLifeGameMode, AElementLifeGameMode::StaticClass, TEXT("AElementLifeGameMode"), &Z_Registration_Info_UClass_AElementLifeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElementLifeGameMode), 4064749496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_ElementLifeGameMode_h_2667980285(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_ElementLifeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_ElementLifeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
