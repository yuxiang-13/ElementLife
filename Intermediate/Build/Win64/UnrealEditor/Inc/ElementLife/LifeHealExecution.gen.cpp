// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Executions/LifeHealExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHealExecution() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealExecution_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealExecution();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeHealExecution::StaticRegisterNativesULifeHealExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHealExecution);
	UClass* Z_Construct_UClass_ULifeHealExecution_NoRegister()
	{
		return ULifeHealExecution::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHealExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHealExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeHealExecution\n *\n *\x09""Execution used by gameplay effects to apply healing to the health attributes.\n */" },
		{ "IncludePath", "AbilitySystem/Executions/LifeHealExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LifeHealExecution.h" },
		{ "ToolTip", "ULifeHealExecution\n\n    Execution used by gameplay effects to apply healing to the health attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHealExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHealExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHealExecution_Statics::ClassParams = {
		&ULifeHealExecution::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHealExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHealExecution()
	{
		if (!Z_Registration_Info_UClass_ULifeHealExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHealExecution.OuterSingleton, Z_Construct_UClass_ULifeHealExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHealExecution.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHealExecution>()
	{
		return ULifeHealExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHealExecution);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeHealExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeHealExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHealExecution, ULifeHealExecution::StaticClass, TEXT("ULifeHealExecution"), &Z_Registration_Info_UClass_ULifeHealExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHealExecution), 935439323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeHealExecution_h_2044769375(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeHealExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeHealExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
