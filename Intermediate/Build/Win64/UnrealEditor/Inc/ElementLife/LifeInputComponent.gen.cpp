// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeInputComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void ULifeInputComponent::StaticRegisterNativesULifeInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputComponent);
	UClass* Z_Construct_UClass_ULifeInputComponent_NoRegister()
	{
		return ULifeInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeInputComponent\n *\n *\x09""Component used to manage input mappings and bindings using an input config data asset.\n */" },
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/LifeInputComponent.h" },
		{ "ModuleRelativePath", "Input/LifeInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeInputComponent\n\n    Component used to manage input mappings and bindings using an input config data asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputComponent_Statics::ClassParams = {
		&ULifeInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputComponent.OuterSingleton, Z_Construct_UClass_ULifeInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputComponent>()
	{
		return ULifeInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeInputComponent, ULifeInputComponent::StaticClass, TEXT("ULifeInputComponent"), &Z_Registration_Info_UClass_ULifeInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputComponent), 2225526939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComponent_h_3029111526(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
