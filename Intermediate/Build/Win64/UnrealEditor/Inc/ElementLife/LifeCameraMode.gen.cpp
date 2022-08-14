// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Camera/LifeCameraMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCameraMode() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraMode_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraModeStack_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraModeStack();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction;
	static UEnum* ELifeCameraModeBlendFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeCameraModeBlendFunction"));
		}
		return Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeCameraModeBlendFunction>()
	{
		return ELifeCameraModeBlendFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enumerators[] = {
		{ "ELifeCameraModeBlendFunction::Linear", (int64)ELifeCameraModeBlendFunction::Linear },
		{ "ELifeCameraModeBlendFunction::EaseIn", (int64)ELifeCameraModeBlendFunction::EaseIn },
		{ "ELifeCameraModeBlendFunction::EaseOut", (int64)ELifeCameraModeBlendFunction::EaseOut },
		{ "ELifeCameraModeBlendFunction::EaseInOut", (int64)ELifeCameraModeBlendFunction::EaseInOut },
		{ "ELifeCameraModeBlendFunction::COUNT", (int64)ELifeCameraModeBlendFunction::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELifeCameraModeBlendFunction\n *\n *\x09""Blend function used for transitioning between camera modes.\n */" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "ELifeCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Comment", "// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseIn.Name", "ELifeCameraModeBlendFunction::EaseIn" },
		{ "EaseIn.ToolTip", "Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent." },
		{ "EaseInOut.Comment", "// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.\n" },
		{ "EaseInOut.Name", "ELifeCameraModeBlendFunction::EaseInOut" },
		{ "EaseInOut.ToolTip", "Smoothly accelerates and decelerates.  Ease amount controlled by the exponent." },
		{ "EaseOut.Comment", "// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseOut.Name", "ELifeCameraModeBlendFunction::EaseOut" },
		{ "EaseOut.ToolTip", "Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent." },
		{ "Linear.Comment", "// Does a simple linear interpolation.\n" },
		{ "Linear.Name", "ELifeCameraModeBlendFunction::Linear" },
		{ "Linear.ToolTip", "Does a simple linear interpolation." },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "ELifeCameraModeBlendFunction\n\n    Blend function used for transitioning between camera modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeCameraModeBlendFunction",
		"ELifeCameraModeBlendFunction",
		Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction()
	{
		if (!Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction.InnerSingleton;
	}
	void ULifeCameraMode::StaticRegisterNativesULifeCameraMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCameraMode);
	UClass* Z_Construct_UClass_ULifeCameraMode_NoRegister()
	{
		return ULifeCameraMode::StaticClass();
	}
	struct Z_Construct_UClass_ULifeCameraMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTypeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTypeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetInterpolation_MetaData[];
#endif
		static void NewProp_bResetInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeCameraMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeCameraMode\n *\n *\x09""Base class for all camera modes.\n */" },
		{ "IncludePath", "Camera/LifeCameraMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "ULifeCameraMode\n\n    Base class for all camera modes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_CameraTypeTag_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// A tag that can be queried by gameplay code that cares when a kind of camera mode is active\n// without having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "A tag that can be queried by gameplay code that cares when a kind of camera mode is active\nwithout having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_CameraTypeTag = { "CameraTypeTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, CameraTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_CameraTypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_CameraTypeTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "170.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// The horizontal field of view (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "The horizontal field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "Comment", "// Minimum view pitch (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "Minimum view pitch (in degrees)." },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, ViewPitchMin), METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "Comment", "// Maximum view pitch (in degrees).\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "Maximum view pitch (in degrees)." },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, ViewPitchMax), METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// How long it takes to blend in this mode.\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "How long it takes to blend in this mode." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, BlendTime), METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendTime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Function used for blending.\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "Function used for blending." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, BlendFunction), Z_Construct_UEnum_ElementLife_ELifeCameraModeBlendFunction, METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction_MetaData)) }; // 1502090569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
		{ "Comment", "// Exponent used by blend functions to control the shape of the curve.\n" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "Exponent used by blend functions to control the shape of the curve." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraMode, BlendExponent), METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation_MetaData[] = {
		{ "Comment", "/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame." },
	};
#endif
	void Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation_SetBit(void* Obj)
	{
		((ULifeCameraMode*)Obj)->bResetInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation = { "bResetInterpolation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULifeCameraMode), &Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_CameraTypeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_ViewPitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_BlendExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraMode_Statics::NewProp_bResetInterpolation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeCameraMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeCameraMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCameraMode_Statics::ClassParams = {
		&ULifeCameraMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeCameraMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeCameraMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeCameraMode()
	{
		if (!Z_Registration_Info_UClass_ULifeCameraMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCameraMode.OuterSingleton, Z_Construct_UClass_ULifeCameraMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeCameraMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeCameraMode>()
	{
		return ULifeCameraMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCameraMode);
	void ULifeCameraModeStack::StaticRegisterNativesULifeCameraModeStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCameraModeStack);
	UClass* Z_Construct_UClass_ULifeCameraModeStack_NoRegister()
	{
		return ULifeCameraModeStack::StaticClass();
	}
	struct Z_Construct_UClass_ULifeCameraModeStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeCameraModeStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraModeStack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeCameraModeStack\n *\n *\x09Stack used for blending camera modes.\n */" },
		{ "IncludePath", "Camera/LifeCameraMode.h" },
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
		{ "ToolTip", "ULifeCameraModeStack\n\n    Stack used for blending camera modes." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraModeStack, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeCameraMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LifeCameraMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeCameraModeStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCameraModeStack_Statics::NewProp_CameraModeStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeCameraModeStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeCameraModeStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCameraModeStack_Statics::ClassParams = {
		&ULifeCameraModeStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeCameraModeStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraModeStack_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeCameraModeStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCameraModeStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeCameraModeStack()
	{
		if (!Z_Registration_Info_UClass_ULifeCameraModeStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCameraModeStack.OuterSingleton, Z_Construct_UClass_ULifeCameraModeStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeCameraModeStack.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeCameraModeStack>()
	{
		return ULifeCameraModeStack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCameraModeStack);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::EnumInfo[] = {
		{ ELifeCameraModeBlendFunction_StaticEnum, TEXT("ELifeCameraModeBlendFunction"), &Z_Registration_Info_UEnum_ELifeCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1502090569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeCameraMode, ULifeCameraMode::StaticClass, TEXT("ULifeCameraMode"), &Z_Registration_Info_UClass_ULifeCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCameraMode), 3904162150U) },
		{ Z_Construct_UClass_ULifeCameraModeStack, ULifeCameraModeStack::StaticClass, TEXT("ULifeCameraModeStack"), &Z_Registration_Info_UClass_ULifeCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCameraModeStack), 3638073014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_227380927(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Camera_LifeCameraMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
