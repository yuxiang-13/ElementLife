// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Player/LifeDebugCameraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeDebugCameraController() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeDebugCameraController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeDebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ALifeDebugCameraController::StaticRegisterNativesALifeDebugCameraController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeDebugCameraController);
	UClass* Z_Construct_UClass_ALifeDebugCameraController_NoRegister()
	{
		return ALifeDebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ALifeDebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeDebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADebugCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeDebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifeDebugCameraController\n *\n *\x09Used for controlling the debug camera when it is enabled via the cheat manager.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LifeDebugCameraController.h" },
		{ "ModuleRelativePath", "Player/LifeDebugCameraController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALifeDebugCameraController\n\n    Used for controlling the debug camera when it is enabled via the cheat manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeDebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeDebugCameraController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeDebugCameraController_Statics::ClassParams = {
		&ALifeDebugCameraController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeDebugCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeDebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeDebugCameraController()
	{
		if (!Z_Registration_Info_UClass_ALifeDebugCameraController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeDebugCameraController.OuterSingleton, Z_Construct_UClass_ALifeDebugCameraController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeDebugCameraController.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeDebugCameraController>()
	{
		return ALifeDebugCameraController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeDebugCameraController);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeDebugCameraController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeDebugCameraController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeDebugCameraController, ALifeDebugCameraController::StaticClass, TEXT("ALifeDebugCameraController"), &Z_Registration_Info_UClass_ALifeDebugCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeDebugCameraController), 1622956066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeDebugCameraController_h_3261447490(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeDebugCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeDebugCameraController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
