// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifeCharacterWithAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCharacterWithAbilities() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacterWithAbilities_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacterWithAbilities();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacter();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
// End Cross Module References
	void ALifeCharacterWithAbilities::StaticRegisterNativesALifeCharacterWithAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeCharacterWithAbilities);
	UClass* Z_Construct_UClass_ALifeCharacterWithAbilities_NoRegister()
	{
		return ALifeCharacterWithAbilities::StaticClass();
	}
	struct Z_Construct_UClass_ALifeCharacterWithAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALifeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ALifeCharacter typically gets the ability system component from the possessing player state\n// This represents a character with a self-contained ability system component.\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LifeCharacterWithAbilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LifeCharacterWithAbilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALifeCharacter typically gets the ability system component from the possessing player state\nThis represents a character with a self-contained ability system component." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Life|PlayerState" },
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeCharacterWithAbilities.h" },
		{ "ToolTip", "The ability system component sub-object used by player characters." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeCharacterWithAbilities, AbilitySystemComponent), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::NewProp_AbilitySystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeCharacterWithAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::ClassParams = {
		&ALifeCharacterWithAbilities::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeCharacterWithAbilities()
	{
		if (!Z_Registration_Info_UClass_ALifeCharacterWithAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeCharacterWithAbilities.OuterSingleton, Z_Construct_UClass_ALifeCharacterWithAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeCharacterWithAbilities.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeCharacterWithAbilities>()
	{
		return ALifeCharacterWithAbilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeCharacterWithAbilities);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterWithAbilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterWithAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeCharacterWithAbilities, ALifeCharacterWithAbilities::StaticClass, TEXT("ALifeCharacterWithAbilities"), &Z_Registration_Info_UClass_ALifeCharacterWithAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeCharacterWithAbilities), 1525089136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterWithAbilities_h_1658794077(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterWithAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterWithAbilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
