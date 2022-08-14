// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Messages/LifeVerbMessageHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeVerbMessageHelpers() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeVerbMessageHelpers_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeVerbMessageHelpers();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeVerbMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULifeVerbMessageHelpers::execCueParametersToVerbMessage)
	{
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLifeVerbMessage*)Z_Param__Result=ULifeVerbMessageHelpers::CueParametersToVerbMessage(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeVerbMessageHelpers::execVerbMessageToCueParameters)
	{
		P_GET_STRUCT_REF(FLifeVerbMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayCueParameters*)Z_Param__Result=ULifeVerbMessageHelpers::VerbMessageToCueParameters(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeVerbMessageHelpers::execGetPlayerControllerFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=ULifeVerbMessageHelpers::GetPlayerControllerFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeVerbMessageHelpers::execGetPlayerStateFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerState**)Z_Param__Result=ULifeVerbMessageHelpers::GetPlayerStateFromObject(Z_Param_Object);
		P_NATIVE_END;
	}
	void ULifeVerbMessageHelpers::StaticRegisterNativesULifeVerbMessageHelpers()
	{
		UClass* Class = ULifeVerbMessageHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CueParametersToVerbMessage", &ULifeVerbMessageHelpers::execCueParametersToVerbMessage },
			{ "GetPlayerControllerFromObject", &ULifeVerbMessageHelpers::execGetPlayerControllerFromObject },
			{ "GetPlayerStateFromObject", &ULifeVerbMessageHelpers::execGetPlayerStateFromObject },
			{ "VerbMessageToCueParameters", &ULifeVerbMessageHelpers::execVerbMessageToCueParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics
	{
		struct LifeVerbMessageHelpers_eventCueParametersToVerbMessage_Parms
		{
			FGameplayCueParameters Params;
			FLifeVerbMessage ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, Params), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params_MetaData)) }; // 2070044535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventCueParametersToVerbMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FLifeVerbMessage, METADATA_PARAMS(nullptr, 0) }; // 1838427254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeVerbMessageHelpers, nullptr, "CueParametersToVerbMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::LifeVerbMessageHelpers_eventCueParametersToVerbMessage_Parms), Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics
	{
		struct LifeVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms
		{
			UObject* Object;
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeVerbMessageHelpers, nullptr, "GetPlayerControllerFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::LifeVerbMessageHelpers_eventGetPlayerControllerFromObject_Parms), Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics
	{
		struct LifeVerbMessageHelpers_eventGetPlayerStateFromObject_Parms
		{
			UObject* Object;
			APlayerState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventGetPlayerStateFromObject_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeVerbMessageHelpers, nullptr, "GetPlayerStateFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::LifeVerbMessageHelpers_eventGetPlayerStateFromObject_Parms), Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics
	{
		struct LifeVerbMessageHelpers_eventVerbMessageToCueParameters_Parms
		{
			FLifeVerbMessage Message;
			FGameplayCueParameters ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, Message), Z_Construct_UScriptStruct_FLifeVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message_MetaData)) }; // 1838427254
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeVerbMessageHelpers_eventVerbMessageToCueParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(nullptr, 0) }; // 2070044535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessageHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeVerbMessageHelpers, nullptr, "VerbMessageToCueParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::LifeVerbMessageHelpers_eventVerbMessageToCueParameters_Parms), Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeVerbMessageHelpers);
	UClass* Z_Construct_UClass_ULifeVerbMessageHelpers_NoRegister()
	{
		return ULifeVerbMessageHelpers::StaticClass();
	}
	struct Z_Construct_UClass_ULifeVerbMessageHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeVerbMessageHelpers_CueParametersToVerbMessage, "CueParametersToVerbMessage" }, // 3657570230
		{ &Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerControllerFromObject, "GetPlayerControllerFromObject" }, // 317757651
		{ &Z_Construct_UFunction_ULifeVerbMessageHelpers_GetPlayerStateFromObject, "GetPlayerStateFromObject" }, // 3979739518
		{ &Z_Construct_UFunction_ULifeVerbMessageHelpers_VerbMessageToCueParameters, "VerbMessageToCueParameters" }, // 488266902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Messages/LifeVerbMessageHelpers.h" },
		{ "ModuleRelativePath", "Messages/LifeVerbMessageHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeVerbMessageHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::ClassParams = {
		&ULifeVerbMessageHelpers::StaticClass,
		nullptr,
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
		METADATA_PARAMS(Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeVerbMessageHelpers()
	{
		if (!Z_Registration_Info_UClass_ULifeVerbMessageHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeVerbMessageHelpers.OuterSingleton, Z_Construct_UClass_ULifeVerbMessageHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeVerbMessageHelpers.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeVerbMessageHelpers>()
	{
		return ULifeVerbMessageHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeVerbMessageHelpers);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeVerbMessageHelpers, ULifeVerbMessageHelpers::StaticClass, TEXT("ULifeVerbMessageHelpers"), &Z_Registration_Info_UClass_ULifeVerbMessageHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeVerbMessageHelpers), 1977915757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_2700586154(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
