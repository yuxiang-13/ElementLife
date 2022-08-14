// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifeHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHealthComponent() {}
// Cross Module References
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthComponent_NoRegister();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeDeathState();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthSet_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics
	{
		struct _Script_ElementLife_eventLifeHealth_DeathEvent_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ElementLife_eventLifeHealth_DeathEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ElementLife, nullptr, "LifeHealth_DeathEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::_Script_ElementLife_eventLifeHealth_DeathEvent_Parms), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics
	{
		struct _Script_ElementLife_eventLifeHealth_AttributeChanged_Parms
		{
			ULifeHealthComponent* HealthComponent;
			float OldValue;
			float NewValue;
			AActor* Instigator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms, HealthComponent), Z_Construct_UClass_ULifeHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ElementLife, nullptr, "LifeHealth_AttributeChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeDeathState;
	static UEnum* ELifeDeathState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeDeathState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeDeathState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeDeathState, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeDeathState"));
		}
		return Z_Registration_Info_UEnum_ELifeDeathState.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeDeathState>()
	{
		return ELifeDeathState_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enumerators[] = {
		{ "ELifeDeathState::NotDead", (int64)ELifeDeathState::NotDead },
		{ "ELifeDeathState::DeathStarted", (int64)ELifeDeathState::DeathStarted },
		{ "ELifeDeathState::DeathFinished", (int64)ELifeDeathState::DeathFinished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELifeDeathState\n *\n *\x09""Defines current state of death.\n */" },
		{ "DeathFinished.Name", "ELifeDeathState::DeathFinished" },
		{ "DeathStarted.Name", "ELifeDeathState::DeathStarted" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "NotDead.Name", "ELifeDeathState::NotDead" },
		{ "ToolTip", "ELifeDeathState\n\n    Defines current state of death." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeDeathState",
		"ELifeDeathState",
		Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeDeathState()
	{
		if (!Z_Registration_Info_UEnum_ELifeDeathState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeDeathState.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeDeathState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeDeathState.InnerSingleton;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execOnRep_DeathState)
	{
		P_GET_ENUM(ELifeDeathState,Z_Param_OldDeathState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DeathState(ELifeDeathState(Z_Param_OldDeathState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execIsDeadOrDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeadOrDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execGetDeathState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELifeDeathState*)Z_Param__Result=P_THIS->GetDeathState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execGetHealthNormalized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthNormalized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execUninitializeFromAbilitySystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeFromAbilitySystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execInitializeWithAbilitySystem)
	{
		P_GET_OBJECT(ULifeAbilitySystemComponent,Z_Param_InASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeHealthComponent::execFindHealthComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeHealthComponent**)Z_Param__Result=ULifeHealthComponent::FindHealthComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULifeHealthComponent::StaticRegisterNativesULifeHealthComponent()
	{
		UClass* Class = ULifeHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindHealthComponent", &ULifeHealthComponent::execFindHealthComponent },
			{ "GetDeathState", &ULifeHealthComponent::execGetDeathState },
			{ "GetHealth", &ULifeHealthComponent::execGetHealth },
			{ "GetHealthNormalized", &ULifeHealthComponent::execGetHealthNormalized },
			{ "GetMaxHealth", &ULifeHealthComponent::execGetMaxHealth },
			{ "InitializeWithAbilitySystem", &ULifeHealthComponent::execInitializeWithAbilitySystem },
			{ "IsDeadOrDying", &ULifeHealthComponent::execIsDeadOrDying },
			{ "OnRep_DeathState", &ULifeHealthComponent::execOnRep_DeathState },
			{ "UninitializeFromAbilitySystem", &ULifeHealthComponent::execUninitializeFromAbilitySystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics
	{
		struct LifeHealthComponent_eventFindHealthComponent_Parms
		{
			const AActor* Actor;
			ULifeHealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Returns the health component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Returns the health component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "FindHealthComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::LifeHealthComponent_eventFindHealthComponent_Parms), Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics
	{
		struct LifeHealthComponent_eventGetDeathState_Parms
		{
			ELifeDeathState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventGetDeathState_Parms, ReturnValue), Z_Construct_UEnum_ElementLife_ELifeDeathState, METADATA_PARAMS(nullptr, 0) }; // 4238398868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "GetDeathState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::LifeHealthComponent_eventGetDeathState_Parms), Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_GetDeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_GetDeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics
	{
		struct LifeHealthComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Returns the current health value.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Returns the current health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "GetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::LifeHealthComponent_eventGetHealth_Parms), Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics
	{
		struct LifeHealthComponent_eventGetHealthNormalized_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventGetHealthNormalized_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Returns the current health in the range [0.0, 1.0].\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Returns the current health in the range [0.0, 1.0]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "GetHealthNormalized", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::LifeHealthComponent_eventGetHealthNormalized_Parms), Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics
	{
		struct LifeHealthComponent_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Returns the current maximum health value.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Returns the current maximum health value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::LifeHealthComponent_eventGetMaxHealth_Parms), Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics
	{
		struct LifeHealthComponent_eventInitializeWithAbilitySystem_Parms
		{
			ULifeAbilitySystemComponent* InASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Initialize the component using an ability system component.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Initialize the component using an ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::LifeHealthComponent_eventInitializeWithAbilitySystem_Parms), Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics
	{
		struct LifeHealthComponent_eventIsDeadOrDying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifeHealthComponent_eventIsDeadOrDying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifeHealthComponent_eventIsDeadOrDying_Parms), &Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "IsDeadOrDying", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::LifeHealthComponent_eventIsDeadOrDying_Parms), Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics
	{
		struct LifeHealthComponent_eventOnRep_DeathState_Parms
		{
			ELifeDeathState OldDeathState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldDeathState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldDeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState = { "OldDeathState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHealthComponent_eventOnRep_DeathState_Parms, OldDeathState), Z_Construct_UEnum_ElementLife_ELifeDeathState, METADATA_PARAMS(nullptr, 0) }; // 4238398868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::NewProp_OldDeathState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "OnRep_DeathState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::LifeHealthComponent_eventOnRep_DeathState_Parms), Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Health" },
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHealthComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHealthComponent);
	UClass* Z_Construct_UClass_ULifeHealthComponent_NoRegister()
	{
		return ULifeHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeHealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeHealthComponent_FindHealthComponent, "FindHealthComponent" }, // 2093331684
		{ &Z_Construct_UFunction_ULifeHealthComponent_GetDeathState, "GetDeathState" }, // 2965364260
		{ &Z_Construct_UFunction_ULifeHealthComponent_GetHealth, "GetHealth" }, // 3660237084
		{ &Z_Construct_UFunction_ULifeHealthComponent_GetHealthNormalized, "GetHealthNormalized" }, // 1119750746
		{ &Z_Construct_UFunction_ULifeHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 945787574
		{ &Z_Construct_UFunction_ULifeHealthComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 3808062569
		{ &Z_Construct_UFunction_ULifeHealthComponent_IsDeadOrDying, "IsDeadOrDying" }, // 2232306241
		{ &Z_Construct_UFunction_ULifeHealthComponent_OnRep_DeathState, "OnRep_DeathState" }, // 1320387848
		{ &Z_Construct_UFunction_ULifeHealthComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 2849681351
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeHealthComponent\n *\n *\x09""An actor component used to handle anything related to health.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LifeHealthComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeHealthComponent\n\n    An actor component used to handle anything related to health." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the health value has changed.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the health value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnHealthChanged_MetaData)) }; // 2119709855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Comment", "// Delegate fired when the max health value has changed.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the max health value has changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, OnMaxHealthChanged), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnMaxHealthChanged_MetaData)) }; // 2119709855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathStarted_MetaData[] = {
		{ "Comment", "// Delegate fired when the death sequence has started.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the death sequence has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathStarted = { "OnDeathStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, OnDeathStarted), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathStarted_MetaData)) }; // 2481075149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathFinished_MetaData[] = {
		{ "Comment", "// Delegate fired when the death sequence has finished.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Delegate fired when the death sequence has finished." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathFinished = { "OnDeathFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, OnDeathFinished), Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathFinished_MetaData)) }; // 2481075149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// Ability system used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Ability system used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, AbilitySystemComponent), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_HealthSet_MetaData[] = {
		{ "Comment", "// Health set used by this component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Health set used by this component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, HealthSet), Z_Construct_UClass_ULifeHealthSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_HealthSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_HealthSet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState_MetaData[] = {
		{ "Comment", "// Replicated state used to handle dying.\n" },
		{ "ModuleRelativePath", "Character/LifeHealthComponent.h" },
		{ "ToolTip", "Replicated state used to handle dying." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState = { "DeathState", "OnRep_DeathState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHealthComponent, DeathState), Z_Construct_UEnum_ElementLife_ELifeDeathState, METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState_MetaData)) }; // 4238398868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnMaxHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_OnDeathFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_HealthSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHealthComponent_Statics::NewProp_DeathState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHealthComponent_Statics::ClassParams = {
		&ULifeHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHealthComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHealthComponent.OuterSingleton, Z_Construct_UClass_ULifeHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHealthComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHealthComponent>()
	{
		return ULifeHealthComponent::StaticClass();
	}

	void ULifeHealthComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DeathState(TEXT("DeathState"));

		const bool bIsValid = true
			&& Name_DeathState == ClassReps[(int32)ENetFields_Private::DeathState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULifeHealthComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHealthComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::EnumInfo[] = {
		{ ELifeDeathState_StaticEnum, TEXT("ELifeDeathState"), &Z_Registration_Info_UEnum_ELifeDeathState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4238398868U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHealthComponent, ULifeHealthComponent::StaticClass, TEXT("ULifeHealthComponent"), &Z_Registration_Info_UClass_ULifeHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHealthComponent), 930815416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_1722110608(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
