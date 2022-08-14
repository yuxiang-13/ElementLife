// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeMappableConfigPair() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadedMappableConfigPair();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair;
class UScriptStruct* FLoadedMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadedMappableConfigPair, Z_Construct_UPackage__Script_ElementLife(), TEXT("LoadedMappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLoadedMappableConfigPair>()
{
	return FLoadedMappableConfigPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A container to organize loaded player mappable configs to their CommonUI input type */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "A container to organize loaded player mappable configs to their CommonUI input type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadedMappableConfigPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
		{ "Comment", "/** The player mappable input config that should be applied to the Enhanced Input subsystem */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The player mappable input config that should be applied to the Enhanced Input subsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadedMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
		{ "Comment", "/** The type of device that this mapping config should be applied to */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "The type of device that this mapping config should be applied to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoadedMappableConfigPair, Type), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_MetaData)) }; // 2542301817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
		{ "Comment", "/** If this config is currently active. A config is marked as active when it's owning GFA is active */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "If this config is currently active. A config is marked as active when it's owning GFA is active" },
	};
#endif
	void Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FLoadedMappableConfigPair*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLoadedMappableConfigPair), &Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LoadedMappableConfigPair",
		sizeof(FLoadedMappableConfigPair),
		alignof(FLoadedMappableConfigPair),
		Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoadedMappableConfigPair()
	{
		if (!Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappableConfigPair;
class UScriptStruct* FMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappableConfigPair, Z_Construct_UPackage__Script_ElementLife(), TEXT("MappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FMappableConfigPair>()
{
	return FMappableConfigPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMappableConfigPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Config;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentPlatformTraits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DependentPlatformTraits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedPlatformTraits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedPlatformTraits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateAutomatically_MetaData[];
#endif
		static void NewProp_bShouldActivateAutomatically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateAutomatically;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A container to organize potentially unloaded player mappable configs to their CommonUI input type */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "A container to organize potentially unloaded player mappable configs to their CommonUI input type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappableConfigPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "Comment", "/**\n\x09 * The type of config that this is. Useful for filtering out configs by the current input device\n\x09 * for things like the settings screen, or if you only want to apply this config when a certain\n\x09 * input type is being used.\n\x09 */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "The type of config that this is. Useful for filtering out configs by the current input device\nfor things like the settings screen, or if you only want to apply this config when a certain\ninput type is being used." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappableConfigPair, Type), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_MetaData)) }; // 2542301817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "Comment", "/**\n\x09 * Container of platform traits that must be set in order for this input to be activated.\n\x09 * \n\x09 * If the platform does not have one of the traits specified it can still be registered, but cannot\n\x09 * be activated. \n\x09 */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "Container of platform traits that must be set in order for this input to be activated.\n\nIf the platform does not have one of the traits specified it can still be registered, but cannot\nbe activated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits = { "DependentPlatformTraits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappableConfigPair, DependentPlatformTraits), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "Comment", "/**\n\x09 * If the current platform has any of these traits, then this config will not be actived.\n\x09 */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "If the current platform has any of these traits, then this config will not be actived." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits = { "ExcludedPlatformTraits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappableConfigPair, ExcludedPlatformTraits), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "Comment", "/** If true, then this input config will be activated when it's associated Game Feature is activated.\n\x09 * This is normally the desirable behavior\n\x09 */" },
		{ "ModuleRelativePath", "Input/LifeMappableConfigPair.h" },
		{ "ToolTip", "If true, then this input config will be activated when it's associated Game Feature is activated.\nThis is normally the desirable behavior" },
	};
#endif
	void Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit(void* Obj)
	{
		((FMappableConfigPair*)Obj)->bShouldActivateAutomatically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically = { "bShouldActivateAutomatically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMappableConfigPair), &Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"MappableConfigPair",
		sizeof(FMappableConfigPair),
		alignof(FMappableConfigPair),
		Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair()
	{
		if (!Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FMappableConfigPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeMappableConfigPair_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeMappableConfigPair_h_Statics::ScriptStructInfo[] = {
		{ FLoadedMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewStructOps, TEXT("LoadedMappableConfigPair"), &Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadedMappableConfigPair), 2934783742U) },
		{ FMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewStructOps, TEXT("MappableConfigPair"), &Z_Registration_Info_UScriptStruct_MappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappableConfigPair), 2340107687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeMappableConfigPair_h_1327202776(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeMappableConfigPair_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeMappableConfigPair_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
