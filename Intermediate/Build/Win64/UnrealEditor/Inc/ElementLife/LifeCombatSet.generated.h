// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ELEMENTLIFE_LifeCombatSet_generated_h
#error "LifeCombatSet.generated.h already included, missing '#pragma once' in LifeCombatSet.h"
#endif
#define ELEMENTLIFE_LifeCombatSet_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_BaseHeal); \
	DECLARE_FUNCTION(execOnRep_BaseDamage);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BaseHeal); \
	DECLARE_FUNCTION(execOnRep_BaseDamage);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeCombatSet(); \
	friend struct Z_Construct_UClass_ULifeCombatSet_Statics; \
public: \
	DECLARE_CLASS(ULifeCombatSet, ULifeAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCombatSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseDamage=NETFIELD_REP_START, \
		BaseHeal, \
		NETFIELD_REP_END=BaseHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULifeCombatSet) \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULifeCombatSet(); \
	friend struct Z_Construct_UClass_ULifeCombatSet_Statics; \
public: \
	DECLARE_CLASS(ULifeCombatSet, ULifeAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCombatSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseDamage=NETFIELD_REP_START, \
		BaseHeal, \
		NETFIELD_REP_END=BaseHeal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULifeCombatSet) \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeCombatSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCombatSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCombatSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCombatSet(ULifeCombatSet&&); \
	NO_API ULifeCombatSet(const ULifeCombatSet&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCombatSet(ULifeCombatSet&&); \
	NO_API ULifeCombatSet(const ULifeCombatSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCombatSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCombatSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeCombatSet)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_16_PROLOG
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeCombatSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeCombatSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
