// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_AddAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddAbilities() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityGrant();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAttributeSetGrant();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilityGrant;
class UScriptStruct* FLifeAbilityGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilityGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilityGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilityGrant, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilityGrant"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilityGrant.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilityGrant>()
{
	return FLifeAbilityGrant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilityGrant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewProp_AbilityType_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LifeAbilityGrant" },
		{ "Comment", "// Type of ability to grant\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Type of ability to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityGrant, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewProp_AbilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewProp_AbilityType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewProp_AbilityType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilityGrant",
		sizeof(FLifeAbilityGrant),
		alignof(FLifeAbilityGrant),
		Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityGrant()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilityGrant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilityGrant.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilityGrant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant;
class UScriptStruct* FLifeAttributeSetGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAttributeSetGrant, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAttributeSetGrant"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAttributeSetGrant>()
{
	return FLifeAttributeSetGrant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAttributeSetGrant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_AttributeSetType_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LifeAttributeSetGrant" },
		{ "Comment", "// Ability set to grant\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Ability set to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_AttributeSetType = { "AttributeSetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAttributeSetGrant, AttributeSetType), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_AttributeSetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_AttributeSetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_InitializationData_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LifeAttributeSetGrant" },
		{ "Comment", "// Data table referent to initialize the attributes with, if any (can be left unset)\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAttributeSetGrant, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_InitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_InitializationData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_AttributeSetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewProp_InitializationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAttributeSetGrant",
		sizeof(FLifeAttributeSetGrant),
		alignof(FLifeAttributeSetGrant),
		Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAttributeSetGrant()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.InnerSingleton, Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry;
class UScriptStruct* FGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, Z_Construct_UPackage__Script_ElementLife(), TEXT("GameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FGameFeatureAbilitiesEntry>()
{
	return FGameFeatureAbilitiesEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeatureAbilitiesEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// The base actor class to add to\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "The base actor class to add to" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAbilityGrant, METADATA_PARAMS(nullptr, 0) }; // 1691986071
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// List of abilities to grant to actors of the specified class\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData)) }; // 1691986071
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAttributeSetGrant, METADATA_PARAMS(nullptr, 0) }; // 1828698418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "// List of attribute sets to grant to actors of the specified class \n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData)) }; // 1828698418
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "Attributes" },
		{ "Comment", "// List of ability sets to grant to actors of the specified class\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of ability sets to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"GameFeatureAbilitiesEntry",
		sizeof(FGameFeatureAbilitiesEntry),
		alignof(FGameFeatureAbilitiesEntry),
		Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton;
	}
	void UGameFeatureAction_AddAbilities::StaticRegisterNativesUGameFeatureAction_AddAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddAbilities);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister()
	{
		return UGameFeatureAction_AddAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
		{ "DisplayName", "Add Abilities" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, METADATA_PARAMS(nullptr, 0) }; // 3232793912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData)) }; // 3232793912
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams = {
		&UGameFeatureAction_AddAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_AddAbilities>()
	{
		return UGameFeatureAction_AddAbilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddAbilities);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo[] = {
		{ FLifeAbilityGrant::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilityGrant_Statics::NewStructOps, TEXT("LifeAbilityGrant"), &Z_Registration_Info_UScriptStruct_LifeAbilityGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilityGrant), 1691986071U) },
		{ FLifeAttributeSetGrant::StaticStruct, Z_Construct_UScriptStruct_FLifeAttributeSetGrant_Statics::NewStructOps, TEXT("LifeAttributeSetGrant"), &Z_Registration_Info_UScriptStruct_LifeAttributeSetGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAttributeSetGrant), 1828698418U) },
		{ FGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeatureAbilitiesEntry), 3232793912U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddAbilities, UGameFeatureAction_AddAbilities::StaticClass, TEXT("UGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddAbilities), 1243988400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_2165503480(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
