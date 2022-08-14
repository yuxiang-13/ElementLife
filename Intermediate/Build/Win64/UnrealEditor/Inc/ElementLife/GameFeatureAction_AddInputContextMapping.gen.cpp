// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputContextMapping() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority;
class UScriptStruct* FInputMappingContextAndPriority::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingContextAndPriority, Z_Construct_UPackage__Script_ElementLife(), TEXT("InputMappingContextAndPriority"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FInputMappingContextAndPriority>()
{
	return FInputMappingContextAndPriority::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingContextAndPriority>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingContextAndPriority, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Higher priority input mappings will be prioritized over mappings with a lower priority.\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
		{ "ToolTip", "Higher priority input mappings will be prioritized over mappings with a lower priority." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingContextAndPriority, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"InputMappingContextAndPriority",
		sizeof(FInputMappingContextAndPriority),
		alignof(FInputMappingContextAndPriority),
		Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority()
	{
		if (!Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton;
	}
	void UGameFeatureAction_AddInputContextMapping::StaticRegisterNativesUGameFeatureAction_AddInputContextMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddInputContextMapping);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_NoRegister()
	{
		return UGameFeatureAction_AddInputContextMapping::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds InputMappingContext to local players' EnhancedInput system. \n * Expects that local players are set up to use the EnhancedInput system.\n */" },
		{ "DisplayName", "Add Input Mapping" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
		{ "ToolTip", "Adds InputMappingContext to local players' EnhancedInput system.\nExpects that local players are set up to use the EnhancedInput system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_Inner = { "InputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(nullptr, 0) }; // 187027343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//~End of UObject interface\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputContextMapping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputContextMapping, InputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_MetaData)) }; // 187027343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputContextMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::ClassParams = {
		&UGameFeatureAction_AddInputContextMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_AddInputContextMapping>()
	{
		return UGameFeatureAction_AddInputContextMapping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputContextMapping);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ScriptStructInfo[] = {
		{ FInputMappingContextAndPriority::StaticStruct, Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewStructOps, TEXT("InputMappingContextAndPriority"), &Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingContextAndPriority), 187027343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping, UGameFeatureAction_AddInputContextMapping::StaticClass, TEXT("UGameFeatureAction_AddInputContextMapping"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputContextMapping), 124678873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_3496318661(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddInputContextMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
