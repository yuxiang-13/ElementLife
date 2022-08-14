// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Player/LifePlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePlayerState() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerState_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerState();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeVerbMessage();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnData_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifePlayerConnectionType;
	static UEnum* ELifePlayerConnectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifePlayerConnectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifePlayerConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifePlayerConnectionType"));
		}
		return Z_Registration_Info_UEnum_ELifePlayerConnectionType.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifePlayerConnectionType>()
	{
		return ELifePlayerConnectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enumerators[] = {
		{ "ELifePlayerConnectionType::Player", (int64)ELifePlayerConnectionType::Player },
		{ "ELifePlayerConnectionType::LiveSpectator", (int64)ELifePlayerConnectionType::LiveSpectator },
		{ "ELifePlayerConnectionType::ReplaySpectator", (int64)ELifePlayerConnectionType::ReplaySpectator },
		{ "ELifePlayerConnectionType::InactivePlayer", (int64)ELifePlayerConnectionType::InactivePlayer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the types of client connected */" },
		{ "InactivePlayer.Comment", "// A deactivated player (disconnected)\n" },
		{ "InactivePlayer.Name", "ELifePlayerConnectionType::InactivePlayer" },
		{ "InactivePlayer.ToolTip", "A deactivated player (disconnected)" },
		{ "LiveSpectator.Comment", "// Spectator connected to a running game\n" },
		{ "LiveSpectator.Name", "ELifePlayerConnectionType::LiveSpectator" },
		{ "LiveSpectator.ToolTip", "Spectator connected to a running game" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "Player.Comment", "// An active player\n" },
		{ "Player.Name", "ELifePlayerConnectionType::Player" },
		{ "Player.ToolTip", "An active player" },
		{ "ReplaySpectator.Comment", "// Spectating a demo recording offline\n" },
		{ "ReplaySpectator.Name", "ELifePlayerConnectionType::ReplaySpectator" },
		{ "ReplaySpectator.ToolTip", "Spectating a demo recording offline" },
		{ "ToolTip", "Defines the types of client connected" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifePlayerConnectionType",
		"ELifePlayerConnectionType",
		Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType()
	{
		if (!Z_Registration_Info_UEnum_ELifePlayerConnectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifePlayerConnectionType.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifePlayerConnectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(ALifePlayerState::execOnRep_MySquadID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MySquadID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execOnRep_PawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execClientBroadcastMessage)
	{
		P_GET_STRUCT(FLifeVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientBroadcastMessage_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execHasStatTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execGetStatTagStackCount)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execRemoveStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execAddStatTagStack)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execGetSquadId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSquadId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execGetLifeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifePlayerState::execGetLifePlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifePlayerController**)Z_Param__Result=P_THIS->GetLifePlayerController();
		P_NATIVE_END;
	}
	static FName NAME_ALifePlayerState_ClientBroadcastMessage = FName(TEXT("ClientBroadcastMessage"));
	void ALifePlayerState::ClientBroadcastMessage(const FLifeVerbMessage Message)
	{
		LifePlayerState_eventClientBroadcastMessage_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALifePlayerState_ClientBroadcastMessage),&Parms);
	}
	void ALifePlayerState::StaticRegisterNativesALifePlayerState()
	{
		UClass* Class = ALifePlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStatTagStack", &ALifePlayerState::execAddStatTagStack },
			{ "ClientBroadcastMessage", &ALifePlayerState::execClientBroadcastMessage },
			{ "GetLifeAbilitySystemComponent", &ALifePlayerState::execGetLifeAbilitySystemComponent },
			{ "GetLifePlayerController", &ALifePlayerState::execGetLifePlayerController },
			{ "GetSquadId", &ALifePlayerState::execGetSquadId },
			{ "GetStatTagStackCount", &ALifePlayerState::execGetStatTagStackCount },
			{ "HasStatTag", &ALifePlayerState::execHasStatTag },
			{ "OnRep_MySquadID", &ALifePlayerState::execOnRep_MySquadID },
			{ "OnRep_PawnData", &ALifePlayerState::execOnRep_PawnData },
			{ "RemoveStatTagStack", &ALifePlayerState::execRemoveStatTagStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics
	{
		struct LifePlayerState_eventAddStatTagStack_Parms
		{
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "AddStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::LifePlayerState_eventAddStatTagStack_Parms), Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_AddStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_AddStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventClientBroadcastMessage_Parms, Message), Z_Construct_UScriptStruct_FLifeVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::NewProp_Message_MetaData)) }; // 1838427254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerState" },
		{ "Comment", "// Send a message to just this player\n// (use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)\n" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Send a message to just this player\n(use only for client notifications like accolades, quest toasts, etc... that can handle being occasionally lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "ClientBroadcastMessage", nullptr, nullptr, sizeof(LifePlayerState_eventClientBroadcastMessage_Parms), Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics
	{
		struct LifePlayerState_eventGetLifeAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventGetLifeAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerState" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "GetLifeAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::LifePlayerState_eventGetLifeAbilitySystemComponent_Parms), Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics
	{
		struct LifePlayerState_eventGetLifePlayerController_Parms
		{
			ALifePlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventGetLifePlayerController_Parms, ReturnValue), Z_Construct_UClass_ALifePlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|PlayerState" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "GetLifePlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::LifePlayerState_eventGetLifePlayerController_Parms), Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics
	{
		struct LifePlayerState_eventGetSquadId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventGetSquadId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the Squad ID of the squad the player belongs to. */" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Returns the Squad ID of the squad the player belongs to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "GetSquadId", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::LifePlayerState_eventGetSquadId_Parms), Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_GetSquadId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_GetSquadId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics
	{
		struct LifePlayerState_eventGetStatTagStackCount_Parms
		{
			FGameplayTag Tag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present)\n" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "GetStatTagStackCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::LifePlayerState_eventGetStatTagStackCount_Parms), Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics
	{
		struct LifePlayerState_eventHasStatTag_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	void Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifePlayerState_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifePlayerState_eventHasStatTag_Parms), &Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Returns true if there is at least one stack of the specified tag\n" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "HasStatTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::LifePlayerState_eventHasStatTag_Parms), Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_HasStatTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_HasStatTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "OnRep_MySquadID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "OnRep_PawnData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics
	{
		struct LifePlayerState_eventRemoveStatTagStack_Parms
		{
			FGameplayTag Tag;
			int32 StackCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifePlayerState_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::NewProp_StackCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)\n" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifePlayerState, nullptr, "RemoveStatTagStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::LifePlayerState_eventRemoveStatTagStack_Parms), Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifePlayerState);
	UClass* Z_Construct_UClass_ALifePlayerState_NoRegister()
	{
		return ALifePlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ALifePlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyPlayerConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MyPlayerConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySquadID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MySquadID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifePlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifePlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifePlayerState_AddStatTagStack, "AddStatTagStack" }, // 2982986986
		{ &Z_Construct_UFunction_ALifePlayerState_ClientBroadcastMessage, "ClientBroadcastMessage" }, // 4240483278
		{ &Z_Construct_UFunction_ALifePlayerState_GetLifeAbilitySystemComponent, "GetLifeAbilitySystemComponent" }, // 3586070563
		{ &Z_Construct_UFunction_ALifePlayerState_GetLifePlayerController, "GetLifePlayerController" }, // 105611849
		{ &Z_Construct_UFunction_ALifePlayerState_GetSquadId, "GetSquadId" }, // 228158594
		{ &Z_Construct_UFunction_ALifePlayerState_GetStatTagStackCount, "GetStatTagStackCount" }, // 2183508804
		{ &Z_Construct_UFunction_ALifePlayerState_HasStatTag, "HasStatTag" }, // 1698249507
		{ &Z_Construct_UFunction_ALifePlayerState_OnRep_MySquadID, "OnRep_MySquadID" }, // 3250201967
		{ &Z_Construct_UFunction_ALifePlayerState_OnRep_PawnData, "OnRep_PawnData" }, // 3499509302
		{ &Z_Construct_UFunction_ALifePlayerState_RemoveStatTagStack, "RemoveStatTagStack" }, // 2330831974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifePlayerState\n *\n *\x09""Base player state class used by this project.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/LifePlayerState.h" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALifePlayerState\n\n    Base player state class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerState, PawnData), Z_Construct_UClass_ULifePawnData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_PawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_PawnData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Life|PlayerState" },
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
		{ "ToolTip", "The ability system component sub-object used by player characters." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerState, AbilitySystemComponent), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType = { "MyPlayerConnectionType", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerState, MyPlayerConnectionType), Z_Construct_UEnum_ElementLife_ELifePlayerConnectionType, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType_MetaData)) }; // 2262342597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MySquadID_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MySquadID = { "MySquadID", "OnRep_MySquadID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerState, MySquadID), METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MySquadID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MySquadID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifePlayerState_Statics::NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Player/LifePlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALifePlayerState_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifePlayerState, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_StatTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::NewProp_StatTags_MetaData)) }; // 3062566863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifePlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_PawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MyPlayerConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_MySquadID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifePlayerState_Statics::NewProp_StatTags,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALifePlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALifePlayerState, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifePlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifePlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifePlayerState_Statics::ClassParams = {
		&ALifePlayerState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALifePlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifePlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifePlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifePlayerState()
	{
		if (!Z_Registration_Info_UClass_ALifePlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifePlayerState.OuterSingleton, Z_Construct_UClass_ALifePlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifePlayerState.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifePlayerState>()
	{
		return ALifePlayerState::StaticClass();
	}

	void ALifePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PawnData(TEXT("PawnData"));
		static const FName Name_MyPlayerConnectionType(TEXT("MyPlayerConnectionType"));
		static const FName Name_MySquadID(TEXT("MySquadID"));
		static const FName Name_StatTags(TEXT("StatTags"));

		const bool bIsValid = true
			&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName()
			&& Name_MyPlayerConnectionType == ClassReps[(int32)ENetFields_Private::MyPlayerConnectionType].Property->GetFName()
			&& Name_MySquadID == ClassReps[(int32)ENetFields_Private::MySquadID].Property->GetFName()
			&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALifePlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifePlayerState);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::EnumInfo[] = {
		{ ELifePlayerConnectionType_StaticEnum, TEXT("ELifePlayerConnectionType"), &Z_Registration_Info_UEnum_ELifePlayerConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2262342597U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifePlayerState, ALifePlayerState::StaticClass, TEXT("ALifePlayerState"), &Z_Registration_Info_UClass_ALifePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifePlayerState), 1506014024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_4180870145(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
