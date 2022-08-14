// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Messages/LifeVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeVerbMessage() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeVerbMessage();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeVerbMessage;
class UScriptStruct* FLifeVerbMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeVerbMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeVerbMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeVerbMessage, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeVerbMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LifeVerbMessage.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeVerbMessage>()
{
	return FLifeVerbMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeVerbMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents a generic message of the form Instigator Verb Target (in Context, with Magnitude)\n" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
		{ "ToolTip", "Represents a generic message of the form Instigator Verb Target (in Context, with Magnitude)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeVerbMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Verb_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, Verb), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Verb_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_InstigatorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_InstigatorTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_TargetTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_ContextTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_ContextTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_ContextTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessage.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeVerbMessage, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_InstigatorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_TargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_ContextTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewProp_Magnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeVerbMessage",
		sizeof(FLifeVerbMessage),
		alignof(FLifeVerbMessage),
		Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeVerbMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeVerbMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeVerbMessage.InnerSingleton, Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeVerbMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessage_h_Statics::ScriptStructInfo[] = {
		{ FLifeVerbMessage::StaticStruct, Z_Construct_UScriptStruct_FLifeVerbMessage_Statics::NewStructOps, TEXT("LifeVerbMessage"), &Z_Registration_Info_UScriptStruct_LifeVerbMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeVerbMessage), 1838427254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessage_h_882255604(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
