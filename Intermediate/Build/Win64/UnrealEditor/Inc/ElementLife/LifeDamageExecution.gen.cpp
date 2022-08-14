// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Executions/LifeDamageExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeDamageExecution() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeDamageExecution_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeDamageExecution();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeDamageExecution::StaticRegisterNativesULifeDamageExecution()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeDamageExecution);
	UClass* Z_Construct_UClass_ULifeDamageExecution_NoRegister()
	{
		return ULifeDamageExecution::StaticClass();
	}
	struct Z_Construct_UClass_ULifeDamageExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeDamageExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeDamageExecution_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeDamageExecution\n *\n *\x09""Execution used by gameplay effects to apply damage to the health attributes.\n */" },
		{ "IncludePath", "AbilitySystem/Executions/LifeDamageExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/LifeDamageExecution.h" },
		{ "ToolTip", "ULifeDamageExecution\n\n    Execution used by gameplay effects to apply damage to the health attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeDamageExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeDamageExecution>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeDamageExecution_Statics::ClassParams = {
		&ULifeDamageExecution::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULifeDamageExecution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeDamageExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeDamageExecution()
	{
		if (!Z_Registration_Info_UClass_ULifeDamageExecution.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeDamageExecution.OuterSingleton, Z_Construct_UClass_ULifeDamageExecution_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeDamageExecution.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeDamageExecution>()
	{
		return ULifeDamageExecution::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeDamageExecution);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeDamageExecution_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeDamageExecution_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeDamageExecution, ULifeDamageExecution::StaticClass, TEXT("ULifeDamageExecution"), &Z_Registration_Info_UClass_ULifeDamageExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeDamageExecution), 783850816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeDamageExecution_h_2831177337(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeDamageExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Executions_LifeDamageExecution_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
