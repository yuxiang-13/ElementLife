// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifePawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePawnData() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputConfig_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraMode_NoRegister();
// End Cross Module References
	void ULifePawnData::StaticRegisterNativesULifePawnData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifePawnData);
	UClass* Z_Construct_UClass_ULifePawnData_NoRegister()
	{
		return ULifePawnData::StaticClass();
	}
	struct Z_Construct_UClass_ULifePawnData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifePawnData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifePawnData\n *\n *\x09Non-mutable data asset that contains properties used to define a pawn.\n */" },
		{ "DisplayName", "Life Pawn Data" },
		{ "IncludePath", "Character/LifePawnData.h" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
		{ "ToolTip", "ULifePawnData\n\n    Non-mutable data asset that contains properties used to define a pawn." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "Life|Pawn" },
		{ "Comment", "// Class to instantiate for this pawn (should usually derive from ALifePawn or ALifeCharacter).\n" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ToolTip", "Class to instantiate for this pawn (should usually derive from ALifePawn or ALifeCharacter)." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnData, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::NewProp_PawnClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilitySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Life|Abilities" },
		{ "Comment", "// Ability sets to grant to this pawn's ability system.\n" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ToolTip", "Ability sets to grant to this pawn's ability system." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Life|Abilities" },
		{ "Comment", "// What mapping of ability tags to use for actions taking by this pawn\n" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ToolTip", "What mapping of ability tags to use for actions taking by this pawn" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnData, TagRelationshipMapping), Z_Construct_UClass_ULifeAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::NewProp_TagRelationshipMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::NewProp_TagRelationshipMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Life|Input" },
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnData, InputConfig), Z_Construct_UClass_ULifeInputConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::NewProp_InputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::NewProp_InputConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnData_Statics::NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Life|Camera" },
		{ "Comment", "// Default camera mode used by player controlled pawns.\n" },
		{ "ModuleRelativePath", "Character/LifePawnData.h" },
		{ "ToolTip", "Default camera mode used by player controlled pawns." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULifePawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePawnData, DefaultCameraMode), Z_Construct_UClass_ULifeCameraMode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::NewProp_DefaultCameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::NewProp_DefaultCameraMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifePawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_PawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_AbilitySets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_TagRelationshipMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePawnData_Statics::NewProp_DefaultCameraMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifePawnData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifePawnData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifePawnData_Statics::ClassParams = {
		&ULifePawnData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifePawnData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifePawnData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifePawnData()
	{
		if (!Z_Registration_Info_UClass_ULifePawnData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifePawnData.OuterSingleton, Z_Construct_UClass_ULifePawnData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifePawnData.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifePawnData>()
	{
		return ULifePawnData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifePawnData);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifePawnData, ULifePawnData::StaticClass, TEXT("ULifePawnData"), &Z_Registration_Info_UClass_ULifePawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifePawnData), 3949969227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnData_h_536523053(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
