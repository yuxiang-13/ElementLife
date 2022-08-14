// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeAbilityTagRelationshipMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilityTagRelationshipMapping() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityTagRelationship();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship;
class UScriptStruct* FLifeAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilityTagRelationship>()
{
	return FLifeAbilityTagRelationship::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToBlock_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToCancel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToCancel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that defines the relationship between different ability tags */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Struct that defines the relationship between different ability tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilityTagRelationship>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Gameplay.Action" },
		{ "Category", "Ability" },
		{ "Comment", "/** The tag that this container relationship is about. Single tag, but abilities can have multiple of these */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The tag that this container relationship is about. Single tag, but abilities can have multiple of these" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityTagRelationship, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be blocked by any ability using this tag */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be blocked by any ability using this tag" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock = { "AbilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityTagRelationship, AbilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be canceled by any ability using this tag */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be canceled by any ability using this tag" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel = { "AbilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityTagRelationship, AbilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation required tags of the ability */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation required tags of the ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityTagRelationship, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation blocked tags of the ability */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation blocked tags of the ability" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityTagRelationship, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilityTagRelationship",
		sizeof(FLifeAbilityTagRelationship),
		alignof(FLifeAbilityTagRelationship),
		Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityTagRelationship()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship.InnerSingleton;
	}
	void ULifeAbilityTagRelationshipMapping::StaticRegisterNativesULifeAbilityTagRelationshipMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilityTagRelationshipMapping);
	UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister()
	{
		return ULifeAbilityTagRelationshipMapping::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagRelationships_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagRelationships_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTagRelationships;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Mapping of how ability tags block or cancel other abilities */" },
		{ "IncludePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Mapping of how ability tags block or cancel other abilities" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAbilityTagRelationship, METADATA_PARAMS(nullptr, 0) }; // 1983043867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The list of relationships between different gameplay tags (which ones block or cancel others) */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilityTagRelationshipMapping.h" },
		{ "TitleProperty", "AbilityTag" },
		{ "ToolTip", "The list of relationships between different gameplay tags (which ones block or cancel others)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilityTagRelationshipMapping, AbilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_MetaData)) }; // 1983043867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilityTagRelationshipMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::ClassParams = {
		&ULifeAbilityTagRelationshipMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilityTagRelationshipMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilityTagRelationshipMapping.OuterSingleton, Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilityTagRelationshipMapping.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilityTagRelationshipMapping>()
	{
		return ULifeAbilityTagRelationshipMapping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilityTagRelationshipMapping);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo[] = {
		{ FLifeAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilityTagRelationship_Statics::NewStructOps, TEXT("LifeAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_LifeAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilityTagRelationship), 1983043867U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilityTagRelationshipMapping, ULifeAbilityTagRelationshipMapping::StaticClass, TEXT("ULifeAbilityTagRelationshipMapping"), &Z_Registration_Info_UClass_ULifeAbilityTagRelationshipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilityTagRelationshipMapping), 587116563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_1002802874(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
