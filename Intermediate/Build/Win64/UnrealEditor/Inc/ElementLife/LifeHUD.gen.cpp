// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/UI/LifeHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHUD() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeHUD_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ALifeHUD::StaticRegisterNativesALifeHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeHUD);
	UClass* Z_Construct_UClass_ALifeHUD_NoRegister()
	{
		return ALifeHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALifeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifeHUD\n *\n *  Note that you typically do not need to extend or modify this class, instead you would\n *  use an \"Add Widget\" action in your experience to add a HUD layout and widgets to it\n * \n *  This class exists primarily for debug rendering\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/LifeHUD.h" },
		{ "ModuleRelativePath", "UI/LifeHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALifeHUD\n\n Note that you typically do not need to extend or modify this class, instead you would\n use an \"Add Widget\" action in your experience to add a HUD layout and widgets to it\n\n This class exists primarily for debug rendering" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeHUD_Statics::ClassParams = {
		&ALifeHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALifeHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeHUD()
	{
		if (!Z_Registration_Info_UClass_ALifeHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeHUD.OuterSingleton, Z_Construct_UClass_ALifeHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeHUD.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeHUD>()
	{
		return ALifeHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeHUD);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeHUD, ALifeHUD::StaticClass, TEXT("ALifeHUD"), &Z_Registration_Info_UClass_ALifeHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeHUD), 2314428192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUD_h_1707299264(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
