// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Attributes/LifeAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAttributeSet() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAttributeSet_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeAttributeSet::StaticRegisterNativesULifeAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAttributeSet);
	UClass* Z_Construct_UClass_ULifeAttributeSet_NoRegister()
	{
		return ULifeAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeAttributeSet\n *\n *\x09""Base attribute set class for the project.\n */" },
		{ "IncludePath", "AbilitySystem/Attributes/LifeAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/LifeAttributeSet.h" },
		{ "ToolTip", "ULifeAttributeSet\n\n    Base attribute set class for the project." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAttributeSet_Statics::ClassParams = {
		&ULifeAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAttributeSet()
	{
		if (!Z_Registration_Info_UClass_ULifeAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAttributeSet.OuterSingleton, Z_Construct_UClass_ULifeAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAttributeSet.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAttributeSet>()
	{
		return ULifeAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAttributeSet);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAttributeSet, ULifeAttributeSet::StaticClass, TEXT("ULifeAttributeSet"), &Z_Registration_Info_UClass_ULifeAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAttributeSet), 496421402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeAttributeSet_h_503666879(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
