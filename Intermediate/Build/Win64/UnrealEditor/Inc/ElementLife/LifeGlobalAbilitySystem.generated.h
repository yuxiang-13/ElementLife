// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
class UGameplayAbility;
#ifdef ELEMENTLIFE_LifeGlobalAbilitySystem_generated_h
#error "LifeGlobalAbilitySystem.generated.h already included, missing '#pragma once' in LifeGlobalAbilitySystem.h"
#endif
#define ELEMENTLIFE_LifeGlobalAbilitySystem_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics; \
	ELEMENTLIFE_API static class UScriptStruct* StaticStruct();


template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<struct FGlobalAppliedAbilityList>();

#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics; \
	ELEMENTLIFE_API static class UScriptStruct* StaticStruct();


template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<struct FGlobalAppliedEffectList>();

#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveEffectFromAll); \
	DECLARE_FUNCTION(execRemoveAbilityFromAll); \
	DECLARE_FUNCTION(execApplyEffectToAll); \
	DECLARE_FUNCTION(execApplyAbilityToAll);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveEffectFromAll); \
	DECLARE_FUNCTION(execRemoveAbilityFromAll); \
	DECLARE_FUNCTION(execApplyEffectToAll); \
	DECLARE_FUNCTION(execApplyAbilityToAll);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeGlobalAbilitySystem(); \
	friend struct Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics; \
public: \
	DECLARE_CLASS(ULifeGlobalAbilitySystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGlobalAbilitySystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_INCLASS \
private: \
	static void StaticRegisterNativesULifeGlobalAbilitySystem(); \
	friend struct Z_Construct_UClass_ULifeGlobalAbilitySystem_Statics; \
public: \
	DECLARE_CLASS(ULifeGlobalAbilitySystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGlobalAbilitySystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeGlobalAbilitySystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeGlobalAbilitySystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGlobalAbilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGlobalAbilitySystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGlobalAbilitySystem(ULifeGlobalAbilitySystem&&); \
	NO_API ULifeGlobalAbilitySystem(const ULifeGlobalAbilitySystem&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGlobalAbilitySystem(ULifeGlobalAbilitySystem&&); \
	NO_API ULifeGlobalAbilitySystem(const ULifeGlobalAbilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGlobalAbilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGlobalAbilitySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeGlobalAbilitySystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_45_PROLOG
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeGlobalAbilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_LifeGlobalAbilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
