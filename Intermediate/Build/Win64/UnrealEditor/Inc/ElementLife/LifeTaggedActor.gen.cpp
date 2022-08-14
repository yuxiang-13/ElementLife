// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/LifeTaggedActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeTaggedActor() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeTaggedActor_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeTaggedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	void ALifeTaggedActor::StaticRegisterNativesALifeTaggedActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeTaggedActor);
	UClass* Z_Construct_UClass_ALifeTaggedActor_NoRegister()
	{
		return ALifeTaggedActor::StaticClass();
	}
	struct Z_Construct_UClass_ALifeTaggedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticGameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeTaggedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeTaggedActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// An actor that implements the gameplay tag asset interface\n" },
		{ "IncludePath", "AbilitySystem/LifeTaggedActor.h" },
		{ "ModuleRelativePath", "AbilitySystem/LifeTaggedActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An actor that implements the gameplay tag asset interface" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "// Gameplay-related tags associated with this actor\n" },
		{ "ModuleRelativePath", "AbilitySystem/LifeTaggedActor.h" },
		{ "ToolTip", "Gameplay-related tags associated with this actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALifeTaggedActor_Statics::NewProp_StaticGameplayTags = { "StaticGameplayTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeTaggedActor, StaticGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ALifeTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeTaggedActor_Statics::NewProp_StaticGameplayTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifeTaggedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeTaggedActor_Statics::NewProp_StaticGameplayTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALifeTaggedActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ALifeTaggedActor, IGameplayTagAssetInterface), false },  // 2897640864
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeTaggedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeTaggedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeTaggedActor_Statics::ClassParams = {
		&ALifeTaggedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALifeTaggedActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifeTaggedActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeTaggedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeTaggedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeTaggedActor()
	{
		if (!Z_Registration_Info_UClass_ALifeTaggedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeTaggedActor.OuterSingleton, Z_Construct_UClass_ALifeTaggedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeTaggedActor.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeTaggedActor>()
	{
		return ALifeTaggedActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeTaggedActor);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeTaggedActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeTaggedActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeTaggedActor, ALifeTaggedActor::StaticClass, TEXT("ALifeTaggedActor"), &Z_Registration_Info_UClass_ALifeTaggedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeTaggedActor), 1200944422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeTaggedActor_h_2303898594(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeTaggedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_LifeTaggedActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
