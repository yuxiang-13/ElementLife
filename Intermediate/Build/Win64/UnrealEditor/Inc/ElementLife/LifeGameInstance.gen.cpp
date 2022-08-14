// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/LifeGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameInstance() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameInstance_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameInstance();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeGameInstance::StaticRegisterNativesULifeGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameInstance);
	UClass* Z_Construct_UClass_ULifeGameInstance_NoRegister()
	{
		return ULifeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LifeGameInstance.h" },
		{ "ModuleRelativePath", "System/LifeGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameInstance_Statics::ClassParams = {
		&ULifeGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameInstance()
	{
		if (!Z_Registration_Info_UClass_ULifeGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameInstance.OuterSingleton, Z_Construct_UClass_ULifeGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameInstance.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameInstance>()
	{
		return ULifeGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameInstance);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameInstance, ULifeGameInstance::StaticClass, TEXT("ULifeGameInstance"), &Z_Registration_Info_UClass_ULifeGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameInstance), 240224672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameInstance_h_3294486666(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
