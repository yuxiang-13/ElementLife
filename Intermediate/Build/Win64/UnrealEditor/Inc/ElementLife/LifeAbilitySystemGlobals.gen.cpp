// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilitySystemGlobals() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemGlobals_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemGlobals();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeAbilitySystemGlobals::StaticRegisterNativesULifeAbilitySystemGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilitySystemGlobals);
	UClass* Z_Construct_UClass_ULifeAbilitySystemGlobals_NoRegister()
	{
		return ULifeAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/LifeAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySystemGlobals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilitySystemGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::ClassParams = {
		&ULifeAbilitySystemGlobals::StaticClass,
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
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilitySystemGlobals()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilitySystemGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_ULifeAbilitySystemGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilitySystemGlobals.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilitySystemGlobals>()
	{
		return ULifeAbilitySystemGlobals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilitySystemGlobals);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilitySystemGlobals, ULifeAbilitySystemGlobals::StaticClass, TEXT("ULifeAbilitySystemGlobals"), &Z_Registration_Info_UClass_ULifeAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilitySystemGlobals), 1328290169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemGlobals_h_2884072770(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
