// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Player/LifePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePlayerController() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerController();
	COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeHUD_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraAssistInterface_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeReplayPlayerController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeReplayPlayerController();
// End Cross Module References
	DEFINE_FUNCTION(ALifePlayerController::execOnPlayerStateChangedTeam)
	{
		P_GET_OBJECT(UObject,Z_Param_TeamAgent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execGetIsAutoRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAutoRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execSetIsAutoRunning)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAutoRunning(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execServerCheatAll)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheatAll_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheatAll_Validate"));
			return;
		}
		P_THIS->ServerCheatAll_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execServerCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheat_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheat_Validate"));
			return;
		}
		P_THIS->ServerCheat_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execGetLifeHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifeHUD**)Z_Param__Result=P_THIS->GetLifeHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execGetLifeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerController::execGetLifePlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifePlayerState**)Z_Param__Result=P_THIS->GetLifePlayerState();
		P_NATIVE_END;
	}
	static FName NAME_ALifePlayerController_K2_OnEndAutoRun = FName(TEXT("K2_OnEndAutoRun"));
	void ALifePlayerController::K2_OnEndAutoRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALifePlayerController_K2_OnEndAutoRun),NULL);
	}
	static FName NAME_ALifePlayerController_K2_OnStartAutoRun = FName(TEXT("K2_OnStartAutoRun"));
	void ALifePlayerController::K2_OnStartAutoRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALifePlayerController_K2_OnStartAutoRun),NULL);
	}
	static FName NAME_ALifePlayerController_ServerCheat = FName(TEXT("ServerCheat"));
	void ALifePlayerController::ServerCheat(const FString& Msg)
	{
		LifePlayerController_eventServerCheat_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_ALifePlayerController_ServerCheat),&Parms);
	}
	static FName NAME_ALifePlayerController_ServerCheatAll = FName(TEXT("ServerCheatAll"));
	void ALifePlayerController::ServerCheatAll(const FString& Msg)
	{
		LifePlayerController_eventServerCheatAll_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_ALifePlayerController_ServerCheatAll),&Parms);
	}
	void ALifePlayerController::StaticRegisterNativesALifePlayerController()
	{
		UClass* Class = ALifePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsAutoRunning", &ALifePlayerController::execGetIsAutoRunning },
			{ "GetLifeAbilitySystemComponent", &ALifePlayerController::execGetLifeAbilitySystemComponent },
			{ "GetLifeHUD", &ALifePlayerController::execGetLifeHUD },
			{ "GetLifePlayerState", &ALifePlayerController::execGetLifePlayerState },
			{ "OnPlayerStateChangedTeam", &ALifePlayerController::execOnPlayerStateChangedTeam },
			{ "ServerCheat", &ALifePlayerController::execServerCheat },
			{ "ServerCheatAll", &ALifePlayerController::execServerCheatAll },
			{ "SetIsAutoRunning", &ALifePlayerController::execSetIsAutoRunning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics
	{
		struct LifePlayerController_eventGetIsAutoRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifePlayerController_eventGetIsAutoRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifePlayerController_eventGetIsAutoRunning_Parms), &Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Character" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "GetIsAutoRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::LifePlayerController_eventGetIsAutoRunning_Parms), Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics
	{
		struct LifePlayerController_eventGetLifeAbilitySystemComponent_Parms
		{
			ULifeAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventGetLifeAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerController" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "GetLifeAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::LifePlayerController_eventGetLifeAbilitySystemComponent_Parms), Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics
	{
		struct LifePlayerController_eventGetLifeHUD_Parms
		{
			ALifeHUD* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventGetLifeHUD_Parms, ReturnValue), Z_Construct_UClass_ALifeHUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerController" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "GetLifeHUD", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::LifePlayerController_eventGetLifeHUD_Parms), Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_GetLifeHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_GetLifeHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics
	{
		struct LifePlayerController_eventGetLifePlayerState_Parms
		{
			ALifePlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventGetLifePlayerState_Parms, ReturnValue), Z_Construct_UClass_ALifePlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerController" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "GetLifePlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::LifePlayerController_eventGetLifePlayerState_Parms), Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnEndAutoRun" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "K2_OnEndAutoRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnStartAutoRun" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "K2_OnStartAutoRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics
	{
		struct LifePlayerController_eventOnPlayerStateChangedTeam_Parms
		{
			UObject* TeamAgent;
			int32 OldTeam;
			int32 NewTeam;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventOnPlayerStateChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventOnPlayerStateChangedTeam_Parms, OldTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventOnPlayerStateChangedTeam_Parms, NewTeam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_TeamAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_OldTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::NewProp_NewTeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "OnPlayerStateChangedTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::LifePlayerController_eventOnPlayerStateChangedTeam_Parms), Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventServerCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Run a cheat command on the server.\n" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
		{ "ToolTip", "Run a cheat command on the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "ServerCheat", nullptr, nullptr, sizeof(LifePlayerController_eventServerCheat_Parms), Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_ServerCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_ServerCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerController_eventServerCheatAll_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Run a cheat command on the server for all players.\n" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
		{ "ToolTip", "Run a cheat command on the server for all players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "ServerCheatAll", nullptr, nullptr, sizeof(LifePlayerController_eventServerCheatAll_Parms), Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_ServerCheatAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_ServerCheatAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics
	{
		struct LifePlayerController_eventSetIsAutoRunning_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LifePlayerController_eventSetIsAutoRunning_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifePlayerController_eventSetIsAutoRunning_Parms), &Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Character" },
		{ "Comment", "//~End of ACommonPlayerController interface\n" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerController, nullptr, "SetIsAutoRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::LifePlayerController_eventSetIsAutoRunning_Parms), Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifePlayerController);
	UClass* Z_Construct_UClass_ALifePlayerController_NoRegister()
	{
		return ALifePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALifePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifePlayerController_GetIsAutoRunning, "GetIsAutoRunning" }, // 3551598193
		{ &Z_Construct_UFunction_ALifePlayerController_GetLifeAbilitySystemComponent, "GetLifeAbilitySystemComponent" }, // 561766147
		{ &Z_Construct_UFunction_ALifePlayerController_GetLifeHUD, "GetLifeHUD" }, // 507794059
		{ &Z_Construct_UFunction_ALifePlayerController_GetLifePlayerState, "GetLifePlayerState" }, // 3200731928
		{ &Z_Construct_UFunction_ALifePlayerController_K2_OnEndAutoRun, "K2_OnEndAutoRun" }, // 2556115280
		{ &Z_Construct_UFunction_ALifePlayerController_K2_OnStartAutoRun, "K2_OnStartAutoRun" }, // 401629045
		{ &Z_Construct_UFunction_ALifePlayerController_OnPlayerStateChangedTeam, "OnPlayerStateChangedTeam" }, // 1004777137
		{ &Z_Construct_UFunction_ALifePlayerController_ServerCheat, "ServerCheat" }, // 2691915302
		{ &Z_Construct_UFunction_ALifePlayerController_ServerCheatAll, "ServerCheatAll" }, // 3084150839
		{ &Z_Construct_UFunction_ALifePlayerController_SetIsAutoRunning, "SetIsAutoRunning" }, // 3403961901
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifePlayerController\n *\n *\x09The base player controller class used by this project.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LifePlayerController.h" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base player controller class used by this project." },
		{ "ToolTip", "ALifePlayerController\n\n    The base player controller class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerController_Statics::NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifePlayerController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerController_Statics::NewProp_LastSeenPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerController_Statics::NewProp_LastSeenPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerController_Statics::NewProp_LastSeenPlayerState,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALifePlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULifeCameraAssistInterface_NoRegister, (int32)VTABLE_OFFSET(ALifePlayerController, ILifeCameraAssistInterface), false },  // 4032235662
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifePlayerController_Statics::ClassParams = {
		&ALifePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALifePlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifePlayerController()
	{
		if (!Z_Registration_Info_UClass_ALifePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifePlayerController.OuterSingleton, Z_Construct_UClass_ALifePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifePlayerController.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifePlayerController>()
	{
		return ALifePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifePlayerController);
	void ALifeReplayPlayerController::StaticRegisterNativesALifeReplayPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeReplayPlayerController);
	UClass* Z_Construct_UClass_ALifeReplayPlayerController_NoRegister()
	{
		return ALifeReplayPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALifeReplayPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeReplayPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALifePlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeReplayPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A player controller used for replay capture and playback\n" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/LifePlayerController.h" },
		{ "ModuleRelativePath", "Player/LifePlayerController.h" },
		{ "ToolTip", "A player controller used for replay capture and playback" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeReplayPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeReplayPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeReplayPlayerController_Statics::ClassParams = {
		&ALifeReplayPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeReplayPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeReplayPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeReplayPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALifeReplayPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeReplayPlayerController.OuterSingleton, Z_Construct_UClass_ALifeReplayPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeReplayPlayerController.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeReplayPlayerController>()
	{
		return ALifeReplayPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeReplayPlayerController);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifePlayerController, ALifePlayerController::StaticClass, TEXT("ALifePlayerController"), &Z_Registration_Info_UClass_ALifePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifePlayerController), 2874925358U) },
		{ Z_Construct_UClass_ALifeReplayPlayerController, ALifeReplayPlayerController::StaticClass, TEXT("ALifeReplayPlayerController"), &Z_Registration_Info_UClass_ALifeReplayPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeReplayPlayerController), 1478478259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_1412983507(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
