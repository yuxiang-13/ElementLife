// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayAbility() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeHeroComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifeCharacter_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ALifePlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCameraMode_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeAbilityCost_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy;
	static UEnum* ELifeAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAbilityActivationPolicy>()
	{
		return ELifeAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "ELifeAbilityActivationPolicy::OnInputTriggered", (int64)ELifeAbilityActivationPolicy::OnInputTriggered },
		{ "ELifeAbilityActivationPolicy::WhileInputActive", (int64)ELifeAbilityActivationPolicy::WhileInputActive },
		{ "ELifeAbilityActivationPolicy::OnSpawn", (int64)ELifeAbilityActivationPolicy::OnSpawn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELifeAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "ELifeAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "ELifeAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
		{ "ToolTip", "ELifeAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "ELifeAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeAbilityActivationPolicy",
		"ELifeAbilityActivationPolicy",
		Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELifeAbilityActivationGroup;
	static UEnum* ELifeAbilityActivationGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup, Z_Construct_UPackage__Script_ElementLife(), TEXT("ELifeAbilityActivationGroup"));
		}
		return Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAbilityActivationGroup>()
	{
		return ELifeAbilityActivationGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enumerators[] = {
		{ "ELifeAbilityActivationGroup::Independent", (int64)ELifeAbilityActivationGroup::Independent },
		{ "ELifeAbilityActivationGroup::Exclusive_Replaceable", (int64)ELifeAbilityActivationGroup::Exclusive_Replaceable },
		{ "ELifeAbilityActivationGroup::Exclusive_Blocking", (int64)ELifeAbilityActivationGroup::Exclusive_Blocking },
		{ "ELifeAbilityActivationGroup::MAX", (int64)ELifeAbilityActivationGroup::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ELifeAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "ELifeAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "ELifeAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "ELifeAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ELifeAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "ELifeAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"ELifeAbilityActivationGroup",
		"ELifeAbilityActivationGroup",
		Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup()
	{
		if (!Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELifeAbilityActivationGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage;
class UScriptStruct* FLifeAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeAbilityMontageFailureMessage>()
{
	return FLifeAbilityMontageFailureMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeAbilityMontageFailureMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "LifeAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData[] = {
		{ "Category", "LifeAbilityMontageFailureMessage" },
		{ "Comment", "// All the reasons why this ability has failed\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "All the reasons why this ability has failed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData[] = {
		{ "Category", "LifeAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeAbilityMontageFailureMessage",
		sizeof(FLifeAbilityMontageFailureMessage),
		alignof(FLifeAbilityMontageFailureMessage),
		Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage.InnerSingleton;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execClearCameraMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCameraMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execSetCameraMode)
	{
		P_GET_OBJECT(UClass,Z_Param_CameraMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraMode(Z_Param_CameraMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execChangeActivationGroup)
	{
		P_GET_ENUM(ELifeAbilityActivationGroup,Z_Param_NewGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(ELifeAbilityActivationGroup(Z_Param_NewGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execCanChangeActivationGroup)
	{
		P_GET_ENUM(ELifeAbilityActivationGroup,Z_Param_NewGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(ELifeAbilityActivationGroup(Z_Param_NewGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execGetHeroComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeHeroComponent**)Z_Param__Result=P_THIS->GetHeroComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execGetLifeCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifeCharacter**)Z_Param__Result=P_THIS->GetLifeCharacterFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execGetControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execGetLifePlayerControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALifePlayerController**)Z_Param__Result=P_THIS->GetLifePlayerControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility::execGetLifeAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULifeAbilitySystemComponent**)Z_Param__Result=P_THIS->GetLifeAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	static FName NAME_ULifeGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
	void ULifeGameplayAbility::K2_OnAbilityAdded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeGameplayAbility_K2_OnAbilityAdded),NULL);
	}
	static FName NAME_ULifeGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
	void ULifeGameplayAbility::K2_OnAbilityRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeGameplayAbility_K2_OnAbilityRemoved),NULL);
	}
	static FName NAME_ULifeGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
	void ULifeGameplayAbility::K2_OnPawnAvatarSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULifeGameplayAbility_K2_OnPawnAvatarSet),NULL);
	}
	static FName NAME_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
	void ULifeGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
	{
		LifeGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
		Parms.FailedReason=FailedReason;
		const_cast<ULifeGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate),&Parms);
	}
	void ULifeGameplayAbility::StaticRegisterNativesULifeGameplayAbility()
	{
		UClass* Class = ULifeGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanChangeActivationGroup", &ULifeGameplayAbility::execCanChangeActivationGroup },
			{ "ChangeActivationGroup", &ULifeGameplayAbility::execChangeActivationGroup },
			{ "ClearCameraMode", &ULifeGameplayAbility::execClearCameraMode },
			{ "GetControllerFromActorInfo", &ULifeGameplayAbility::execGetControllerFromActorInfo },
			{ "GetHeroComponentFromActorInfo", &ULifeGameplayAbility::execGetHeroComponentFromActorInfo },
			{ "GetLifeAbilitySystemComponentFromActorInfo", &ULifeGameplayAbility::execGetLifeAbilitySystemComponentFromActorInfo },
			{ "GetLifeCharacterFromActorInfo", &ULifeGameplayAbility::execGetLifeCharacterFromActorInfo },
			{ "GetLifePlayerControllerFromActorInfo", &ULifeGameplayAbility::execGetLifePlayerControllerFromActorInfo },
			{ "SetCameraMode", &ULifeGameplayAbility::execSetCameraMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics
	{
		struct LifeGameplayAbility_eventCanChangeActivationGroup_Parms
		{
			ELifeAbilityActivationGroup NewGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup, METADATA_PARAMS(nullptr, 0) }; // 1562365072
	void Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifeGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifeGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "Comment", "// Returns true if the requested activation group is a valid transition.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Returns true if the requested activation group is a valid transition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "CanChangeActivationGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::LifeGameplayAbility_eventCanChangeActivationGroup_Parms), Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics
	{
		struct LifeGameplayAbility_eventChangeActivationGroup_Parms
		{
			ELifeAbilityActivationGroup NewGroup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup, METADATA_PARAMS(nullptr, 0) }; // 1562365072
	void Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LifeGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LifeGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "Comment", "// Tries to change the activation group.  Returns true if it successfully changed.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "ChangeActivationGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::LifeGameplayAbility_eventChangeActivationGroup_Parms), Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "Comment", "// Clears the ability's camera mode.  Automatically called if needed when the ability ends.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Clears the ability's camera mode.  Automatically called if needed when the ability ends." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics
	{
		struct LifeGameplayAbility_eventGetControllerFromActorInfo_Parms
		{
			AController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::LifeGameplayAbility_eventGetControllerFromActorInfo_Parms), Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics
	{
		struct LifeGameplayAbility_eventGetHeroComponentFromActorInfo_Parms
		{
			ULifeHeroComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventGetHeroComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULifeHeroComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "GetHeroComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::LifeGameplayAbility_eventGetHeroComponentFromActorInfo_Parms), Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics
	{
		struct LifeGameplayAbility_eventGetLifeAbilitySystemComponentFromActorInfo_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventGetLifeAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ULifeAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "GetLifeAbilitySystemComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::LifeGameplayAbility_eventGetLifeAbilitySystemComponentFromActorInfo_Parms), Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics
	{
		struct LifeGameplayAbility_eventGetLifeCharacterFromActorInfo_Parms
		{
			ALifeCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventGetLifeCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALifeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "GetLifeCharacterFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::LifeGameplayAbility_eventGetLifeCharacterFromActorInfo_Parms), Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics
	{
		struct LifeGameplayAbility_eventGetLifePlayerControllerFromActorInfo_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventGetLifePlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ALifePlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "GetLifePlayerControllerFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::LifeGameplayAbility_eventGetLifePlayerControllerFromActorInfo_Parms), Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the ability fails to activate\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Called when the ability fails to activate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", nullptr, nullptr, sizeof(LifeGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics
	{
		struct LifeGameplayAbility_eventSetCameraMode_Parms
		{
			TSubclassOf<ULifeCameraMode>  CameraMode;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_ULifeCameraMode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "Comment", "// Sets the ability's camera mode.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Sets the ability's camera mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::LifeGameplayAbility_eventSetCameraMode_Parms), Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameplayAbility);
	UClass* Z_Construct_UClass_ULifeGameplayAbility_NoRegister()
	{
		return ULifeGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalCosts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 1037864847
		{ &Z_Construct_UFunction_ULifeGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 2588920105
		{ &Z_Construct_UFunction_ULifeGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 2005523643
		{ &Z_Construct_UFunction_ULifeGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 2450171608
		{ &Z_Construct_UFunction_ULifeGameplayAbility_GetHeroComponentFromActorInfo, "GetHeroComponentFromActorInfo" }, // 1111555451
		{ &Z_Construct_UFunction_ULifeGameplayAbility_GetLifeAbilitySystemComponentFromActorInfo, "GetLifeAbilitySystemComponentFromActorInfo" }, // 2772929010
		{ &Z_Construct_UFunction_ULifeGameplayAbility_GetLifeCharacterFromActorInfo, "GetLifeCharacterFromActorInfo" }, // 2351925161
		{ &Z_Construct_UFunction_ULifeGameplayAbility_GetLifePlayerControllerFromActorInfo, "GetLifePlayerControllerFromActorInfo" }, // 2580086618
		{ &Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 2210355148
		{ &Z_Construct_UFunction_ULifeGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 134970653
		{ &Z_Construct_UFunction_ULifeGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 791759484
		{ &Z_Construct_UFunction_ULifeGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 3049714683
		{ &Z_Construct_UFunction_ULifeGameplayAbility_SetCameraMode, "SetCameraMode" }, // 3358645168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeGameplayAbility\n *\n *\x09The base gameplay ability class used by this project.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base gameplay ability class used by this project." },
		{ "ToolTip", "ULifeGameplayAbility\n\n    The base gameplay ability class used by this project." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Life|Ability Activation" },
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Defines how this ability is meant to activate." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayAbility, ActivationPolicy), Z_Construct_UEnum_ElementLife_ELifeAbilityActivationPolicy, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy_MetaData)) }; // 1640535005
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Life|Ability Activation" },
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayAbility, ActivationGroup), Z_Construct_UEnum_ElementLife_ELifeAbilityActivationGroup, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup_MetaData)) }; // 1562365072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULifeAbilityCost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to simple error messages\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to simple error messages" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_MetaData)) }; // 802167388
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_MetaData)) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_ActivationGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_AdditionalCosts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameplayAbility_Statics::ClassParams = {
		&ULifeGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_ULifeGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameplayAbility.OuterSingleton, Z_Construct_UClass_ULifeGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameplayAbility.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameplayAbility>()
	{
		return ULifeGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameplayAbility);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::EnumInfo[] = {
		{ ELifeAbilityActivationPolicy_StaticEnum, TEXT("ELifeAbilityActivationPolicy"), &Z_Registration_Info_UEnum_ELifeAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1640535005U) },
		{ ELifeAbilityActivationGroup_StaticEnum, TEXT("ELifeAbilityActivationGroup"), &Z_Registration_Info_UEnum_ELifeAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1562365072U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ScriptStructInfo[] = {
		{ FLifeAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("LifeAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_LifeAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeAbilityMontageFailureMessage), 227974346U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameplayAbility, ULifeGameplayAbility::StaticClass, TEXT("ULifeGameplayAbility"), &Z_Registration_Info_UClass_ULifeGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameplayAbility), 2475542547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_1162358414(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
