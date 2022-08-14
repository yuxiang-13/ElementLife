// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePawn() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePawn_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePawn();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ALifePawn::StaticRegisterNativesALifePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifePawn);
	UClass* Z_Construct_UClass_ALifePawn_NoRegister()
	{
		return ALifePawn::StaticClass();
	}
	struct Z_Construct_UClass_ALifePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifePawn\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LifePawn.h" },
		{ "ModuleRelativePath", "Character/LifePawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALifePawn" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifePawn_Statics::ClassParams = {
		&ALifePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifePawn()
	{
		if (!Z_Registration_Info_UClass_ALifePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifePawn.OuterSingleton, Z_Construct_UClass_ALifePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifePawn.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifePawn>()
	{
		return ALifePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifePawn);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifePawn, ALifePawn::StaticClass, TEXT("ALifePawn"), &Z_Registration_Info_UClass_ALifePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifePawn), 2601914502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawn_h_3020086112(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
