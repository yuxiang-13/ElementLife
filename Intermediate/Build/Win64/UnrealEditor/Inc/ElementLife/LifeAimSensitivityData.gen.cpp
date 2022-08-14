// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeAimSensitivityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeAimSensitivityData() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAimSensitivityData_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAimSensitivityData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity();
// End Cross Module References
	void ULifeAimSensitivityData::StaticRegisterNativesULifeAimSensitivityData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeAimSensitivityData);
	UClass* Z_Construct_UClass_ULifeAimSensitivityData_NoRegister()
	{
		return ULifeAimSensitivityData::StaticClass();
	}
	struct Z_Construct_UClass_ULifeAimSensitivityData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensitivityMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SensitivityMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SensitivityMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SensitivityMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeAimSensitivityData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAimSensitivityData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines a set of gamepad sensitivity to a float value. */" },
		{ "DisplayName", "Life Aim Sensitivity Data" },
		{ "IncludePath", "Input/LifeAimSensitivityData.h" },
		{ "ModuleRelativePath", "Input/LifeAimSensitivityData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a map of Gamepad Sensitivty to a float value." },
		{ "ToolTip", "Defines a set of gamepad sensitivity to a float value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp = { "SensitivityMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp = { "SensitivityMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ElementLife_ELifeGamepadSensitivity, METADATA_PARAMS(nullptr, 0) }; // 1914063062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData[] = {
		{ "Category", "LifeAimSensitivityData" },
		{ "Comment", "/** Map of SensitivityMap settings to their corresponding float */" },
		{ "ModuleRelativePath", "Input/LifeAimSensitivityData.h" },
		{ "ToolTip", "Map of SensitivityMap settings to their corresponding float" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap = { "SensitivityMap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeAimSensitivityData, SensitivityMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_MetaData)) }; // 1914063062
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeAimSensitivityData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeAimSensitivityData_Statics::NewProp_SensitivityMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeAimSensitivityData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeAimSensitivityData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeAimSensitivityData_Statics::ClassParams = {
		&ULifeAimSensitivityData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeAimSensitivityData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAimSensitivityData_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeAimSensitivityData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeAimSensitivityData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeAimSensitivityData()
	{
		if (!Z_Registration_Info_UClass_ULifeAimSensitivityData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeAimSensitivityData.OuterSingleton, Z_Construct_UClass_ULifeAimSensitivityData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeAimSensitivityData.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeAimSensitivityData>()
	{
		return ULifeAimSensitivityData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeAimSensitivityData);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeAimSensitivityData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeAimSensitivityData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeAimSensitivityData, ULifeAimSensitivityData::StaticClass, TEXT("ULifeAimSensitivityData"), &Z_Registration_Info_UClass_ULifeAimSensitivityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeAimSensitivityData), 34326161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeAimSensitivityData_h_630453807(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeAimSensitivityData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeAimSensitivityData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
