// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeExperienceManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeExperienceManagerComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceManagerComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceManagerComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceDefinition_NoRegister();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULifeExperienceManagerComponent::execOnRep_CurrentExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentExperience();
		P_NATIVE_END;
	}
	void ULifeExperienceManagerComponent::StaticRegisterNativesULifeExperienceManagerComponent()
	{
		UClass* Class = ULifeExperienceManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentExperience", &ULifeExperienceManagerComponent::execOnRep_CurrentExperience },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/LifeExperienceManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeExperienceManagerComponent, nullptr, "OnRep_CurrentExperience", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeExperienceManagerComponent);
	UClass* Z_Construct_UClass_ULifeExperienceManagerComponent_NoRegister()
	{
		return ULifeExperienceManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeExperienceManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeExperienceManagerComponent_OnRep_CurrentExperience, "OnRep_CurrentExperience" }, // 505091579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/LifeExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "GameModes/LifeExperienceManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LifeExperienceManagerComponent.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", "OnRep_CurrentExperience", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_ULifeExperienceDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::NewProp_CurrentExperience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::NewProp_CurrentExperience,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(ULifeExperienceManagerComponent, ILoadingProcessInterface), false },  // 4079525349
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeExperienceManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::ClassParams = {
		&ULifeExperienceManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeExperienceManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeExperienceManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_ULifeExperienceManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeExperienceManagerComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeExperienceManagerComponent>()
	{
		return ULifeExperienceManagerComponent::StaticClass();
	}

	void ULifeExperienceManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentExperience(TEXT("CurrentExperience"));

		const bool bIsValid = true
			&& Name_CurrentExperience == ClassReps[(int32)ENetFields_Private::CurrentExperience].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULifeExperienceManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeExperienceManagerComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeExperienceManagerComponent, ULifeExperienceManagerComponent::StaticClass, TEXT("ULifeExperienceManagerComponent"), &Z_Registration_Info_UClass_ULifeExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeExperienceManagerComponent), 3274053520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_1224012571(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
