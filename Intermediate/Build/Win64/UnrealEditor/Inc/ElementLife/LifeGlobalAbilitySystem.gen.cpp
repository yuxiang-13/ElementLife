// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeGlobalAbilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGlobalAbilitySystem() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGlobalAbilitySystem_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGlobalAbilitySystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList;
class UScriptStruct* FGlobalAppliedAbilityList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, Z_Construct_UPackage__Script_ElementLife(), TEXT("GlobalAppliedAbilityList"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FGlobalAppliedAbilityList>()
{
	return FGlobalAppliedAbilityList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedAbilityList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 2663978299
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalAppliedAbilityList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_MetaData)) }; // 2663978299
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewProp_Handles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"GlobalAppliedAbilityList",
		sizeof(FGlobalAppliedAbilityList),
		alignof(FGlobalAppliedAbilityList),
		Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedAbilityList()
	{
		if (!Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList;
class UScriptStruct* FGlobalAppliedEffectList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAppliedEffectList, Z_Construct_UPackage__Script_ElementLife(), TEXT("GlobalAppliedEffectList"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FGlobalAppliedEffectList>()
{
	return FGlobalAppliedEffectList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAppliedEffectList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 1296751506
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp = { "Handles_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalAppliedEffectList, Handles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_MetaData)) }; // 1296751506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewProp_Handles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"GlobalAppliedEffectList",
		sizeof(FGlobalAppliedEffectList),
		alignof(FGlobalAppliedEffectList),
		Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalAppliedEffectList()
	{
		if (!Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList.InnerSingleton;
	}
	DEFINE_FUNCTION(ULifeGlobalAbilitySystem::execRemoveEffectFromAll)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEffectFromAll(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGlobalAbilitySystem::execRemoveAbilityFromAll)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAbilityFromAll(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGlobalAbilitySystem::execApplyEffectToAll)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectToAll(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGlobalAbilitySystem::execApplyAbilityToAll)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAbilityToAll(Z_Param_Ability);
		P_NATIVE_END;
	}
	void ULifeGlobalAbilitySystem::StaticRegisterNativesULifeGlobalAbilitySystem()
	{
		UClass* Class = ULifeGlobalAbilitySystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAbilityToAll", &ULifeGlobalAbilitySystem::execApplyAbilityToAll },
			{ "ApplyEffectToAll", &ULifeGlobalAbilitySystem::execApplyEffectToAll },
			{ "RemoveAbilityFromAll", &ULifeGlobalAbilitySystem::execRemoveAbilityFromAll },
			{ "RemoveEffectFromAll", &ULifeGlobalAbilitySystem::execRemoveEffectFromAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics
	{
		struct LifeGlobalAbilitySystem_eventApplyAbilityToAll_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGlobalAbilitySystem_eventApplyAbilityToAll_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGlobalAbilitySystem, nullptr, "ApplyAbilityToAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::LifeGlobalAbilitySystem_eventApplyAbilityToAll_Parms), Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics
	{
		struct LifeGlobalAbilitySystem_eventApplyEffectToAll_Parms
		{
			TSubclassOf<UGameplayEffect>  Effect;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGlobalAbilitySystem_eventApplyEffectToAll_Parms, Effect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGlobalAbilitySystem, nullptr, "ApplyEffectToAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::LifeGlobalAbilitySystem_eventApplyEffectToAll_Parms), Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics
	{
		struct LifeGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms
		{
			TSubclassOf<UGameplayAbility>  Ability;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGlobalAbilitySystem, nullptr, "RemoveAbilityFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::LifeGlobalAbilitySystem_eventRemoveAbilityFromAll_Parms), Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics
	{
		struct LifeGlobalAbilitySystem_eventRemoveEffectFromAll_Parms
		{
			TSubclassOf<UGameplayEffect>  Effect;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGlobalAbilitySystem_eventRemoveEffectFromAll_Parms, Effect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGlobalAbilitySystem, nullptr, "RemoveEffectFromAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::LifeGlobalAbilitySystem_eventRemoveEffectFromAll_Parms), Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGlobalAbilitySystem);
	UClass* Z_Construct_UClass_ULifeGlobalAbilitySystem_NoRegister()
	{
		return ULifeGlobalAbilitySystem::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedAbilities_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedAbilities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppliedEffects_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AppliedEffects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedEffects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredASCs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredASCs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredASCs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyAbilityToAll, "ApplyAbilityToAll" }, // 3439761749
		{ &Z_Construct_UFunction_ULifeGlobalAbilitySystem_ApplyEffectToAll, "ApplyEffectToAll" }, // 2484313936
		{ &Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveAbilityFromAll, "RemoveAbilityFromAll" }, // 1677494015
		{ &Z_Construct_UFunction_ULifeGlobalAbilitySystem_RemoveEffectFromAll, "RemoveEffectFromAll" }, // 749068017
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_ValueProp = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList, METADATA_PARAMS(nullptr, 0) }; // 3707343154
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_Key_KeyProp = { "AppliedAbilities_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities = { "AppliedAbilities", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGlobalAbilitySystem, AppliedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_MetaData)) }; // 3707343154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_ValueProp = { "AppliedEffects", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGlobalAppliedEffectList, METADATA_PARAMS(nullptr, 0) }; // 3709836037
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_Key_KeyProp = { "AppliedEffects_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects = { "AppliedEffects", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGlobalAbilitySystem, AppliedEffects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_MetaData)) }; // 3709836037
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_Inner = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGlobalAbilitySystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs = { "RegisteredASCs", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGlobalAbilitySystem, RegisteredASCs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_AppliedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::NewProp_RegisteredASCs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGlobalAbilitySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::ClassParams = {
		&ULifeGlobalAbilitySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGlobalAbilitySystem()
	{
		if (!Z_Registration_Info_UClass_ULifeGlobalAbilitySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGlobalAbilitySystem.OuterSingleton, Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGlobalAbilitySystem.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGlobalAbilitySystem>()
	{
		return ULifeGlobalAbilitySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGlobalAbilitySystem);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ScriptStructInfo[] = {
		{ FGlobalAppliedAbilityList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics::NewStructOps, TEXT("GlobalAppliedAbilityList"), &Z_Registration_Info_UScriptStruct_GlobalAppliedAbilityList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedAbilityList), 3707343154U) },
		{ FGlobalAppliedEffectList::StaticStruct, Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics::NewStructOps, TEXT("GlobalAppliedEffectList"), &Z_Registration_Info_UScriptStruct_GlobalAppliedEffectList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAppliedEffectList), 3709836037U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGlobalAbilitySystem, ULifeGlobalAbilitySystem::StaticClass, TEXT("ULifeGlobalAbilitySystem"), &Z_Registration_Info_UClass_ULifeGlobalAbilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGlobalAbilitySystem), 403879213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_1536837397(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
