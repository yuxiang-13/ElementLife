// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeInputConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeInputConfig() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeInputAction();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputConfig_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeInputAction;
class UScriptStruct* FLifeInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeInputAction, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_LifeInputAction.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeInputAction>()
{
	return FLifeInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeInputAction\n *\n *\x09Struct used to map a input action to a gameplay input tag.\n */" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
		{ "ToolTip", "FLifeInputAction\n\n    Struct used to map a input action to a gameplay input tag." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "LifeInputAction" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "LifeInputAction" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewProp_InputTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeInputAction",
		sizeof(FLifeInputAction),
		alignof(FLifeInputAction),
		Z_Construct_UScriptStruct_FLifeInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeInputAction.InnerSingleton, Z_Construct_UScriptStruct_FLifeInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeInputAction.InnerSingleton;
	}
	void ULifeInputConfig::StaticRegisterNativesULifeInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputConfig);
	UClass* Z_Construct_UClass_ULifeInputConfig_NoRegister()
	{
		return ULifeInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeInputConfig\n *\n *\x09Non-mutable data asset that contains input configuration properties.\n */" },
		{ "IncludePath", "Input/LifeInputConfig.h" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeInputConfig\n\n    Non-mutable data asset that contains input configuration properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeInputAction, METADATA_PARAMS(nullptr, 0) }; // 154546777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "LifeInputConfig" },
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions_MetaData)) }; // 154546777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeInputAction, METADATA_PARAMS(nullptr, 0) }; // 154546777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "LifeInputConfig" },
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
		{ "ModuleRelativePath", "Input/LifeInputConfig.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions_MetaData)) }; // 154546777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_NativeInputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputConfig_Statics::NewProp_AbilityInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputConfig_Statics::ClassParams = {
		&ULifeInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputConfig_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputConfig()
	{
		if (!Z_Registration_Info_UClass_ULifeInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputConfig.OuterSingleton, Z_Construct_UClass_ULifeInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputConfig.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputConfig>()
	{
		return ULifeInputConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputConfig);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FLifeInputAction::StaticStruct, Z_Construct_UScriptStruct_FLifeInputAction_Statics::NewStructOps, TEXT("LifeInputAction"), &Z_Registration_Info_UScriptStruct_LifeInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeInputAction), 154546777U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeInputConfig, ULifeInputConfig::StaticClass, TEXT("ULifeInputConfig"), &Z_Registration_Info_UClass_ULifeInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputConfig), 1842131730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_561438065(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
