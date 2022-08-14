// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeExperienceDefinition() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceDefinition_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceActionSet_NoRegister();
// End Cross Module References
	void ULifeExperienceDefinition::StaticRegisterNativesULifeExperienceDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeExperienceDefinition);
	UClass* Z_Construct_UClass_ULifeExperienceDefinition_NoRegister()
	{
		return ULifeExperienceDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULifeExperienceDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultPawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeExperienceDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Definition of an experience\n */" },
		{ "IncludePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ToolTip", "Definition of an experience" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** The default pawn class to spawn for players *///@TODO: Make soft?\n" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The default pawn class to spawn for players //@TODO: Make soft?" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeExperienceDefinition, DefaultPawnData), Z_Construct_UClass_ULifePawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_DefaultPawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010008000010019, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeExperienceActionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// List of additional action sets to compose into this experience\n" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceDefinition.h" },
		{ "ToolTip", "List of additional action sets to compose into this experience" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeExperienceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_DefaultPawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceDefinition_Statics::NewProp_ActionSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeExperienceDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeExperienceDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeExperienceDefinition_Statics::ClassParams = {
		&ULifeExperienceDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeExperienceDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::PropPointers),
		0,
		0x008100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeExperienceDefinition()
	{
		if (!Z_Registration_Info_UClass_ULifeExperienceDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeExperienceDefinition.OuterSingleton, Z_Construct_UClass_ULifeExperienceDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeExperienceDefinition.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeExperienceDefinition>()
	{
		return ULifeExperienceDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeExperienceDefinition);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeExperienceDefinition, ULifeExperienceDefinition::StaticClass, TEXT("ULifeExperienceDefinition"), &Z_Registration_Info_UClass_ULifeExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeExperienceDefinition), 2986629405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceDefinition_h_333012117(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
