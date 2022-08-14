// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeAbilityCost_PlayerTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilityCost_PlayerTagStack() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void ULifeAbilityCost_PlayerTagStack::StaticRegisterNativesULifeAbilityCost_PlayerTagStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilityCost_PlayerTagStack);
	UClass* Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_NoRegister()
	{
		return ULifeAbilityCost_PlayerTagStack::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeAbilityCost,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack on the player state\n */" },
		{ "DisplayName", "Player Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeAbilityCost_PlayerTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack on the player state" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilityCost_PlayerTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Quantity_MetaData)) }; // 2779129558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** Which tag to spend some of */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_PlayerTagStack.h" },
		{ "ToolTip", "Which tag to spend some of" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilityCost_PlayerTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Tag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilityCost_PlayerTagStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::ClassParams = {
		&ULifeAbilityCost_PlayerTagStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilityCost_PlayerTagStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilityCost_PlayerTagStack.OuterSingleton, Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilityCost_PlayerTagStack.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilityCost_PlayerTagStack>()
	{
		return ULifeAbilityCost_PlayerTagStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilityCost_PlayerTagStack);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_PlayerTagStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_PlayerTagStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilityCost_PlayerTagStack, ULifeAbilityCost_PlayerTagStack::StaticClass, TEXT("ULifeAbilityCost_PlayerTagStack"), &Z_Registration_Info_UClass_ULifeAbilityCost_PlayerTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilityCost_PlayerTagStack), 4079478702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_PlayerTagStack_h_2758614946(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_PlayerTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_PlayerTagStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
