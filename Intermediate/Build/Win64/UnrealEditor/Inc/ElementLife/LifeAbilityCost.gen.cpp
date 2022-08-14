// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilityCost() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeAbilityCost::StaticRegisterNativesULifeAbilityCost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilityCost);
	UClass* Z_Construct_UClass_ULifeAbilityCost_NoRegister()
	{
		return ULifeAbilityCost::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilityCost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[];
#endif
		static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilityCost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeAbilityCost\n *\n * Base class for costs that a LifeGameplayAbility has (e.g., ammo or charges)\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeAbilityCost.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost.h" },
		{ "ToolTip", "ULifeAbilityCost\n\nBase class for costs that a LifeGameplayAbility has (e.g., ammo or charges)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost.h" },
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
	};
#endif
	void Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
	{
		((ULifeAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULifeAbilityCost), &Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilityCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilityCost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilityCost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilityCost_Statics::ClassParams = {
		&ULifeAbilityCost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAbilityCost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_Statics::PropPointers),
		0,
		0x002010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilityCost()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilityCost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilityCost.OuterSingleton, Z_Construct_UClass_ULifeAbilityCost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilityCost.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilityCost>()
	{
		return ULifeAbilityCost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilityCost);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilityCost, ULifeAbilityCost::StaticClass, TEXT("ULifeAbilityCost"), &Z_Registration_Info_UClass_ULifeAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilityCost), 2627444301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_h_183315113(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
