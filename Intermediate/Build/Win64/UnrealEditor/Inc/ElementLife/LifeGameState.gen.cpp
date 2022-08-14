// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameState() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeGameState_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeGameState();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeVerbMessage();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeExperienceManagerComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALifeGameState::execMulticastReliableMessageToClients)
	{
		P_GET_STRUCT(FLifeVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastReliableMessageToClients_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeGameState::execMulticastMessageToClients)
	{
		P_GET_STRUCT(FLifeVerbMessage,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastMessageToClients_Implementation(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeGameState::execGetLifeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponent();
		P_NATIVE_END;
	}
	static FName NAME_ALifeGameState_MulticastMessageToClients = FName(TEXT("MulticastMessageToClients"));
	void ALifeGameState::MulticastMessageToClients(const FLifeVerbMessage Message)
	{
		LifeGameState_eventMulticastMessageToClients_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALifeGameState_MulticastMessageToClients),&Parms);
	}
	static FName NAME_ALifeGameState_MulticastReliableMessageToClients = FName(TEXT("MulticastReliableMessageToClients"));
	void ALifeGameState::MulticastReliableMessageToClients(const FLifeVerbMessage Message)
	{
		LifeGameState_eventMulticastReliableMessageToClients_Parms Parms;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ALifeGameState_MulticastReliableMessageToClients),&Parms);
	}
	void ALifeGameState::StaticRegisterNativesALifeGameState()
	{
		UClass* Class = ALifeGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLifeAbilitySystemComponent", &ALifeGameState::execGetLifeAbilitySystemComponent },
			{ "MulticastMessageToClients", &ALifeGameState::execMulticastMessageToClients },
			{ "MulticastReliableMessageToClients", &ALifeGameState::execMulticastReliableMessageToClients },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics
	{
		struct LifeGameState_eventGetLifeAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameState_eventGetLifeAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|GameState" },
		{ "Comment", "//~End of IAbilitySystemInterface\n" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeGameState, nullptr, "GetLifeAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::LifeGameState_eventGetLifeAbilitySystemComponent_Parms), Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameState_eventMulticastMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLifeVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::NewProp_Message_MetaData)) }; // 1838427254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|GameState" },
		{ "Comment", "// Send a message that all clients will (probably) get\n// (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)\n" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
		{ "ToolTip", "Send a message that all clients will (probably) get\n(use only for client notifications like eliminations, server join messages, etc... that can handle being lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeGameState, nullptr, "MulticastMessageToClients", nullptr, nullptr, sizeof(LifeGameState_eventMulticastMessageToClients_Parms), Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameState_eventMulticastReliableMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FLifeVerbMessage, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::NewProp_Message_MetaData)) }; // 1838427254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|GameState" },
		{ "Comment", "// Send a message that all clients will be guaranteed to get\n// (use only for client notifications that cannot handle being lost)\n" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
		{ "ToolTip", "Send a message that all clients will be guaranteed to get\n(use only for client notifications that cannot handle being lost)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeGameState, nullptr, "MulticastReliableMessageToClients", nullptr, nullptr, sizeof(LifeGameState_eventMulticastReliableMessageToClients_Parms), Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeGameState);
	UClass* Z_Construct_UClass_ALifeGameState_NoRegister()
	{
		return ALifeGameState::StaticClass();
	}
	struct Z_Construct_UClass_ALifeGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifeGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifeGameState_GetLifeAbilitySystemComponent, "GetLifeAbilitySystemComponent" }, // 1205275828
		{ &Z_Construct_UFunction_ALifeGameState_MulticastMessageToClients, "MulticastMessageToClients" }, // 55707917
		{ &Z_Construct_UFunction_ALifeGameState_MulticastReliableMessageToClients, "MulticastReliableMessageToClients" }, // 1370668766
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifeGameState\n *\n *\x09The base game state class used by this project.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/LifeGameState.h" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ALifeGameState\n\n    The base game state class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeGameState_Statics::NewProp_ExperienceManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeGameState, ExperienceManagerComponent), Z_Construct_UClass_ULifeExperienceManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeGameState_Statics::NewProp_ExperienceManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameState_Statics::NewProp_ExperienceManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeGameState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Life|GameState" },
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeGameState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeGameState, AbilitySystemComponent), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeGameState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeGameState_Statics::NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/LifeGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALifeGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeGameState, ServerFPS), METADATA_PARAMS(Z_Construct_UClass_ALifeGameState_Statics::NewProp_ServerFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameState_Statics::NewProp_ServerFPS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifeGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeGameState_Statics::NewProp_ExperienceManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeGameState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeGameState_Statics::NewProp_ServerFPS,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALifeGameState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALifeGameState, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeGameState_Statics::ClassParams = {
		&ALifeGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALifeGameState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeGameState()
	{
		if (!Z_Registration_Info_UClass_ALifeGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeGameState.OuterSingleton, Z_Construct_UClass_ALifeGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeGameState.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeGameState>()
	{
		return ALifeGameState::StaticClass();
	}

	void ALifeGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerFPS(TEXT("ServerFPS"));

		const bool bIsValid = true
			&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALifeGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeGameState);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeGameState, ALifeGameState::StaticClass, TEXT("ALifeGameState"), &Z_Registration_Info_UClass_ALifeGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeGameState), 189677087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_52218295(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
