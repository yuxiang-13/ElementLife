// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Animation/LifeAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAnimInstance() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAnimInstance_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
// End Cross Module References
	void ULifeAnimInstance::StaticRegisterNativesULifeAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAnimInstance);
	UClass* Z_Construct_UClass_ULifeAnimInstance_NoRegister()
	{
		return ULifeAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeAnimInstance\n *\n *\x09The base game animation instance class used by this project.\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/LifeAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/LifeAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeAnimInstance\n\n    The base game animation instance class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n// These should be used instead of manually querying for the gameplay tags.\n" },
		{ "ModuleRelativePath", "Animation/LifeAnimInstance.h" },
		{ "ToolTip", "Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\nThese should be used instead of manually querying for the gameplay tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GameplayTagPropertyMap_MetaData)) }; // 2519972375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Animation/LifeAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAnimInstance, GroundDistance), METADATA_PARAMS(Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAnimInstance_Statics::NewProp_GroundDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAnimInstance_Statics::ClassParams = {
		&ULifeAnimInstance::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAnimInstance()
	{
		if (!Z_Registration_Info_UClass_ULifeAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAnimInstance.OuterSingleton, Z_Construct_UClass_ULifeAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAnimInstance.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAnimInstance>()
	{
		return ULifeAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAnimInstance);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Animation_LifeAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Animation_LifeAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAnimInstance, ULifeAnimInstance::StaticClass, TEXT("ULifeAnimInstance"), &Z_Registration_Info_UClass_ULifeAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAnimInstance), 329782707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Animation_LifeAnimInstance_h_3967273496(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Animation_LifeAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Animation_LifeAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
