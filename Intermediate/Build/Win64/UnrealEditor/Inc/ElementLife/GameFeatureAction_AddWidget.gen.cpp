// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameFeatures/GameFeatureAction_AddWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddWidget() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeHUDLayoutRequest();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeHUDElementEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest;
class UScriptStruct* FLifeHUDLayoutRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeHUDLayoutRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeHUDLayoutRequest>()
{
	return FLifeHUDLayoutRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeHUDLayoutRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
		{ "Comment", "// The layout widget to spawn\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The layout widget to spawn" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayoutClass = { "LayoutClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeHUDLayoutRequest, LayoutClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayoutClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayerID_MetaData[] = {
		{ "Categories", "UI.Layer" },
		{ "Category", "UI" },
		{ "Comment", "// The layer to insert the widget in\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The layer to insert the widget in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayerID = { "LayerID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeHUDLayoutRequest, LayerID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayerID_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayoutClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewProp_LayerID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeHUDLayoutRequest",
		sizeof(FLifeHUDLayoutRequest),
		alignof(FLifeHUDLayoutRequest),
		Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeHUDLayoutRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.InnerSingleton, Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeHUDElementEntry;
class UScriptStruct* FLifeHUDElementEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeHUDElementEntry, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeHUDElementEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeHUDElementEntry>()
{
	return FLifeHUDElementEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeHUDElementEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
		{ "Comment", "// The widget to spawn\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The widget to spawn" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeHUDElementEntry, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_SlotID_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// The slot ID where we should place this widget\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "The slot ID where we should place this widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeHUDElementEntry, SlotID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_SlotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_SlotID_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewProp_SlotID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeHUDElementEntry",
		sizeof(FLifeHUDElementEntry),
		alignof(FLifeHUDElementEntry),
		Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeHUDElementEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.InnerSingleton, Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeHUDElementEntry.InnerSingleton;
	}
	void UGameFeatureAction_AddWidgets::StaticRegisterNativesUGameFeatureAction_AddWidgets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddWidgets);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister()
	{
		return UGameFeatureAction_AddWidgets::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layout_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
		{ "DisplayName", "Add Widgets" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner = { "Layout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeHUDLayoutRequest, METADATA_PARAMS(nullptr, 0) }; // 10363421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Layout to add to the HUD\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "TitleProperty", "{LayerID} -> {LayoutClass}" },
		{ "ToolTip", "Layout to add to the HUD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Layout), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_MetaData)) }; // 10363421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLifeHUDElementEntry, METADATA_PARAMS(nullptr, 0) }; // 1744087911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// Widgets to add to the HUD\n" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidget.h" },
		{ "TitleProperty", "{SlotID} -> {WidgetClass}" },
		{ "ToolTip", "Widgets to add to the HUD" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_MetaData)) }; // 1744087911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddWidgets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams = {
		&UGameFeatureAction_AddWidgets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameFeatureAction_AddWidgets>()
	{
		return UGameFeatureAction_AddWidgets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddWidgets);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo[] = {
		{ FLifeHUDLayoutRequest::StaticStruct, Z_Construct_UScriptStruct_FLifeHUDLayoutRequest_Statics::NewStructOps, TEXT("LifeHUDLayoutRequest"), &Z_Registration_Info_UScriptStruct_LifeHUDLayoutRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeHUDLayoutRequest), 10363421U) },
		{ FLifeHUDElementEntry::StaticStruct, Z_Construct_UScriptStruct_FLifeHUDElementEntry_Statics::NewStructOps, TEXT("LifeHUDElementEntry"), &Z_Registration_Info_UScriptStruct_LifeHUDElementEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeHUDElementEntry), 1744087911U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddWidgets, UGameFeatureAction_AddWidgets::StaticClass, TEXT("UGameFeatureAction_AddWidgets"), &Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddWidgets), 1580441636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_4162292895(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameFeatures_GameFeatureAction_AddWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
