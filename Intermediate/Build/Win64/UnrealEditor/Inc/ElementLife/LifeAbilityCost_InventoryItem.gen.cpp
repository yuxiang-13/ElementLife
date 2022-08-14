// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeAbilityCost_InventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAbilityCost_InventoryItem() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_InventoryItem_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_InventoryItem();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryItemDefinition_NoRegister();
// End Cross Module References
	void ULifeAbilityCost_InventoryItem::StaticRegisterNativesULifeAbilityCost_InventoryItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAbilityCost_InventoryItem);
	UClass* Z_Construct_UClass_ULifeAbilityCost_InventoryItem_NoRegister()
	{
		return ULifeAbilityCost_InventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeAbilityCost,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of an inventory item\n */" },
		{ "DisplayName", "Inventory Item" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeAbilityCost_InventoryItem.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_InventoryItem.h" },
		{ "ToolTip", "Represents a cost that requires expending a quantity of an inventory item" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "AbilityCost" },
		{ "Comment", "/** How much of the item to spend (keyed on ability level) */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_InventoryItem.h" },
		{ "ToolTip", "How much of the item to spend (keyed on ability level)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilityCost_InventoryItem, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_Quantity_MetaData)) }; // 2779129558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData[] = {
		{ "Category", "AbilityCost" },
		{ "Comment", "/** Which item to consume */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeAbilityCost_InventoryItem.h" },
		{ "ToolTip", "Which item to consume" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition = { "ItemDefinition", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAbilityCost_InventoryItem, ItemDefinition), Z_Construct_UClass_ULifeInventoryItemDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::NewProp_ItemDefinition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAbilityCost_InventoryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::ClassParams = {
		&ULifeAbilityCost_InventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAbilityCost_InventoryItem()
	{
		if (!Z_Registration_Info_UClass_ULifeAbilityCost_InventoryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAbilityCost_InventoryItem.OuterSingleton, Z_Construct_UClass_ULifeAbilityCost_InventoryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAbilityCost_InventoryItem.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAbilityCost_InventoryItem>()
	{
		return ULifeAbilityCost_InventoryItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAbilityCost_InventoryItem);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_InventoryItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_InventoryItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAbilityCost_InventoryItem, ULifeAbilityCost_InventoryItem::StaticClass, TEXT("ULifeAbilityCost_InventoryItem"), &Z_Registration_Info_UClass_ULifeAbilityCost_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAbilityCost_InventoryItem), 2284645862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_InventoryItem_h_1357971570(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeAbilityCost_InventoryItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
