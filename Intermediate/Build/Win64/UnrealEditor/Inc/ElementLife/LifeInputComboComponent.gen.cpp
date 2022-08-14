// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Input/LifeInputComboComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeInputComboComponent() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FComboStep();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputComboComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeInputComboComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboStep;
class UScriptStruct* FComboStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboStep, Z_Construct_UPackage__Script_ElementLife(), TEXT("ComboStep"));
	}
	return Z_Registration_Info_UScriptStruct_ComboStep.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FComboStep>()
{
	return FComboStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Input/LifeInputComboComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboStep>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"ComboStep",
		sizeof(FComboStep),
		alignof(FComboStep),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboStep()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton, Z_Construct_UScriptStruct_FComboStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboStep.InnerSingleton;
	}
	static FName NAME_ULifeInputComboComponent_ScriptOnComboCanceled = FName(TEXT("ScriptOnComboCanceled"));
	void ULifeInputComboComponent::ScriptOnComboCanceled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeInputComboComponent_ScriptOnComboCanceled),NULL);
	}
	static FName NAME_ULifeInputComboComponent_ScriptOnComboCompleted = FName(TEXT("ScriptOnComboCompleted"));
	void ULifeInputComboComponent::ScriptOnComboCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeInputComboComponent_ScriptOnComboCompleted),NULL);
	}
	void ULifeInputComboComponent::StaticRegisterNativesULifeInputComboComponent()
	{
	}
	struct Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Combo Canceled" },
		{ "ModuleRelativePath", "Input/LifeInputComboComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeInputComboComponent, nullptr, "ScriptOnComboCanceled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Combo Completed" },
		{ "ModuleRelativePath", "Input/LifeInputComboComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeInputComboComponent, nullptr, "ScriptOnComboCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeInputComboComponent);
	UClass* Z_Construct_UClass_ULifeInputComboComponent_NoRegister()
	{
		return ULifeInputComboComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeInputComboComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboSteps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboSteps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeInputComboComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeInputComboComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCanceled, "ScriptOnComboCanceled" }, // 1407655620
		{ &Z_Construct_UFunction_ULifeInputComboComponent_ScriptOnComboCompleted, "ScriptOnComboCompleted" }, // 849756738
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputComboComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Input/LifeInputComboComponent.h" },
		{ "ModuleRelativePath", "Input/LifeInputComboComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps_Inner = { "ComboSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComboStep, METADATA_PARAMS(nullptr, 0) }; // 2566507779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps_MetaData[] = {
		{ "Category", "LifeInputComboComponent" },
		{ "ModuleRelativePath", "Input/LifeInputComboComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps = { "ComboSteps", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeInputComboComponent, ComboSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps_MetaData)) }; // 2566507779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeInputComboComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeInputComboComponent_Statics::NewProp_ComboSteps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeInputComboComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeInputComboComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeInputComboComponent_Statics::ClassParams = {
		&ULifeInputComboComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeInputComboComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputComboComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeInputComboComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeInputComboComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeInputComboComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeInputComboComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeInputComboComponent.OuterSingleton, Z_Construct_UClass_ULifeInputComboComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeInputComboComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeInputComboComponent>()
	{
		return ULifeInputComboComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeInputComboComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ScriptStructInfo[] = {
		{ FComboStep::StaticStruct, Z_Construct_UScriptStruct_FComboStep_Statics::NewStructOps, TEXT("ComboStep"), &Z_Registration_Info_UScriptStruct_ComboStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboStep), 2566507779U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeInputComboComponent, ULifeInputComboComponent::StaticClass, TEXT("ULifeInputComboComponent"), &Z_Registration_Info_UClass_ULifeInputComboComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeInputComboComponent), 1171971138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_2478019033(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Input_LifeInputComboComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
