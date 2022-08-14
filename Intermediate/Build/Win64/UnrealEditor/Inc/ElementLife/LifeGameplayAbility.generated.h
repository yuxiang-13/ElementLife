// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULifeCameraMode;
enum class ELifeAbilityActivationGroup : uint8;
class ULifeHeroComponent;
class ALifeCharacter;
class AController;
class ALifePlayerController;
class ULifeAbilitySystemComponent;
struct FGameplayTagContainer;
#ifdef ELEMENTLIFE_LifeGameplayAbility_generated_h
#error "LifeGameplayAbility.generated.h already included, missing '#pragma once' in LifeGameplayAbility.h"
#endif
#define ELEMENTLIFE_LifeGameplayAbility_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLifeAbilityMontageFailureMessage_Statics; \
	ELEMENTLIFE_API static class UScriptStruct* StaticStruct();


template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<struct FLifeAbilityMontageFailureMessage>();

#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetLifeCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLifePlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponentFromActorInfo);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetLifeCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLifePlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponentFromActorInfo);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_EVENT_PARMS \
	struct LifeGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms \
	{ \
		FGameplayTagContainer FailedReason; \
	};


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeGameplayAbility(); \
	friend struct Z_Construct_UClass_ULifeGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(ULifeGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGameplayAbility)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_INCLASS \
private: \
	static void StaticRegisterNativesULifeGameplayAbility(); \
	friend struct Z_Construct_UClass_ULifeGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(ULifeGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGameplayAbility)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGameplayAbility(ULifeGameplayAbility&&); \
	NO_API ULifeGameplayAbility(const ULifeGameplayAbility&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGameplayAbility(ULifeGameplayAbility&&); \
	NO_API ULifeGameplayAbility(const ULifeGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeGameplayAbility)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_81_PROLOG \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_h


#define FOREACH_ENUM_ELIFEABILITYACTIVATIONPOLICY(op) \
	op(ELifeAbilityActivationPolicy::OnInputTriggered) \
	op(ELifeAbilityActivationPolicy::WhileInputActive) \
	op(ELifeAbilityActivationPolicy::OnSpawn) 

enum class ELifeAbilityActivationPolicy : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAbilityActivationPolicy>();

#define FOREACH_ENUM_ELIFEABILITYACTIVATIONGROUP(op) \
	op(ELifeAbilityActivationGroup::Independent) \
	op(ELifeAbilityActivationGroup::Exclusive_Replaceable) \
	op(ELifeAbilityActivationGroup::Exclusive_Blocking) 

enum class ELifeAbilityActivationGroup : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAbilityActivationGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
