// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameMode() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeGameMode_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeGameMode();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALifeGameMode::execRequestPlayerRestartNextFrame)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_GET_UBOOL(Z_Param_bForceReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
		P_NATIVE_END;
	}
	void ALifeGameMode::StaticRegisterNativesALifeGameMode()
	{
		UClass* Class = ALifeGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPlayerRestartNextFrame", &ALifeGameMode::execRequestPlayerRestartNextFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics
	{
		struct LifeGameMode_eventRequestPlayerRestartNextFrame_Parms
		{
			AController* Controller;
			bool bForceReset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_bForceReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
	{
		((LifeGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifeGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Restart (respawn) the specified player or bot next frame\n// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n" },
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "GameModes/LifeGameMode.h" },
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n- If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeGameMode, nullptr, "RequestPlayerRestartNextFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::LifeGameMode_eventRequestPlayerRestartNextFrame_Parms), Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeGameMode);
	UClass* Z_Construct_UClass_ALifeGameMode_NoRegister()
	{
		return ALifeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALifeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifeGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifeGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 817482536
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifeGameMode\n *\n *\x09The base game mode class used by this project.\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LifeGameMode.h" },
		{ "ModuleRelativePath", "GameModes/LifeGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALifeGameMode\n\n    The base game mode class used by this project." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeGameMode_Statics::ClassParams = {
		&ALifeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALifeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeGameMode()
	{
		if (!Z_Registration_Info_UClass_ALifeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeGameMode.OuterSingleton, Z_Construct_UClass_ALifeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeGameMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeGameMode>()
	{
		return ALifeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeGameMode);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeGameMode, ALifeGameMode::StaticClass, TEXT("ALifeGameMode"), &Z_Registration_Info_UClass_ALifeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeGameMode), 3332065785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_1615096895(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
