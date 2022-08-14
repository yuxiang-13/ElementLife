// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifePawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePawnExtensionComponent() {}
// Cross Module References
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnExtensionComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnExtensionComponent();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ElementLife, nullptr, "LifeDynamicMulticastDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULifePawnExtensionComponent::execOnRep_PawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifePawnExtensionComponent::execIsPawnReadyToInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPawnReadyToInitialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifePawnExtensionComponent::execGetLifeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifePawnExtensionComponent::execFindPawnExtensionComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifePawnExtensionComponent**)Z_Param__Result=ULifePawnExtensionComponent::FindPawnExtensionComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULifePawnExtensionComponent::StaticRegisterNativesULifePawnExtensionComponent()
	{
		UClass* Class = ULifePawnExtensionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPawnExtensionComponent", &ULifePawnExtensionComponent::execFindPawnExtensionComponent },
			{ "GetLifeAbilitySystemComponent", &ULifePawnExtensionComponent::execGetLifeAbilitySystemComponent },
			{ "IsPawnReadyToInitialize", &ULifePawnExtensionComponent::execIsPawnReadyToInitialize },
			{ "OnRep_PawnData", &ULifePawnExtensionComponent::execOnRep_PawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics
	{
		struct LifePawnExtensionComponent_eventFindPawnExtensionComponent_Parms
		{
			const AActor* Actor;
			ULifePawnExtensionComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePawnExtensionComponent_eventFindPawnExtensionComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePawnExtensionComponent_eventFindPawnExtensionComponent_Parms, ReturnValue), Z_Construct_UClass_ULifePawnExtensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Pawn" },
		{ "Comment", "// Returns the pawn extension component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
		{ "ToolTip", "Returns the pawn extension component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifePawnExtensionComponent, nullptr, "FindPawnExtensionComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::LifePawnExtensionComponent_eventFindPawnExtensionComponent_Parms), Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics
	{
		struct LifePawnExtensionComponent_eventGetLifeAbilitySystemComponent_Parms
		{
			ULifeAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePawnExtensionComponent_eventGetLifeAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Pawn" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifePawnExtensionComponent, nullptr, "GetLifeAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::LifePawnExtensionComponent_eventGetLifeAbilitySystemComponent_Parms), Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics
	{
		struct LifePawnExtensionComponent_eventIsPawnReadyToInitialize_Parms
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
	void Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifePawnExtensionComponent_eventIsPawnReadyToInitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifePawnExtensionComponent_eventIsPawnReadyToInitialize_Parms), &Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Pawn" },
		{ "Comment", "// Returns true if the pawn is ready to be initialized.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
		{ "ToolTip", "Returns true if the pawn is ready to be initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifePawnExtensionComponent, nullptr, "IsPawnReadyToInitialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::LifePawnExtensionComponent_eventIsPawnReadyToInitialize_Parms), Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifePawnExtensionComponent, nullptr, "OnRep_PawnData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifePawnExtensionComponent);
	UClass* Z_Construct_UClass_ULifePawnExtensionComponent_NoRegister()
	{
		return ULifePawnExtensionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifePawnExtensionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnPawnReadyToInitialize_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnPawnReadyToInitialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifePawnExtensionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifePawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifePawnExtensionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifePawnExtensionComponent_FindPawnExtensionComponent, "FindPawnExtensionComponent" }, // 3204912196
		{ &Z_Construct_UFunction_ULifePawnExtensionComponent_GetLifeAbilitySystemComponent, "GetLifeAbilitySystemComponent" }, // 3545093008
		{ &Z_Construct_UFunction_ULifePawnExtensionComponent_IsPawnReadyToInitialize, "IsPawnReadyToInitialize" }, // 4261566885
		{ &Z_Construct_UFunction_ULifePawnExtensionComponent_OnRep_PawnData, "OnRep_PawnData" }, // 957109268
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnExtensionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifePawnExtensionComponent\n *\n *\x09""Component used to add functionality to all Pawn classes.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LifePawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifePawnExtensionComponent\n\n    Component used to add functionality to all Pawn classes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_BP_OnPawnReadyToInitialize_MetaData[] = {
		{ "DisplayName", "On Pawn Ready To Initialize" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_BP_OnPawnReadyToInitialize = { "BP_OnPawnReadyToInitialize", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnExtensionComponent, BP_OnPawnReadyToInitialize), Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_BP_OnPawnReadyToInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_BP_OnPawnReadyToInitialize_MetaData)) }; // 1821693524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_PawnData_MetaData[] = {
		{ "Category", "Life|Pawn" },
		{ "Comment", "// Pawn data used to create the pawn.  Specified from a spawn function or on a placed instance.\n" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Pawn data used to create the pawn.  Specified from a spawn function or on a placed instance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0020080100000821, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnExtensionComponent, PawnData), Z_Construct_UClass_ULifePawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_PawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_PawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// Pointer to the ability system component that is cached for convenience.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifePawnExtensionComponent.h" },
		{ "ToolTip", "Pointer to the ability system component that is cached for convenience." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifePawnExtensionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_BP_OnPawnReadyToInitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_PawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifePawnExtensionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifePawnExtensionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifePawnExtensionComponent_Statics::ClassParams = {
		&ULifePawnExtensionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifePawnExtensionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnExtensionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifePawnExtensionComponent()
	{
		if (!Z_Registration_Info_UClass_ULifePawnExtensionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifePawnExtensionComponent.OuterSingleton, Z_Construct_UClass_ULifePawnExtensionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifePawnExtensionComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifePawnExtensionComponent>()
	{
		return ULifePawnExtensionComponent::StaticClass();
	}

	void ULifePawnExtensionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PawnData(TEXT("PawnData"));

		const bool bIsValid = true
			&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULifePawnExtensionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifePawnExtensionComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifePawnExtensionComponent, ULifePawnExtensionComponent::StaticClass, TEXT("ULifePawnExtensionComponent"), &Z_Registration_Info_UClass_ULifePawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifePawnExtensionComponent), 16105892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_3989945742(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
