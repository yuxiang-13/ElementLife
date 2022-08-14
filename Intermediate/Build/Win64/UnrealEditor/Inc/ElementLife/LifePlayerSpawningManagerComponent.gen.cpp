// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Player/LifePlayerSpawningManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePlayerSpawningManagerComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePlayerSpawningManagerComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePlayerSpawningManagerComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerStart_NoRegister();
// End Cross Module References
	static FName NAME_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer = FName(TEXT("K2_OnFinishRestartPlayer"));
	void ULifePlayerSpawningManagerComponent::K2_OnFinishRestartPlayer(AController* Player, FRotator const& StartRotation)
	{
		LifePlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms Parms;
		Parms.Player=Player;
		Parms.StartRotation=StartRotation;
		ProcessEvent(FindFunctionChecked(NAME_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer),&Parms);
	}
	void ULifePlayerSpawningManagerComponent::StaticRegisterNativesULifePlayerSpawningManagerComponent()
	{
	}
	struct Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnFinishRestartPlayer" },
		{ "ModuleRelativePath", "Player/LifePlayerSpawningManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifePlayerSpawningManagerComponent, nullptr, "K2_OnFinishRestartPlayer", nullptr, nullptr, sizeof(LifePlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms), Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifePlayerSpawningManagerComponent);
	UClass* Z_Construct_UClass_ULifePlayerSpawningManagerComponent_NoRegister()
	{
		return ULifePlayerSpawningManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPlayerStarts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerStarts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPlayerStarts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifePlayerSpawningManagerComponent_K2_OnFinishRestartPlayer, "K2_OnFinishRestartPlayer" }, // 3854778708
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class ULifePlayerSpawningManagerComponent\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Player/LifePlayerSpawningManagerComponent.h" },
		{ "ModuleRelativePath", "Player/LifePlayerSpawningManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class ULifePlayerSpawningManagerComponent" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALifePlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_MetaData[] = {
		{ "Comment", "/** ~ALifeGameMode */" },
		{ "ModuleRelativePath", "Player/LifePlayerSpawningManagerComponent.h" },
		{ "ToolTip", "~ALifeGameMode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifePlayerSpawningManagerComponent, CachedPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifePlayerSpawningManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::ClassParams = {
		&ULifePlayerSpawningManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifePlayerSpawningManagerComponent()
	{
		if (!Z_Registration_Info_UClass_ULifePlayerSpawningManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifePlayerSpawningManagerComponent.OuterSingleton, Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifePlayerSpawningManagerComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifePlayerSpawningManagerComponent>()
	{
		return ULifePlayerSpawningManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifePlayerSpawningManagerComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifePlayerSpawningManagerComponent, ULifePlayerSpawningManagerComponent::StaticClass, TEXT("ULifePlayerSpawningManagerComponent"), &Z_Registration_Info_UClass_ULifePlayerSpawningManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifePlayerSpawningManagerComponent), 1524656486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_1195422604(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
