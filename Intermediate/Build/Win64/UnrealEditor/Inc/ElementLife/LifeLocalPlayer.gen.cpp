// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Player/LifeLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeLocalPlayer() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeLocalPlayer_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeLocalPlayer();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULifeLocalPlayer::execOnCompletedAudioDeviceSwap)
	{
		P_GET_STRUCT_REF(FSwapAudioOutputResult,Z_Param_Out_SwapResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletedAudioDeviceSwap(Z_Param_Out_SwapResult);
		P_NATIVE_END;
	}
	void ULifeLocalPlayer::StaticRegisterNativesULifeLocalPlayer()
	{
		UClass* Class = ULifeLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompletedAudioDeviceSwap", &ULifeLocalPlayer::execOnCompletedAudioDeviceSwap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics
	{
		struct LifeLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms
		{
			FSwapAudioOutputResult SwapResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult_MetaData)) }; // 2433095557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LifeLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeLocalPlayer, nullptr, "OnCompletedAudioDeviceSwap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::LifeLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms), Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeLocalPlayer);
	UClass* Z_Construct_UClass_ULifeLocalPlayer_NoRegister()
	{
		return ULifeLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULifeLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBoundPC_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastBoundPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeLocalPlayer_OnCompletedAudioDeviceSwap, "OnCompletedAudioDeviceSwap" }, // 2389707636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeLocalPlayer\n */" },
		{ "IncludePath", "Player/LifeLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/LifeLocalPlayer.h" },
		{ "ToolTip", "ULifeLocalPlayer" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifeLocalPlayer.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeLocalPlayer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_LastBoundPC_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifeLocalPlayer.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_LastBoundPC = { "LastBoundPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeLocalPlayer, LastBoundPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_LastBoundPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_LastBoundPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeLocalPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeLocalPlayer_Statics::NewProp_LastBoundPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeLocalPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeLocalPlayer_Statics::ClassParams = {
		&ULifeLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeLocalPlayer_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULifeLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeLocalPlayer()
	{
		if (!Z_Registration_Info_UClass_ULifeLocalPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeLocalPlayer.OuterSingleton, Z_Construct_UClass_ULifeLocalPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeLocalPlayer.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeLocalPlayer>()
	{
		return ULifeLocalPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeLocalPlayer);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeLocalPlayer, ULifeLocalPlayer::StaticClass, TEXT("ULifeLocalPlayer"), &Z_Registration_Info_UClass_ULifeLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeLocalPlayer), 144577631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_2449848986(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
