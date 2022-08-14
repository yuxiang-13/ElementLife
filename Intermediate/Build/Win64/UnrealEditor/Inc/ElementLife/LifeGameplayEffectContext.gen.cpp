// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayEffectContext() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeGameplayEffectContext();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FLifeGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FLifeGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext;
class UScriptStruct* FLifeGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeGameplayEffectContext, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeGameplayEffectContext>()
{
	return FLifeGameplayEffectContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayEffectContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeGameplayEffectContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData[] = {
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayEffectContext.h" },
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeGameplayEffectContext, CartridgeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_CartridgeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData[] = {
		{ "Comment", "/** Ability Source object (should implement ILifeAbilitySourceInterface). NOT replicated currently */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Ability Source object (should implement ILifeAbilitySourceInterface). NOT replicated currently" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_AbilitySourceObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_CartridgeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		Z_Construct_UScriptStruct_FGameplayEffectContext,
		&NewStructOps,
		"LifeGameplayEffectContext",
		sizeof(FLifeGameplayEffectContext),
		alignof(FLifeGameplayEffectContext),
		Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeGameplayEffectContext()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayEffectContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayEffectContext_h_Statics::ScriptStructInfo[] = {
		{ FLifeGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FLifeGameplayEffectContext_Statics::NewStructOps, TEXT("LifeGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_LifeGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeGameplayEffectContext), 3669993966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayEffectContext_h_2873550179(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayEffectContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
