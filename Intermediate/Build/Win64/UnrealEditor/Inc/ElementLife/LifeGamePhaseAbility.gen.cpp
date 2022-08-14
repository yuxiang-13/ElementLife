// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Phases/LifeGamePhaseAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGamePhaseAbility() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGamePhaseAbility_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGamePhaseAbility();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void ULifeGamePhaseAbility::StaticRegisterNativesULifeGamePhaseAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGamePhaseAbility);
	UClass* Z_Construct_UClass_ULifeGamePhaseAbility_NoRegister()
	{
		return ULifeGamePhaseAbility::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGamePhaseAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePhaseTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GamePhaseTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGamePhaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGamePhaseAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeGamePhaseAbility\n *\n * The base gameplay ability for any ability that is used to change the active game phase.\n */" },
		{ "HideCategories", "Input Input" },
		{ "IncludePath", "AbilitySystem/Phases/LifeGamePhaseAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LifeGamePhaseAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeGamePhaseAbility\n\nThe base gameplay ability for any ability that is used to change the active game phase." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGamePhaseAbility_Statics::NewProp_GamePhaseTag_MetaData[] = {
		{ "Category", "Life|Game Phase" },
		{ "Comment", "// Defines the game phase that this game phase ability is part of.  So for example,\n// if your game phase is GamePhase.RoundStart, then it will cancel all sibling phases.\n// So if you had a phase such as GamePhase.WaitingToStart that was active, starting\n// the ability part of RoundStart would end WaitingToStart.  However to get nested behaviors\n// you can also nest the phases.  So for example, GamePhase.Playing.NormalPlay, is a sub-phase\n// of the parent GamePhase.Playing, so changing the sub-phase to GamePhase.Playing.SuddenDeath,\n// would stop any ability tied to GamePhase.Playing.*, but wouldn't end any ability \n// tied to the GamePhase.Playing phase.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Phases/LifeGamePhaseAbility.h" },
		{ "ToolTip", "Defines the game phase that this game phase ability is part of.  So for example,\nif your game phase is GamePhase.RoundStart, then it will cancel all sibling phases.\nSo if you had a phase such as GamePhase.WaitingToStart that was active, starting\nthe ability part of RoundStart would end WaitingToStart.  However to get nested behaviors\nyou can also nest the phases.  So for example, GamePhase.Playing.NormalPlay, is a sub-phase\nof the parent GamePhase.Playing, so changing the sub-phase to GamePhase.Playing.SuddenDeath,\nwould stop any ability tied to GamePhase.Playing.*, but wouldn't end any ability\ntied to the GamePhase.Playing phase." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeGamePhaseAbility_Statics::NewProp_GamePhaseTag = { "GamePhaseTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGamePhaseAbility, GamePhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULifeGamePhaseAbility_Statics::NewProp_GamePhaseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGamePhaseAbility_Statics::NewProp_GamePhaseTag_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGamePhaseAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGamePhaseAbility_Statics::NewProp_GamePhaseTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGamePhaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGamePhaseAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGamePhaseAbility_Statics::ClassParams = {
		&ULifeGamePhaseAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeGamePhaseAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGamePhaseAbility_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGamePhaseAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGamePhaseAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGamePhaseAbility()
	{
		if (!Z_Registration_Info_UClass_ULifeGamePhaseAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGamePhaseAbility.OuterSingleton, Z_Construct_UClass_ULifeGamePhaseAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGamePhaseAbility.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGamePhaseAbility>()
	{
		return ULifeGamePhaseAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGamePhaseAbility);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGamePhaseAbility, ULifeGamePhaseAbility::StaticClass, TEXT("ULifeGamePhaseAbility"), &Z_Registration_Info_UClass_ULifeGamePhaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGamePhaseAbility), 1226787465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseAbility_h_4240605530(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
