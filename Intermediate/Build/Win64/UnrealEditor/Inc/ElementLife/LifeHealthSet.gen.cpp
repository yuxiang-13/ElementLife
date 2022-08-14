// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Attributes/LifeHealthSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHealthSet() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthSet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthSet();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAttributeSet();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(ULifeHealthSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void ULifeHealthSet::StaticRegisterNativesULifeHealthSet()
	{
		UClass* Class = ULifeHealthSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Health", &ULifeHealthSet::execOnRep_Health },
			{ "OnRep_MaxHealth", &ULifeHealthSet::execOnRep_MaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics
	{
		struct LifeHealthSet_eventOnRep_Health_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::LifeHealthSet_eventOnRep_Health_Parms), Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics
	{
		struct LifeHealthSet_eventOnRep_MaxHealth_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::LifeHealthSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHealthSet);
	UClass* Z_Construct_UClass_ULifeHealthSet_NoRegister()
	{
		return ULifeHealthSet::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHealthSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHealthSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeHealthSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeHealthSet_OnRep_Health, "OnRep_Health" }, // 295115534
		{ &Z_Construct_UFunction_ULifeHealthSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2972604275
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeHealthSet\n *\n *\x09""Class that defines attributes that are necessary for taking damage.\n *\x09""Attribute examples include: health, shields, and resistances.\n */" },
		{ "IncludePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ToolTip", "ULifeHealthSet\n\n    Class that defines attributes that are necessary for taking damage.\n    Attribute examples include: health, shields, and resistances." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Health" },
		{ "Comment", "// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.\n" },
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ToolTip", "The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Health_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Health" },
		{ "Comment", "// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ToolTip", "The current max health attribute.  Max health is an attribute since gameplay effects can modify it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Healing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Health" },
		{ "Comment", "// Incoming healing. This is mapped directly to +Health\n" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ToolTip", "Incoming healing. This is mapped directly to +Health" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Healing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Healing_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Life|Health" },
		{ "Comment", "// Incoming damage. This is mapped directly to -Health\n" },
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeHealthSet.h" },
		{ "ToolTip", "Incoming damage. This is mapped directly to -Health" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Damage_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeHealthSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Healing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthSet_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHealthSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHealthSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHealthSet_Statics::ClassParams = {
		&ULifeHealthSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeHealthSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHealthSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHealthSet()
	{
		if (!Z_Registration_Info_UClass_ULifeHealthSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHealthSet.OuterSingleton, Z_Construct_UClass_ULifeHealthSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHealthSet.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHealthSet>()
	{
		return ULifeHealthSet::StaticClass();
	}

	void ULifeHealthSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULifeHealthSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHealthSet);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHealthSet, ULifeHealthSet::StaticClass, TEXT("ULifeHealthSet"), &Z_Registration_Info_UClass_ULifeHealthSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHealthSet), 1122983188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_4074720969(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
