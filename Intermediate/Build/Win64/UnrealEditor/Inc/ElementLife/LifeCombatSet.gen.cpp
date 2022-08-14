// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Attributes/LifeCombatSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCombatSet() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCombatSet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCombatSet();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAttributeSet();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(ULifeCombatSet::execOnRep_BaseHeal)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BaseHeal(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeCombatSet::execOnRep_BaseDamage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BaseDamage(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void ULifeCombatSet::StaticRegisterNativesULifeCombatSet()
	{
		UClass* Class = ULifeCombatSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BaseDamage", &ULifeCombatSet::execOnRep_BaseDamage },
			{ "OnRep_BaseHeal", &ULifeCombatSet::execOnRep_BaseHeal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics
	{
		struct LifeCombatSet_eventOnRep_BaseDamage_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCombatSet_eventOnRep_BaseDamage_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeCombatSet, nullptr, "OnRep_BaseDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::LifeCombatSet_eventOnRep_BaseDamage_Parms), Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics
	{
		struct LifeCombatSet_eventOnRep_BaseHeal_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCombatSet_eventOnRep_BaseHeal_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeCombatSet, nullptr, "OnRep_BaseHeal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::LifeCombatSet_eventOnRep_BaseHeal_Parms), Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCombatSet);
	UClass* Z_Construct_UClass_ULifeCombatSet_NoRegister()
	{
		return ULifeCombatSet::StaticClass();
	}
	struct Z_Construct_UClass_ULifeCombatSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseHeal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeCombatSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeCombatSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseDamage, "OnRep_BaseDamage" }, // 1143832801
		{ &Z_Construct_UFunction_ULifeCombatSet_OnRep_BaseHeal, "OnRep_BaseHeal" }, // 706043416
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCombatSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeCombatSet\n *\n *  Class that defines attributes that are necessary for applying damage or healing.\n *\x09""Attribute examples include: damage, healing, attack power, and shield penetrations.\n */" },
		{ "IncludePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
		{ "ToolTip", "ULifeCombatSet\n\n Class that defines attributes that are necessary for applying damage or healing.\n    Attribute examples include: damage, healing, attack power, and shield penetrations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Combat" },
		{ "Comment", "// The base amount of damage to apply in the damage execution.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
		{ "ToolTip", "The base amount of damage to apply in the damage execution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseDamage = { "BaseDamage", "OnRep_BaseDamage", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCombatSet, BaseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseDamage_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseHeal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Combat" },
		{ "Comment", "// The base amount of healing to apply in the heal execution.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeCombatSet.h" },
		{ "ToolTip", "The base amount of healing to apply in the heal execution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseHeal = { "BaseHeal", "OnRep_BaseHeal", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCombatSet, BaseHeal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseHeal_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeCombatSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCombatSet_Statics::NewProp_BaseHeal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeCombatSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeCombatSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCombatSet_Statics::ClassParams = {
		&ULifeCombatSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeCombatSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCombatSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeCombatSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCombatSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeCombatSet()
	{
		if (!Z_Registration_Info_UClass_ULifeCombatSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCombatSet.OuterSingleton, Z_Construct_UClass_ULifeCombatSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeCombatSet.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeCombatSet>()
	{
		return ULifeCombatSet::StaticClass();
	}

	void ULifeCombatSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BaseDamage(TEXT("BaseDamage"));
		static const FName Name_BaseHeal(TEXT("BaseHeal"));

		const bool bIsValid = true
			&& Name_BaseDamage == ClassReps[(int32)ENetFields_Private::BaseDamage].Property->GetFName()
			&& Name_BaseHeal == ClassReps[(int32)ENetFields_Private::BaseHeal].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULifeCombatSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCombatSet);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeCombatSet, ULifeCombatSet::StaticClass, TEXT("ULifeCombatSet"), &Z_Registration_Info_UClass_ULifeCombatSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCombatSet), 1867679275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_1461501635(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
