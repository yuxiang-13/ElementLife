// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Hotfix/LifeRuntimeOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeRuntimeOptions() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeRuntimeOptions_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeRuntimeOptions();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	DEFINE_FUNCTION(ULifeRuntimeOptions::execGetRuntimeOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeRuntimeOptions**)Z_Param__Result=ULifeRuntimeOptions::GetRuntimeOptions();
		P_NATIVE_END;
	}
	void ULifeRuntimeOptions::StaticRegisterNativesULifeRuntimeOptions()
	{
		UClass* Class = ULifeRuntimeOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRuntimeOptions", &ULifeRuntimeOptions::execGetRuntimeOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics
	{
		struct LifeRuntimeOptions_eventGetRuntimeOptions_Parms
		{
			ULifeRuntimeOptions* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeRuntimeOptions_eventGetRuntimeOptions_Parms, ReturnValue), Z_Construct_UClass_ULifeRuntimeOptions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Hotfix/LifeRuntimeOptions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeRuntimeOptions, nullptr, "GetRuntimeOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::LifeRuntimeOptions_eventGetRuntimeOptions_Parms), Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeRuntimeOptions);
	UClass* Z_Construct_UClass_ULifeRuntimeOptions_NoRegister()
	{
		return ULifeRuntimeOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULifeRuntimeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeRuntimeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeRuntimeOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeRuntimeOptions_GetRuntimeOptions, "GetRuntimeOptions" }, // 1300546464
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeRuntimeOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeRuntimeOptions: Supports checking at runtime whether features are enabled/disabled, changing\n * configuration parameters, console cheats, startup commands.\n *\n * Add a new Property that *defaults* (either naturally or in the constructor) to the desired\n * normal state. (e.g. bDisableSomething). If you ever need to suddenly disable that thing in the\n * live game, you'll be able to.\n *\n * For testing you can run with -ro.bDisableSomething=true to override the defaults. This is only\n * available in non-shipping builds.\n *\n * Variables are registered with the console under the 'ro' namespace. E.g. ro.bDisableSomething\n */" },
		{ "IncludePath", "Hotfix/LifeRuntimeOptions.h" },
		{ "ModuleRelativePath", "Hotfix/LifeRuntimeOptions.h" },
		{ "ToolTip", "ULifeRuntimeOptions: Supports checking at runtime whether features are enabled/disabled, changing\nconfiguration parameters, console cheats, startup commands.\n\nAdd a new Property that *defaults* (either naturally or in the constructor) to the desired\nnormal state. (e.g. bDisableSomething). If you ever need to suddenly disable that thing in the\nlive game, you'll be able to.\n\nFor testing you can run with -ro.bDisableSomething=true to override the defaults. This is only\navailable in non-shipping builds.\n\nVariables are registered with the console under the 'ro' namespace. E.g. ro.bDisableSomething" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeRuntimeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeRuntimeOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeRuntimeOptions_Statics::ClassParams = {
		&ULifeRuntimeOptions::StaticClass,
		"RuntimeOptions",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeRuntimeOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeRuntimeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeRuntimeOptions()
	{
		if (!Z_Registration_Info_UClass_ULifeRuntimeOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeRuntimeOptions.OuterSingleton, Z_Construct_UClass_ULifeRuntimeOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeRuntimeOptions.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeRuntimeOptions>()
	{
		return ULifeRuntimeOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeRuntimeOptions);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeRuntimeOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeRuntimeOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeRuntimeOptions, ULifeRuntimeOptions::StaticClass, TEXT("ULifeRuntimeOptions"), &Z_Registration_Info_UClass_ULifeRuntimeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeRuntimeOptions), 1298816105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeRuntimeOptions_h_2735735961(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeRuntimeOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Hotfix_LifeRuntimeOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
