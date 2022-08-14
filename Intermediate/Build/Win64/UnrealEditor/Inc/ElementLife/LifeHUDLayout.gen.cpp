// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/UI/LifeHUDLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHUDLayout() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHUDLayout_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHUDLayout();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeActivatableWidget();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
// End Cross Module References
	void ULifeHUDLayout::StaticRegisterNativesULifeHUDLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHUDLayout);
	UClass* Z_Construct_UClass_ULifeHUDLayout_NoRegister()
	{
		return ULifeHUDLayout::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHUDLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EscapeMenuClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHUDLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHUDLayout_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Life|HUD" },
		{ "Comment", "/**\n * ULifeHUDLayout\n *\n *\x09Widget used to lay out the player's HUD (typically specified by an Add Widgets action in the experience)\n */" },
		{ "DisplayName", "Life HUD Layout" },
		{ "IncludePath", "UI/LifeHUDLayout.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LifeHUDLayout.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeHUDLayout\n\n    Widget used to lay out the player's HUD (typically specified by an Add Widgets action in the experience)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData[] = {
		{ "Category", "LifeHUDLayout" },
		{ "ModuleRelativePath", "UI/LifeHUDLayout.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULifeHUDLayout_Statics::NewProp_EscapeMenuClass = { "EscapeMenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHUDLayout, EscapeMenuClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHUDLayout_Statics::NewProp_EscapeMenuClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeHUDLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHUDLayout_Statics::NewProp_EscapeMenuClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHUDLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHUDLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHUDLayout_Statics::ClassParams = {
		&ULifeHUDLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeHUDLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHUDLayout_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHUDLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHUDLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHUDLayout()
	{
		if (!Z_Registration_Info_UClass_ULifeHUDLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHUDLayout.OuterSingleton, Z_Construct_UClass_ULifeHUDLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHUDLayout.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHUDLayout>()
	{
		return ULifeHUDLayout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHUDLayout);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUDLayout_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUDLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHUDLayout, ULifeHUDLayout::StaticClass, TEXT("ULifeHUDLayout"), &Z_Registration_Info_UClass_ULifeHUDLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHUDLayout), 1964067174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUDLayout_h_644521772(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUDLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeHUDLayout_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
