// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/UI/LifeActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeActivatableWidget() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeActivatableWidget_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeActivatableWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeWidgetInputMode;
	static UEnum* ELifeWidgetInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeWidgetInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeWidgetInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeWidgetInputMode"));
		}
		return Z_Registration_Info_UEnum_ELifeWidgetInputMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeWidgetInputMode>()
	{
		return ELifeWidgetInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enumerators[] = {
		{ "ELifeWidgetInputMode::Default", (int64)ELifeWidgetInputMode::Default },
		{ "ELifeWidgetInputMode::GameAndMenu", (int64)ELifeWidgetInputMode::GameAndMenu },
		{ "ELifeWidgetInputMode::Game", (int64)ELifeWidgetInputMode::Game },
		{ "ELifeWidgetInputMode::Menu", (int64)ELifeWidgetInputMode::Menu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ELifeWidgetInputMode::Default" },
		{ "Game.Name", "ELifeWidgetInputMode::Game" },
		{ "GameAndMenu.Name", "ELifeWidgetInputMode::GameAndMenu" },
		{ "Menu.Name", "ELifeWidgetInputMode::Menu" },
		{ "ModuleRelativePath", "UI/LifeActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeWidgetInputMode",
		"ELifeWidgetInputMode",
		Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode()
	{
		if (!Z_Registration_Info_UEnum_ELifeWidgetInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeWidgetInputMode.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeWidgetInputMode.InnerSingleton;
	}
	void ULifeActivatableWidget::StaticRegisterNativesULifeActivatableWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeActivatableWidget);
	UClass* Z_Construct_UClass_ULifeActivatableWidget_NoRegister()
	{
		return ULifeActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULifeActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeActivatableWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// An activatable widget that automatically drives the desired input config when activated\n" },
		{ "IncludePath", "UI/LifeActivatableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LifeActivatableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An activatable widget that automatically drives the desired input config when activated" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller? */" },
		{ "ModuleRelativePath", "UI/LifeActivatableWidget.h" },
		{ "ToolTip", "The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeActivatableWidget, InputConfig), Z_Construct_UEnum_ElementLife_ELifeWidgetInputMode, METADATA_PARAMS(Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig_MetaData)) }; // 2400633361
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The desired mouse behavior when the game gets input. */" },
		{ "ModuleRelativePath", "UI/LifeActivatableWidget.h" },
		{ "ToolTip", "The desired mouse behavior when the game gets input." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeActivatableWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeActivatableWidget_Statics::ClassParams = {
		&ULifeActivatableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeActivatableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeActivatableWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeActivatableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeActivatableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_ULifeActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeActivatableWidget.OuterSingleton, Z_Construct_UClass_ULifeActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeActivatableWidget.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeActivatableWidget>()
	{
		return ULifeActivatableWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeActivatableWidget);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::EnumInfo[] = {
		{ ELifeWidgetInputMode_StaticEnum, TEXT("ELifeWidgetInputMode"), &Z_Registration_Info_UEnum_ELifeWidgetInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2400633361U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeActivatableWidget, ULifeActivatableWidget::StaticClass, TEXT("ULifeActivatableWidget"), &Z_Registration_Info_UClass_ULifeActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeActivatableWidget), 2577878796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_3914194248(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
