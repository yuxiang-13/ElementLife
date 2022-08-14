// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Camera/LifeCameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCameraAssistInterface() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraAssistInterface_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraAssistInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeCameraAssistInterface::StaticRegisterNativesULifeCameraAssistInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCameraAssistInterface);
	UClass* Z_Construct_UClass_ULifeCameraAssistInterface_NoRegister()
	{
		return ULifeCameraAssistInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULifeCameraAssistInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeCameraAssistInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraAssistInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/LifeCameraAssistInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeCameraAssistInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILifeCameraAssistInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCameraAssistInterface_Statics::ClassParams = {
		&ULifeCameraAssistInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeCameraAssistInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraAssistInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeCameraAssistInterface()
	{
		if (!Z_Registration_Info_UClass_ULifeCameraAssistInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCameraAssistInterface.OuterSingleton, Z_Construct_UClass_ULifeCameraAssistInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeCameraAssistInterface.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeCameraAssistInterface>()
	{
		return ULifeCameraAssistInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCameraAssistInterface);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeCameraAssistInterface, ULifeCameraAssistInterface::StaticClass, TEXT("ULifeCameraAssistInterface"), &Z_Registration_Info_UClass_ULifeCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCameraAssistInterface), 4032235662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_3526885307(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
