// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeGameplayAbility_Reset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayAbility_Reset() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_Reset_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_Reset();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifePlayerResetMessage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULifeGameplayAbility_Reset::StaticRegisterNativesULifeGameplayAbility_Reset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameplayAbility_Reset);
	UClass* Z_Construct_UClass_ULifeGameplayAbility_Reset_NoRegister()
	{
		return ULifeGameplayAbility_Reset::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeGameplayAbility_Reset\n *\n *\x09Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n *\x09""Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only).\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeGameplayAbility_Reset.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Reset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeGameplayAbility_Reset\n\n    Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n    Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameplayAbility_Reset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::ClassParams = {
		&ULifeGameplayAbility_Reset::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameplayAbility_Reset()
	{
		if (!Z_Registration_Info_UClass_ULifeGameplayAbility_Reset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameplayAbility_Reset.OuterSingleton, Z_Construct_UClass_ULifeGameplayAbility_Reset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameplayAbility_Reset.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameplayAbility_Reset>()
	{
		return ULifeGameplayAbility_Reset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameplayAbility_Reset);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifePlayerResetMessage;
class UScriptStruct* FLifePlayerResetMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifePlayerResetMessage, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifePlayerResetMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifePlayerResetMessage>()
{
	return FLifePlayerResetMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Reset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifePlayerResetMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData[] = {
		{ "Category", "LifePlayerResetMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Reset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifePlayerResetMessage, OwnerPlayerState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewProp_OwnerPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewProp_OwnerPlayerState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifePlayerResetMessage",
		sizeof(FLifePlayerResetMessage),
		alignof(FLifePlayerResetMessage),
		Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifePlayerResetMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.InnerSingleton, Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifePlayerResetMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ScriptStructInfo[] = {
		{ FLifePlayerResetMessage::StaticStruct, Z_Construct_UScriptStruct_FLifePlayerResetMessage_Statics::NewStructOps, TEXT("LifePlayerResetMessage"), &Z_Registration_Info_UScriptStruct_LifePlayerResetMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifePlayerResetMessage), 555170338U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameplayAbility_Reset, ULifeGameplayAbility_Reset::StaticClass, TEXT("ULifeGameplayAbility_Reset"), &Z_Registration_Info_UClass_ULifeGameplayAbility_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameplayAbility_Reset), 407070221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_2950536206(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Reset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
