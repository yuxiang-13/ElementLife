// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Camera/LifePlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePlayerCameraManager() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerCameraManager_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeUICameraManagerComponent_NoRegister();
// End Cross Module References
	void ALifePlayerCameraManager::StaticRegisterNativesALifePlayerCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifePlayerCameraManager);
	UClass* Z_Construct_UClass_ALifePlayerCameraManager_NoRegister()
	{
		return ALifePlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ALifePlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UICamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UICamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifePlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifePlayerCameraManager\n *\n *\x09The base player camera manager class used by this project.\n */" },
		{ "IncludePath", "Camera/LifePlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/LifePlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ALifePlayerCameraManager\n\n    The base player camera manager class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerCameraManager_Statics::NewProp_UICamera_MetaData[] = {
		{ "Comment", "/** The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Camera/LifePlayerCameraManager.h" },
		{ "ToolTip", "The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifePlayerCameraManager_Statics::NewProp_UICamera = { "UICamera", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerCameraManager, UICamera), Z_Construct_UClass_ULifeUICameraManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerCameraManager_Statics::NewProp_UICamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerCameraManager_Statics::NewProp_UICamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifePlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerCameraManager_Statics::NewProp_UICamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifePlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifePlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifePlayerCameraManager_Statics::ClassParams = {
		&ALifePlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALifePlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerCameraManager_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALifePlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifePlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_ALifePlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifePlayerCameraManager.OuterSingleton, Z_Construct_UClass_ALifePlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifePlayerCameraManager.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifePlayerCameraManager>()
	{
		return ALifePlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifePlayerCameraManager);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifePlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifePlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifePlayerCameraManager, ALifePlayerCameraManager::StaticClass, TEXT("ALifePlayerCameraManager"), &Z_Registration_Info_UClass_ALifePlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifePlayerCameraManager), 453082477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifePlayerCameraManager_h_1660048070(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifePlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifePlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
