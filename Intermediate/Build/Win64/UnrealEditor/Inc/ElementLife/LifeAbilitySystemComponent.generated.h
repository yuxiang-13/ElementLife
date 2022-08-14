// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FGameplayTagContainer;
#ifdef ELEMENTLIFE_LifeAbilitySystemComponent_generated_h
#error "LifeAbilitySystemComponent.generated.h already included, missing '#pragma once' in LifeAbilitySystemComponent.h"
#endif
#define ELEMENTLIFE_LifeAbilitySystemComponent_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_RPC_WRAPPERS \
	virtual void ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason); \
 \
	DECLARE_FUNCTION(execClientNotifyAbilityFailed);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason); \
 \
	DECLARE_FUNCTION(execClientNotifyAbilityFailed);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_EVENT_PARMS \
	struct LifeAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms \
	{ \
		const UGameplayAbility* Ability; \
		FGameplayTagContainer FailureReason; \
	};


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_ULifeAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeAbilitySystemComponent)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULifeAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_ULifeAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeAbilitySystemComponent)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeAbilitySystemComponent(ULifeAbilitySystemComponent&&); \
	NO_API ULifeAbilitySystemComponent(const ULifeAbilitySystemComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeAbilitySystemComponent(ULifeAbilitySystemComponent&&); \
	NO_API ULifeAbilitySystemComponent(const ULifeAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeAbilitySystemComponent)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_24_PROLOG \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
