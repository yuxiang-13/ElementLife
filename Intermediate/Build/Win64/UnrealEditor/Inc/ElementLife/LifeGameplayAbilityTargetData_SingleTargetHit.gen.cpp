// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeGameplayAbilityTargetData_SingleTargetHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayAbilityTargetData_SingleTargetHit() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
// End Cross Module References

static_assert(std::is_polymorphic<FLifeGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>(), "USTRUCT FLifeGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData_SingleTargetHit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit;
class UScriptStruct* FLifeGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeGameplayAbilityTargetData_SingleTargetHit"));
	}
	return Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeGameplayAbilityTargetData_SingleTargetHit>()
{
	return FLifeGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Game-specific additions to SingleTargetHit tracking */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayAbilityTargetData_SingleTargetHit.h" },
		{ "ToolTip", "Game-specific additions to SingleTargetHit tracking" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeGameplayAbilityTargetData_SingleTargetHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID_MetaData[] = {
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
		{ "ModuleRelativePath", "AbilitySystem/LifeGameplayAbilityTargetData_SingleTargetHit.h" },
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeGameplayAbilityTargetData_SingleTargetHit, CartridgeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit,
		&NewStructOps,
		"LifeGameplayAbilityTargetData_SingleTargetHit",
		sizeof(FLifeGameplayAbilityTargetData_SingleTargetHit),
		alignof(FLifeGameplayAbilityTargetData_SingleTargetHit),
		Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.InnerSingleton, Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayAbilityTargetData_SingleTargetHit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo[] = {
		{ FLifeGameplayAbilityTargetData_SingleTargetHit::StaticStruct, Z_Construct_UScriptStruct_FLifeGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps, TEXT("LifeGameplayAbilityTargetData_SingleTargetHit"), &Z_Registration_Info_UScriptStruct_LifeGameplayAbilityTargetData_SingleTargetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeGameplayAbilityTargetData_SingleTargetHit), 3519765850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayAbilityTargetData_SingleTargetHit_h_2211149846(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGameplayAbilityTargetData_SingleTargetHit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
