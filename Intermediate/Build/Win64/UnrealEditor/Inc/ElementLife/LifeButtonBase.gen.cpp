// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/UI/Foundation/LifeButtonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeButtonBase() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeButtonBase_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	DEFINE_FUNCTION(ULifeButtonBase::execSetButtonText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	static FName NAME_ULifeButtonBase_UpdateButtonStyle = FName(TEXT("UpdateButtonStyle"));
	void ULifeButtonBase::UpdateButtonStyle()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeButtonBase_UpdateButtonStyle),NULL);
	}
	static FName NAME_ULifeButtonBase_UpdateButtonText = FName(TEXT("UpdateButtonText"));
	void ULifeButtonBase::UpdateButtonText(FText const& InText)
	{
		LifeButtonBase_eventUpdateButtonText_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_ULifeButtonBase_UpdateButtonText),&Parms);
	}
	void ULifeButtonBase::StaticRegisterNativesULifeButtonBase()
	{
		UClass* Class = ULifeButtonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetButtonText", &ULifeButtonBase::execSetButtonText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics
	{
		struct LifeButtonBase_eventSetButtonText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeButtonBase_eventSetButtonText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeButtonBase, nullptr, "SetButtonText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::LifeButtonBase_eventSetButtonText_Parms), Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeButtonBase_SetButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeButtonBase_SetButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeButtonBase, nullptr, "UpdateButtonStyle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeButtonBase_eventUpdateButtonText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeButtonBase, nullptr, "UpdateButtonText", nullptr, nullptr, sizeof(LifeButtonBase_eventUpdateButtonText_Parms), Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeButtonBase);
	UClass* Z_Construct_UClass_ULifeButtonBase_NoRegister()
	{
		return ULifeButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_ULifeButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ButtonText_MetaData[];
#endif
		static void NewProp_bOverride_ButtonText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ButtonText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeButtonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeButtonBase_SetButtonText, "SetButtonText" }, // 1836304524
		{ &Z_Construct_UFunction_ULifeButtonBase_UpdateButtonStyle, "UpdateButtonStyle" }, // 1952472065
		{ &Z_Construct_UFunction_ULifeButtonBase_UpdateButtonText, "UpdateButtonText" }, // 3148776639
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeButtonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Foundation/LifeButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit(void* Obj)
	{
		((ULifeButtonBase*)Obj)->bOverride_ButtonText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText = { "bOverride_ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULifeButtonBase), &Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_ButtonText_MetaData[] = {
		{ "Category", "Button" },
		{ "editcondition", "bOverride_ButtonText" },
		{ "ModuleRelativePath", "UI/Foundation/LifeButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeButtonBase, ButtonText), METADATA_PARAMS(Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_ButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_ButtonText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_bOverride_ButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeButtonBase_Statics::NewProp_ButtonText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeButtonBase_Statics::ClassParams = {
		&ULifeButtonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeButtonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeButtonBase_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeButtonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeButtonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeButtonBase()
	{
		if (!Z_Registration_Info_UClass_ULifeButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeButtonBase.OuterSingleton, Z_Construct_UClass_ULifeButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeButtonBase.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeButtonBase>()
	{
		return ULifeButtonBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeButtonBase);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeButtonBase, ULifeButtonBase::StaticClass, TEXT("ULifeButtonBase"), &Z_Registration_Info_UClass_ULifeButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeButtonBase), 2805163062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_1468847348(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
