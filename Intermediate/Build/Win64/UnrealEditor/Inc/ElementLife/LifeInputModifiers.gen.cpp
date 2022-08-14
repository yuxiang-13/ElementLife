// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeInputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeInputModifiers() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeSettingBasedScalar_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeSettingBasedScalar();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_EDeadzoneStick();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierDeadZone_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierDeadZone();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EDeadZoneType();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeTargetingType();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierGamepadSensitivity();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAimSensitivityData_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierAimInversion_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputModifierAimInversion();
// End Cross Module References
	void ULifeSettingBasedScalar::StaticRegisterNativesULifeSettingBasedScalar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeSettingBasedScalar);
	UClass* Z_Construct_UClass_ULifeSettingBasedScalar_NoRegister()
	{
		return ULifeSettingBasedScalar::StaticClass();
	}
	struct Z_Construct_UClass_ULifeSettingBasedScalar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_XAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_YAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisScalarSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ZAxisScalarSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValueClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeSettingBasedScalar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n*  Scales input basedon a double property in the SharedUserSettings\n*/" },
		{ "DisplayName", "Setting Based Scalar" },
		{ "IncludePath", "Input/LifeInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Scales input basedon a double property in the SharedUserSettings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the X Axis of this value */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the X Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName = { "XAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeSettingBasedScalar, XAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the Y Axis of this value */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the Y Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName = { "YAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeSettingBasedScalar, YAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the property that will be used to clamp the Z Axis of this value */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Name of the property that will be used to clamp the Z Axis of this value" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName = { "ZAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeSettingBasedScalar, ZAxisScalarSettingName), METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set the maximium value of this setting on each axis. */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Set the maximium value of this setting on each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MaxValueClamp = { "MaxValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeSettingBasedScalar, MaxValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MaxValueClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set the minimum value of this setting on each axis. */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Set the minimum value of this setting on each axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MinValueClamp = { "MinValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeSettingBasedScalar, MinValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MinValueClamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeSettingBasedScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MaxValueClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeSettingBasedScalar_Statics::NewProp_MinValueClamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeSettingBasedScalar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeSettingBasedScalar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeSettingBasedScalar_Statics::ClassParams = {
		&ULifeSettingBasedScalar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeSettingBasedScalar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::PropPointers),
		0,
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeSettingBasedScalar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeSettingBasedScalar()
	{
		if (!Z_Registration_Info_UClass_ULifeSettingBasedScalar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeSettingBasedScalar.OuterSingleton, Z_Construct_UClass_ULifeSettingBasedScalar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeSettingBasedScalar.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeSettingBasedScalar>()
	{
		return ULifeSettingBasedScalar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeSettingBasedScalar);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeadzoneStick;
	static UEnum* EDeadzoneStick_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_EDeadzoneStick, Z_Construct_UPackage__Script_ElementLife(), TEXT("EDeadzoneStick"));
		}
		return Z_Registration_Info_UEnum_EDeadzoneStick.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<EDeadzoneStick>()
	{
		return EDeadzoneStick_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enumerators[] = {
		{ "EDeadzoneStick::MoveStick", (int64)EDeadzoneStick::MoveStick },
		{ "EDeadzoneStick::LookStick", (int64)EDeadzoneStick::LookStick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Represents which stick that this deadzone is for, either the move or the look stick */" },
		{ "LookStick.Comment", "/** Deadzone for the looking stick */" },
		{ "LookStick.Name", "EDeadzoneStick::LookStick" },
		{ "LookStick.ToolTip", "Deadzone for the looking stick" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "MoveStick.Comment", "/** Deadzone for the movement stick */" },
		{ "MoveStick.Name", "EDeadzoneStick::MoveStick" },
		{ "MoveStick.ToolTip", "Deadzone for the movement stick" },
		{ "ToolTip", "Represents which stick that this deadzone is for, either the move or the look stick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"EDeadzoneStick",
		"EDeadzoneStick",
		Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_EDeadzoneStick()
	{
		if (!Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton, Z_Construct_UEnum_ElementLife_EDeadzoneStick_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeadzoneStick.InnerSingleton;
	}
	void ULifeInputModifierDeadZone::StaticRegisterNativesULifeInputModifierDeadZone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputModifierDeadZone);
	UClass* Z_Construct_UClass_ULifeInputModifierDeadZone_NoRegister()
	{
		return ULifeInputModifierDeadZone::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputModifierDeadZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeadzoneStick_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneStick_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeadzoneStick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a deadzone input modifier that will have it's thresholds driven by what is in the Life Shared game settings. \n */" },
		{ "DisplayName", "Life Settings Driven Dead Zone" },
		{ "IncludePath", "Input/LifeInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "This is a deadzone input modifier that will have it's thresholds driven by what is in the Life Shared game settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputModifierDeadZone, Type), Z_Construct_UEnum_EnhancedInput_EDeadZoneType, METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type_MetaData)) }; // 124335324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Threshold above which input is clamped to 1\n" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Threshold above which input is clamped to 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_UpperThreshold = { "UpperThreshold", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputModifierDeadZone, UpperThreshold), METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_UpperThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Which stick this deadzone is for. This controls which setting will be used when calculating the deadzone" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick = { "DeadzoneStick", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputModifierDeadZone, DeadzoneStick), Z_Construct_UEnum_ElementLife_EDeadzoneStick, METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick_MetaData)) }; // 3129037401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_UpperThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::NewProp_DeadzoneStick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputModifierDeadZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::ClassParams = {
		&ULifeInputModifierDeadZone::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputModifierDeadZone()
	{
		if (!Z_Registration_Info_UClass_ULifeInputModifierDeadZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputModifierDeadZone.OuterSingleton, Z_Construct_UClass_ULifeInputModifierDeadZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputModifierDeadZone.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputModifierDeadZone>()
	{
		return ULifeInputModifierDeadZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputModifierDeadZone);
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeTargetingType;
	static UEnum* ELifeTargetingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeTargetingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeTargetingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeTargetingType, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeTargetingType"));
		}
		return Z_Registration_Info_UEnum_ELifeTargetingType.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeTargetingType>()
	{
		return ELifeTargetingType_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enumerators[] = {
		{ "ELifeTargetingType::Normal", (int64)ELifeTargetingType::Normal },
		{ "ELifeTargetingType::ADS", (int64)ELifeTargetingType::ADS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enum_MetaDataParams[] = {
		{ "ADS.Comment", "/** The sensitivity that should be applied while Aiming Down Sights */" },
		{ "ADS.Name", "ELifeTargetingType::ADS" },
		{ "ADS.ToolTip", "The sensitivity that should be applied while Aiming Down Sights" },
		{ "Comment", "/** The type of targeting sensitity that should be  */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "Normal.Comment", "/** Sensitivity to be applied why normally looking around */" },
		{ "Normal.Name", "ELifeTargetingType::Normal" },
		{ "Normal.ToolTip", "Sensitivity to be applied why normally looking around" },
		{ "ToolTip", "The type of targeting sensitity that should be" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeTargetingType",
		"ELifeTargetingType",
		Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeTargetingType()
	{
		if (!Z_Registration_Info_UEnum_ELifeTargetingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeTargetingType.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeTargetingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeTargetingType.InnerSingleton;
	}
	void ULifeInputModifierGamepadSensitivity::StaticRegisterNativesULifeInputModifierGamepadSensitivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputModifierGamepadSensitivity);
	UClass* Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_NoRegister()
	{
		return ULifeInputModifierGamepadSensitivity::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensitivityLevelTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SensitivityLevelTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Applies a scalar modifier based on the current gamepad settings in Life Shared game settings.  */" },
		{ "DisplayName", "Life Gamepad Sensitivity" },
		{ "IncludePath", "Input/LifeInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Applies a scalar modifier based on the current gamepad settings in Life Shared game settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The type of targeting to use for this Sensitivity */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "The type of targeting to use for this Sensitivity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType = { "TargetingType", nullptr, (EPropertyFlags)0x0010000000004805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputModifierGamepadSensitivity, TargetingType), Z_Construct_UEnum_ElementLife_ELifeTargetingType, METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_MetaData)) }; // 3821000528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "LifeInputModifierGamepadSensitivity" },
		{ "Comment", "/** Asset that gives us access to the float scalar value being used for sensitivty */" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Asset that gives us access to the float scalar value being used for sensitivty" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable = { "SensitivityLevelTable", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputModifierGamepadSensitivity, SensitivityLevelTable), Z_Construct_UClass_ULifeAimSensitivityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_TargetingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::NewProp_SensitivityLevelTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputModifierGamepadSensitivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::ClassParams = {
		&ULifeInputModifierGamepadSensitivity::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputModifierGamepadSensitivity()
	{
		if (!Z_Registration_Info_UClass_ULifeInputModifierGamepadSensitivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputModifierGamepadSensitivity.OuterSingleton, Z_Construct_UClass_ULifeInputModifierGamepadSensitivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputModifierGamepadSensitivity.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputModifierGamepadSensitivity>()
	{
		return ULifeInputModifierGamepadSensitivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputModifierGamepadSensitivity);
	void ULifeInputModifierAimInversion::StaticRegisterNativesULifeInputModifierAimInversion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputModifierAimInversion);
	UClass* Z_Construct_UClass_ULifeInputModifierAimInversion_NoRegister()
	{
		return ULifeInputModifierAimInversion::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputModifierAimInversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Applies an inversion of axis values based on a setting in the Life Shared game settings */" },
		{ "DisplayName", "Life Aim Inversion Setting" },
		{ "IncludePath", "Input/LifeInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Input/LifeInputModifiers.h" },
		{ "ToolTip", "Applies an inversion of axis values based on a setting in the Life Shared game settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputModifierAimInversion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::ClassParams = {
		&ULifeInputModifierAimInversion::StaticClass,
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
		0x400830A2u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputModifierAimInversion()
	{
		if (!Z_Registration_Info_UClass_ULifeInputModifierAimInversion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputModifierAimInversion.OuterSingleton, Z_Construct_UClass_ULifeInputModifierAimInversion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputModifierAimInversion.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputModifierAimInversion>()
	{
		return ULifeInputModifierAimInversion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputModifierAimInversion);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::EnumInfo[] = {
		{ EDeadzoneStick_StaticEnum, TEXT("EDeadzoneStick"), &Z_Registration_Info_UEnum_EDeadzoneStick, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3129037401U) },
		{ ELifeTargetingType_StaticEnum, TEXT("ELifeTargetingType"), &Z_Registration_Info_UEnum_ELifeTargetingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3821000528U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeSettingBasedScalar, ULifeSettingBasedScalar::StaticClass, TEXT("ULifeSettingBasedScalar"), &Z_Registration_Info_UClass_ULifeSettingBasedScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeSettingBasedScalar), 2017606554U) },
		{ Z_Construct_UClass_ULifeInputModifierDeadZone, ULifeInputModifierDeadZone::StaticClass, TEXT("ULifeInputModifierDeadZone"), &Z_Registration_Info_UClass_ULifeInputModifierDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputModifierDeadZone), 1522270702U) },
		{ Z_Construct_UClass_ULifeInputModifierGamepadSensitivity, ULifeInputModifierGamepadSensitivity::StaticClass, TEXT("ULifeInputModifierGamepadSensitivity"), &Z_Registration_Info_UClass_ULifeInputModifierGamepadSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputModifierGamepadSensitivity), 62095604U) },
		{ Z_Construct_UClass_ULifeInputModifierAimInversion, ULifeInputModifierAimInversion::StaticClass, TEXT("ULifeInputModifierAimInversion"), &Z_Registration_Info_UClass_ULifeInputModifierAimInversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputModifierAimInversion), 1436759421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_2856926682(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputModifiers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
