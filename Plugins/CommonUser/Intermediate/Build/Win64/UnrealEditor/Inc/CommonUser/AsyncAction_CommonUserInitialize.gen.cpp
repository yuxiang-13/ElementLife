// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/AsyncAction_CommonUserInitialize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_CommonUserInitialize() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize();
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execHandleInitializationComplete)
	{
		P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FTextProperty,Z_Param_Error);
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInitializationComplete(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execLoginForOnlinePlay)
	{
		P_GET_OBJECT(UCommonUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_CommonUserInitialize**)Z_Param__Result=UAsyncAction_CommonUserInitialize::LoginForOnlinePlay(Z_Param_Target,Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execInitializeForLocalPlay)
	{
		P_GET_OBJECT(UCommonUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL(Z_Param_bCanUseGuestLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_CommonUserInitialize**)Z_Param__Result=UAsyncAction_CommonUserInitialize::InitializeForLocalPlay(Z_Param_Target,Z_Param_LocalPlayerIndex,Z_Param_ControllerId,Z_Param_bCanUseGuestLogin);
		P_NATIVE_END;
	}
	void UAsyncAction_CommonUserInitialize::StaticRegisterNativesUAsyncAction_CommonUserInitialize()
	{
		UClass* Class = UAsyncAction_CommonUserInitialize::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleInitializationComplete", &UAsyncAction_CommonUserInitialize::execHandleInitializationComplete },
			{ "InitializeForLocalPlay", &UAsyncAction_CommonUserInitialize::execInitializeForLocalPlay },
			{ "LoginForOnlinePlay", &UAsyncAction_CommonUserInitialize::execLoginForOnlinePlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics
	{
		struct AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms
		{
			const UCommonUserInfo* UserInfo;
			bool bSuccess;
			FText Error;
			ECommonUserPrivilege RequestedPrivilege;
			ECommonUserOnlineContext OnlineContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData)) };
	void Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms), &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3520582230
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 2680643188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Wrapper delegate, will pass on to OnInitializationComplete if appropriate */" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
		{ "ToolTip", "Wrapper delegate, will pass on to OnInitializationComplete if appropriate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "HandleInitializationComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics
	{
		struct AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms
		{
			UCommonUserSubsystem* Target;
			int32 LocalPlayerIndex;
			int32 ControllerId;
			bool bCanUseGuestLogin;
			UAsyncAction_CommonUserInitialize* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static void NewProp_bCanUseGuestLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseGuestLogin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, Target), Z_Construct_UClass_UCommonUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit(void* Obj)
	{
		((AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms*)Obj)->bCanUseGuestLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin = { "bCanUseGuestLogin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms), &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ControllerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "CommonUser" },
		{ "Comment", "/**\n\x09 * Initializes a local player with the common user system, which includes doing platform-specific login and privilege checks.\n\x09 * When the process has succeeded or failed, it will broadcast the OnInitializationComplete delegate.\n\x09 *\n\x09 * @param LocalPlayerIndex\x09""Desired index of ULocalPlayer in Game Instance, 0 will be primary player and 1+ for local multiplayer\n\x09 * @param ControllerId\x09\x09Number of local user according to online system, will match physical Controller Id\n\x09 * @param bCanUseGuestLogin\x09If true, this player can be a guest without a real system net id\n\x09 */" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
		{ "ToolTip", "Initializes a local player with the common user system, which includes doing platform-specific login and privilege checks.\nWhen the process has succeeded or failed, it will broadcast the OnInitializationComplete delegate.\n\n@param LocalPlayerIndex      Desired index of ULocalPlayer in Game Instance, 0 will be primary player and 1+ for local multiplayer\n@param ControllerId          Number of local user according to online system, will match physical Controller Id\n@param bCanUseGuestLogin     If true, this player can be a guest without a real system net id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "InitializeForLocalPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics
	{
		struct AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms
		{
			UCommonUserSubsystem* Target;
			int32 LocalPlayerIndex;
			UAsyncAction_CommonUserInitialize* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, Target), Z_Construct_UClass_UCommonUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "CommonUser" },
		{ "Comment", "/**\n\x09 * Attempts to log an existing user into the platform-specific online backend to enable full online play\n\x09 * When the process has succeeded or failed, it will broadcast the OnInitializationComplete delegate.\n\x09 *\n\x09 * @param LocalPlayerIndex\x09Index of existing LocalPlayer in Game Instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
		{ "ToolTip", "Attempts to log an existing user into the platform-specific online backend to enable full online play\nWhen the process has succeeded or failed, it will broadcast the OnInitializationComplete delegate.\n\n@param LocalPlayerIndex      Index of existing LocalPlayer in Game Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "LoginForOnlinePlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_CommonUserInitialize);
	UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister()
	{
		return UAsyncAction_CommonUserInitialize::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInitializationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitializationComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete, "HandleInitializationComplete" }, // 2322812057
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay, "InitializeForLocalPlay" }, // 2974961079
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay, "LoginForOnlinePlay" }, // 1389533397
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async action to handle different functions for initializing users\n */" },
		{ "IncludePath", "AsyncAction_CommonUserInitialize.h" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
		{ "ToolTip", "Async action to handle different functions for initializing users" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData[] = {
		{ "Comment", "/** Call when initialization succeeds or fails */" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
		{ "ToolTip", "Call when initialization succeeds or fails" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete = { "OnInitializationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncAction_CommonUserInitialize, OnInitializationComplete), Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData)) }; // 2107127243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_CommonUserInitialize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::ClassParams = {
		&UAsyncAction_CommonUserInitialize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton, Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UAsyncAction_CommonUserInitialize>()
	{
		return UAsyncAction_CommonUserInitialize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_CommonUserInitialize);
	struct Z_CompiledInDeferFile_FID_ElementLife_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_CommonUserInitialize, UAsyncAction_CommonUserInitialize::StaticClass, TEXT("UAsyncAction_CommonUserInitialize"), &Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_CommonUserInitialize), 42596519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_947468468(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_ElementLife_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
