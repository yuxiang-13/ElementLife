// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeAbilitySimpleFailureMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilitySimpleFailureMessage() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage;
class UScriptStruct* FLifeAbilitySimpleFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilitySimpleFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilitySimpleFailureMessage>()
{
	return FLifeAbilitySimpleFailureMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingReason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UserFacingReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilitySimpleFailureMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilitySimpleFailureMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "LifeAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilitySimpleFailureMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySimpleFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_FailureTags_MetaData[] = {
		{ "Category", "LifeAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilitySimpleFailureMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySimpleFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_FailureTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_FailureTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason_MetaData[] = {
		{ "Category", "LifeAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilitySimpleFailureMessage.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason = { "UserFacingReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySimpleFailureMessage, UserFacingReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_FailureTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilitySimpleFailureMessage",
		sizeof(FLifeAbilitySimpleFailureMessage),
		alignof(FLifeAbilitySimpleFailureMessage),
		Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilitySimpleFailureMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo[] = {
		{ FLifeAbilitySimpleFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilitySimpleFailureMessage_Statics::NewStructOps, TEXT("LifeAbilitySimpleFailureMessage"), &Z_Registration_Info_UScriptStruct_LifeAbilitySimpleFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilitySimpleFailureMessage), 1436594007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilitySimpleFailureMessage_h_3337157456(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
