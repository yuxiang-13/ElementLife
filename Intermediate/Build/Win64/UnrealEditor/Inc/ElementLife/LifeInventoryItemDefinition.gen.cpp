// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Inventory/LifeInventoryItemDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeInventoryItemDefinition() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryItemFragment_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryItemFragment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryItemDefinition_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryItemDefinition();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryFunctionLibrary_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInventoryFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ULifeInventoryItemFragment::StaticRegisterNativesULifeInventoryItemFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInventoryItemFragment);
	UClass* Z_Construct_UClass_ULifeInventoryItemFragment_NoRegister()
	{
		return ULifeInventoryItemFragment::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInventoryItemFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInventoryItemFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryItemFragment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Represents a fragment of an item definition\n" },
		{ "IncludePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "ToolTip", "Represents a fragment of an item definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInventoryItemFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInventoryItemFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInventoryItemFragment_Statics::ClassParams = {
		&ULifeInventoryItemFragment::StaticClass,
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
		0x002010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryItemFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInventoryItemFragment()
	{
		if (!Z_Registration_Info_UClass_ULifeInventoryItemFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInventoryItemFragment.OuterSingleton, Z_Construct_UClass_ULifeInventoryItemFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInventoryItemFragment.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInventoryItemFragment>()
	{
		return ULifeInventoryItemFragment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInventoryItemFragment);
	void ULifeInventoryItemDefinition::StaticRegisterNativesULifeInventoryItemDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInventoryItemDefinition);
	UClass* Z_Construct_UClass_ULifeInventoryItemDefinition_NoRegister()
	{
		return ULifeInventoryItemDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInventoryItemDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeInventoryItemDefinition\n */" },
		{ "IncludePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeInventoryItemDefinition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInventoryItemDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeInventoryItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x001400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInventoryItemDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInventoryItemDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::ClassParams = {
		&ULifeInventoryItemDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::PropPointers),
		0,
		0x008100A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInventoryItemDefinition()
	{
		if (!Z_Registration_Info_UClass_ULifeInventoryItemDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInventoryItemDefinition.OuterSingleton, Z_Construct_UClass_ULifeInventoryItemDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInventoryItemDefinition.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInventoryItemDefinition>()
	{
		return ULifeInventoryItemDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInventoryItemDefinition);
	DEFINE_FUNCTION(ULifeInventoryFunctionLibrary::execFindItemDefinitionFragment)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDef);
		P_GET_OBJECT(UClass,Z_Param_FragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULifeInventoryItemFragment**)Z_Param__Result=ULifeInventoryFunctionLibrary::FindItemDefinitionFragment(Z_Param_ItemDef,Z_Param_FragmentClass);
		P_NATIVE_END;
	}
	void ULifeInventoryFunctionLibrary::StaticRegisterNativesULifeInventoryFunctionLibrary()
	{
		UClass* Class = ULifeInventoryFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindItemDefinitionFragment", &ULifeInventoryFunctionLibrary::execFindItemDefinitionFragment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics
	{
		struct LifeInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms
		{
			TSubclassOf<ULifeInventoryItemDefinition>  ItemDef;
			TSubclassOf<ULifeInventoryItemFragment>  FragmentClass;
			const ULifeInventoryItemFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ItemDef), Z_Construct_UClass_ULifeInventoryItemDefinition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, FragmentClass), Z_Construct_UClass_ULifeInventoryItemFragment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ReturnValue), Z_Construct_UClass_ULifeInventoryItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeInventoryFunctionLibrary, nullptr, "FindItemDefinitionFragment", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::LifeInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms), Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInventoryFunctionLibrary);
	UClass* Z_Construct_UClass_ULifeInventoryFunctionLibrary_NoRegister()
	{
		return ULifeInventoryFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeInventoryFunctionLibrary_FindItemDefinitionFragment, "FindItemDefinitionFragment" }, // 3657338896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//@TODO: Make into a subsystem instead?\n" },
		{ "IncludePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LifeInventoryItemDefinition.h" },
		{ "ToolTip", "@TODO: Make into a subsystem instead?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInventoryFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::ClassParams = {
		&ULifeInventoryFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInventoryFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULifeInventoryFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULifeInventoryFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInventoryFunctionLibrary.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInventoryFunctionLibrary>()
	{
		return ULifeInventoryFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInventoryFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Inventory_LifeInventoryItemDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Inventory_LifeInventoryItemDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeInventoryItemFragment, ULifeInventoryItemFragment::StaticClass, TEXT("ULifeInventoryItemFragment"), &Z_Registration_Info_UClass_ULifeInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInventoryItemFragment), 343416395U) },
		{ Z_Construct_UClass_ULifeInventoryItemDefinition, ULifeInventoryItemDefinition::StaticClass, TEXT("ULifeInventoryItemDefinition"), &Z_Registration_Info_UClass_ULifeInventoryItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInventoryItemDefinition), 2383174899U) },
		{ Z_Construct_UClass_ULifeInventoryFunctionLibrary, ULifeInventoryFunctionLibrary::StaticClass, TEXT("ULifeInventoryFunctionLibrary"), &Z_Registration_Info_UClass_ULifeInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInventoryFunctionLibrary), 1095245846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Inventory_LifeInventoryItemDefinition_h_2088897263(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Inventory_LifeInventoryItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Inventory_LifeInventoryItemDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
