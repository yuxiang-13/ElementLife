// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifeHeroComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeHeroComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHeroComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHeroComponent();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair();
// End Cross Module References
	DEFINE_FUNCTION(ULifeHeroComponent::execFindHeroComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeHeroComponent**)Z_Param__Result=ULifeHeroComponent::FindHeroComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	void ULifeHeroComponent::StaticRegisterNativesULifeHeroComponent()
	{
		UClass* Class = ULifeHeroComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindHeroComponent", &ULifeHeroComponent::execFindHeroComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics
	{
		struct LifeHeroComponent_eventFindHeroComponent_Parms
		{
			const AActor* Actor;
			ULifeHeroComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHeroComponent_eventFindHeroComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeHeroComponent_eventFindHeroComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeHeroComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Hero" },
		{ "Comment", "// Returns the hero component if one exists on the specified actor.\n" },
		{ "ModuleRelativePath", "Character/LifeHeroComponent.h" },
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeHeroComponent, nullptr, "FindHeroComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::LifeHeroComponent_eventFindHeroComponent_Parms), Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeHeroComponent);
	UClass* Z_Construct_UClass_ULifeHeroComponent_NoRegister()
	{
		return ULifeHeroComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeHeroComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeHeroComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifePawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeHeroComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeHeroComponent_FindHeroComponent, "FindHeroComponent" }, // 3699202666
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHeroComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeHeroComponent\n *\n *\x09""A component used to create a player controlled pawns (characters, vehicles, etc..).\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LifeHeroComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LifeHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeHeroComponent\n\n    A component used to create a player controlled pawns (characters, vehicles, etc..)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappableConfigPair, METADATA_PARAMS(nullptr, 0) }; // 2340107687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData[] = {
		{ "Category", "LifeHeroComponent" },
		{ "Comment", "/**\n\x09 * Input Configs that should be added to this player when initalizing the input.\n\x09 * \n\x09 * NOTE: You should only add to this if you do not have a game feature plugin accessible to you.\n\x09 * If you do, then use the GameFeatureAction_AddInputConfig instead. \n\x09 */" },
		{ "ModuleRelativePath", "Character/LifeHeroComponent.h" },
		{ "ToolTip", "Input Configs that should be added to this player when initalizing the input.\n\nNOTE: You should only add to this if you do not have a game feature plugin accessible to you.\nIf you do, then use the GameFeatureAction_AddInputConfig instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeHeroComponent, DefaultInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs_MetaData)) }; // 2340107687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeHeroComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeHeroComponent_Statics::NewProp_DefaultInputConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeHeroComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeHeroComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeHeroComponent_Statics::ClassParams = {
		&ULifeHeroComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeHeroComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHeroComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeHeroComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeHeroComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeHeroComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeHeroComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeHeroComponent.OuterSingleton, Z_Construct_UClass_ULifeHeroComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeHeroComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeHeroComponent>()
	{
		return ULifeHeroComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeHeroComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeHeroComponent, ULifeHeroComponent::StaticClass, TEXT("ULifeHeroComponent"), &Z_Registration_Info_UClass_ULifeHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeHeroComponent), 581315819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_3052398918(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
