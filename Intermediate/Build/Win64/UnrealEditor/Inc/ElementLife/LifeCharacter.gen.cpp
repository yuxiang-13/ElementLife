// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCharacter() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeReplicatedAcceleration();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacter_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacter();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnExtensionComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHealthComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration;
class UScriptStruct* FLifeReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeReplicatedAcceleration>()
{
	return FLifeReplicatedAcceleration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FLifeReplicatedAcceleration: Compressed representation of acceleration\n */" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "FLifeReplicatedAcceleration: Compressed representation of acceleration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeReplicatedAcceleration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYRadians_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData[] = {
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData[] = {
		{ "Comment", "//Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeReplicatedAcceleration, AccelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewProp_AccelZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeReplicatedAcceleration",
		sizeof(FLifeReplicatedAcceleration),
		alignof(FLifeReplicatedAcceleration),
		Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeReplicatedAcceleration()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration.InnerSingleton;
	}
	DEFINE_FUNCTION(ALifeCharacter::execOnRep_ReplicatedAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeCharacter::execOnDeathFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathFinished(Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeCharacter::execOnDeathStarted)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathStarted(Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeCharacter::execGetLifeAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeCharacter::execGetLifePlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifePlayerState**)Z_Param__Result=P_THIS->GetLifePlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALifeCharacter::execGetLifePlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifePlayerController**)Z_Param__Result=P_THIS->GetLifePlayerController();
		P_NATIVE_END;
	}
	static FName NAME_ALifeCharacter_K2_OnDeathFinished = FName(TEXT("K2_OnDeathFinished"));
	void ALifeCharacter::K2_OnDeathFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALifeCharacter_K2_OnDeathFinished),NULL);
	}
	void ALifeCharacter::StaticRegisterNativesALifeCharacter()
	{
		UClass* Class = ALifeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLifeAbilitySystemComponent", &ALifeCharacter::execGetLifeAbilitySystemComponent },
			{ "GetLifePlayerController", &ALifeCharacter::execGetLifePlayerController },
			{ "GetLifePlayerState", &ALifeCharacter::execGetLifePlayerState },
			{ "OnDeathFinished", &ALifeCharacter::execOnDeathFinished },
			{ "OnDeathStarted", &ALifeCharacter::execOnDeathStarted },
			{ "OnRep_ReplicatedAcceleration", &ALifeCharacter::execOnRep_ReplicatedAcceleration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics
	{
		struct LifeCharacter_eventGetLifeAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacter_eventGetLifeAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Character" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "GetLifeAbilitySystemComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::LifeCharacter_eventGetLifeAbilitySystemComponent_Parms), Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics
	{
		struct LifeCharacter_eventGetLifePlayerController_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacter_eventGetLifePlayerController_Parms, ReturnValue), Z_Construct_UClass_ALifePlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Character" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "GetLifePlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::LifeCharacter_eventGetLifePlayerController_Parms), Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics
	{
		struct LifeCharacter_eventGetLifePlayerState_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacter_eventGetLifePlayerState_Parms, ReturnValue), Z_Construct_UClass_ALifePlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Character" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "GetLifePlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::LifeCharacter_eventGetLifePlayerState_Parms), Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the death sequence for the character has completed\n" },
		{ "DisplayName", "OnDeathFinished" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "Called when the death sequence for the character has completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "K2_OnDeathFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics
	{
		struct LifeCharacter_eventOnDeathFinished_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacter_eventOnDeathFinished_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Ends the death sequence for the character (detaches controller, destroys pawn, etc...)\n" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "Ends the death sequence for the character (detaches controller, destroys pawn, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "OnDeathFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::LifeCharacter_eventOnDeathFinished_Parms), Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_OnDeathFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_OnDeathFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics
	{
		struct LifeCharacter_eventOnDeathStarted_Parms
		{
			AActor* OwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacter_eventOnDeathStarted_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Begins the death sequence for the character (disables collision, disables movement, etc...)\n" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ToolTip", "Begins the death sequence for the character (disables collision, disables movement, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "OnDeathStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::LifeCharacter_eventOnDeathStarted_Parms), Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_OnDeathStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_OnDeathStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALifeCharacter, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALifeCharacter);
	UClass* Z_Construct_UClass_ALifeCharacter_NoRegister()
	{
		return ALifeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALifeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALifeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALifeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALifeCharacter_GetLifeAbilitySystemComponent, "GetLifeAbilitySystemComponent" }, // 83427029
		{ &Z_Construct_UFunction_ALifeCharacter_GetLifePlayerController, "GetLifePlayerController" }, // 446518090
		{ &Z_Construct_UFunction_ALifeCharacter_GetLifePlayerState, "GetLifePlayerState" }, // 2881906748
		{ &Z_Construct_UFunction_ALifeCharacter_K2_OnDeathFinished, "K2_OnDeathFinished" }, // 3800910417
		{ &Z_Construct_UFunction_ALifeCharacter_OnDeathFinished, "OnDeathFinished" }, // 3368757484
		{ &Z_Construct_UFunction_ALifeCharacter_OnDeathStarted, "OnDeathStarted" }, // 534059370
		{ &Z_Construct_UFunction_ALifeCharacter_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 3897683228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ALifeCharacter\n *\n *\x09The base character pawn class used by this project.\n *\x09Responsible for sending events to pawn components.\n *\x09New behavior should be added via pawn components when possible.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LifeCharacter.h" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base character pawn class used by this project." },
		{ "ToolTip", "ALifeCharacter\n\n    The base character pawn class used by this project.\n    Responsible for sending events to pawn components.\n    New behavior should be added via pawn components when possible." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacter_Statics::NewProp_PawnExtComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Life|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeCharacter, PawnExtComponent), Z_Construct_UClass_ULifePawnExtensionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_PawnExtComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_PawnExtComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Life|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeCharacter, HealthComponent), Z_Construct_UClass_ULifeHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Life|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALifeCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeCharacter, CameraComponent), Z_Construct_UClass_ULifeCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALifeCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LifeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALifeCharacter_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALifeCharacter, ReplicatedAcceleration), Z_Construct_UScriptStruct_FLifeReplicatedAcceleration, METADATA_PARAMS(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::NewProp_ReplicatedAcceleration_MetaData)) }; // 3829391634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALifeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeCharacter_Statics::NewProp_PawnExtComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeCharacter_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALifeCharacter_Statics::NewProp_ReplicatedAcceleration,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALifeCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ALifeCharacter, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(ALifeCharacter, IGameplayCueInterface), false },  // 1093509736
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ALifeCharacter, IGameplayTagAssetInterface), false },  // 2897640864
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALifeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALifeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALifeCharacter_Statics::ClassParams = {
		&ALifeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALifeCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALifeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALifeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALifeCharacter()
	{
		if (!Z_Registration_Info_UClass_ALifeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALifeCharacter.OuterSingleton, Z_Construct_UClass_ALifeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALifeCharacter.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ALifeCharacter>()
	{
		return ALifeCharacter::StaticClass();
	}

	void ALifeCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));

		const bool bIsValid = true
			&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALifeCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALifeCharacter);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ScriptStructInfo[] = {
		{ FLifeReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics::NewStructOps, TEXT("LifeReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_LifeReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeReplicatedAcceleration), 3829391634U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALifeCharacter, ALifeCharacter::StaticClass, TEXT("ALifeCharacter"), &Z_Registration_Info_UClass_ALifeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALifeCharacter), 4271028068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_2789215302(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
