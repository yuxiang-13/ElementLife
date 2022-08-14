// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilitySet() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySet();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility;
class UScriptStruct* FLifeAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilitySet_GameplayAbility>()
{
	return FLifeAbilitySet_GameplayAbility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeAbilitySet_GameplayAbility\n *\n *\x09""Data used by the ability set to grant gameplay abilities.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "FLifeAbilitySet_GameplayAbility\n\n    Data used by the ability set to grant gameplay abilities." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilitySet_GameplayAbility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "LifeAbilitySet_GameplayAbility" },
		{ "Comment", "// Gameplay ability to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Gameplay ability to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_ULifeGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "LifeAbilitySet_GameplayAbility" },
		{ "Comment", "// Level of ability to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Level of ability to grant." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LifeAbilitySet_GameplayAbility" },
		{ "Comment", "// Tag used to process input for the ability.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Tag used to process input for the ability." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_InputTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilitySet_GameplayAbility",
		sizeof(FLifeAbilitySet_GameplayAbility),
		alignof(FLifeAbilitySet_GameplayAbility),
		Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect;
class UScriptStruct* FLifeAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilitySet_GameplayEffect>()
{
	return FLifeAbilitySet_GameplayEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeAbilitySet_GameplayEffect\n *\n *\x09""Data used by the ability set to grant gameplay effects.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "FLifeAbilitySet_GameplayEffect\n\n    Data used by the ability set to grant gameplay effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilitySet_GameplayEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "LifeAbilitySet_GameplayEffect" },
		{ "Comment", "// Gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData[] = {
		{ "Category", "LifeAbilitySet_GameplayEffect" },
		{ "Comment", "// Level of gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Level of gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilitySet_GameplayEffect",
		sizeof(FLifeAbilitySet_GameplayEffect),
		alignof(FLifeAbilitySet_GameplayEffect),
		Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet;
class UScriptStruct* FLifeAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilitySet_AttributeSet>()
{
	return FLifeAbilitySet_AttributeSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeAbilitySet_AttributeSet\n *\n *\x09""Data used by the ability set to grant attribute sets.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "FLifeAbilitySet_AttributeSet\n\n    Data used by the ability set to grant attribute sets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilitySet_AttributeSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "LifeAbilitySet_AttributeSet" },
		{ "Comment", "// Gameplay effect to grant.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Gameplay effect to grant." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilitySet_AttributeSet",
		sizeof(FLifeAbilitySet_AttributeSet),
		alignof(FLifeAbilitySet_AttributeSet),
		Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles;
class UScriptStruct* FLifeAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilitySet_GrantedHandles>()
{
	return FLifeAbilitySet_GrantedHandles::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrantedAttributeSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeAbilitySet_GrantedHandles\n *\n *\x09""Data used to store handles to what has been granted by the ability set.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "FLifeAbilitySet_GrantedHandles\n\n    Data used to store handles to what has been granted by the ability set." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilitySet_GrantedHandles>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 2663978299
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData[] = {
		{ "Comment", "// Handles to the granted abilities.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Handles to the granted abilities." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_MetaData)) }; // 2663978299
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 1296751506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData[] = {
		{ "Comment", "// Handles to the granted gameplay effects.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Handles to the granted gameplay effects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_MetaData)) }; // 1296751506
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData[] = {
		{ "Comment", "// Pointers to the granted attribute sets\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ToolTip", "Pointers to the granted attribute sets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilitySet_GrantedHandles",
		sizeof(FLifeAbilitySet_GrantedHandles),
		alignof(FLifeAbilitySet_GrantedHandles),
		Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles.InnerSingleton;
	}
	void ULifeAbilitySet::StaticRegisterNativesULifeAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilitySet);
	UClass* Z_Construct_UClass_ULifeAbilitySet_NoRegister()
	{
		return ULifeAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeAbilitySet\n *\n *\x09Non-mutable data asset used to grant gameplay abilities and gameplay effects.\n */" },
		{ "IncludePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeAbilitySet\n\n    Non-mutable data asset used to grant gameplay abilities and gameplay effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility, METADATA_PARAMS(nullptr, 0) }; // 2198449476
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "TitleProperty", "Ability" },
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities_MetaData)) }; // 2198449476
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 3785192303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects_MetaData)) }; // 3785192303
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet, METADATA_PARAMS(nullptr, 0) }; // 2619968675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attribute Sets" },
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes_MetaData)) }; // 2619968675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilitySet_Statics::NewProp_GrantedAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilitySet_Statics::ClassParams = {
		&ULifeAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySet_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilitySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilitySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilitySet()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilitySet.OuterSingleton, Z_Construct_UClass_ULifeAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilitySet.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilitySet>()
	{
		return ULifeAbilitySet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilitySet);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ScriptStructInfo[] = {
		{ FLifeAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("LifeAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilitySet_GameplayAbility), 2198449476U) },
		{ FLifeAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("LifeAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_LifeAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilitySet_GameplayEffect), 3785192303U) },
		{ FLifeAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("LifeAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_LifeAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilitySet_AttributeSet), 2619968675U) },
		{ FLifeAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("LifeAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_LifeAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilitySet_GrantedHandles), 1497949725U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilitySet, ULifeAbilitySet::StaticClass, TEXT("ULifeAbilitySet"), &Z_Registration_Info_UClass_ULifeAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilitySet), 3288238877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_890583197(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
