// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilitySystemComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULifeAbilitySystemComponent::execClientNotifyAbilityFailed)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_Ability);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_FailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientNotifyAbilityFailed_Implementation(Z_Param_Ability,Z_Param_FailureReason);
		P_NATIVE_END;
	}
	static FName NAME_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed = FName(TEXT("ClientNotifyAbilityFailed"));
	void ULifeAbilitySystemComponent::ClientNotifyAbilityFailed(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason)
	{
		LifeAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms Parms;
		Parms.Ability=Ability;
		Parms.FailureReason=FailureReason;
		ProcessEvent(FindFunctionChecked(NAME_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed),&Parms);
	}
	void ULifeAbilitySystemComponent::StaticRegisterNativesULifeAbilitySystemComponent()
	{
		UClass* Class = ULifeAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientNotifyAbilityFailed", &ULifeAbilitySystemComponent::execClientNotifyAbilityFailed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that an ability failed to activate */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySystemComponent.h" },
		{ "ToolTip", "Notify client that an ability failed to activate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeAbilitySystemComponent, nullptr, "ClientNotifyAbilityFailed", nullptr, nullptr, sizeof(LifeAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms), Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilitySystemComponent);
	UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister()
	{
		return ULifeAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeAbilitySystemComponent_ClientNotifyAbilityFailed, "ClientNotifyAbilityFailed" }, // 803556535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeAbilitySystemComponent\n *\n *\x09""Base ability system component class used by this project.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/LifeAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeAbilitySystemComponent\n\n    Base ability system component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySystemComponent.h" },
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::ClassParams = {
		&ULifeAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_ULifeAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilitySystemComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilitySystemComponent>()
	{
		return ULifeAbilitySystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilitySystemComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilitySystemComponent, ULifeAbilitySystemComponent::StaticClass, TEXT("ULifeAbilitySystemComponent"), &Z_Registration_Info_UClass_ULifeAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilitySystemComponent), 2249565109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_2372187104(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
