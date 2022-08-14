// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeAbilitySourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilitySourceInterface() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySourceInterface_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeAbilitySourceInterface::StaticRegisterNativesULifeAbilitySourceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilitySourceInterface);
	UClass* Z_Construct_UClass_ULifeAbilitySourceInterface_NoRegister()
	{
		return ULifeAbilitySourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilitySourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILifeAbilitySourceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::ClassParams = {
		&ULifeAbilitySourceInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilitySourceInterface()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilitySourceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_ULifeAbilitySourceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilitySourceInterface.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilitySourceInterface>()
	{
		return ULifeAbilitySourceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilitySourceInterface);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilitySourceInterface, ULifeAbilitySourceInterface::StaticClass, TEXT("ULifeAbilitySourceInterface"), &Z_Registration_Info_UClass_ULifeAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilitySourceInterface), 4046116895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_229015367(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
