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
#ifdef ELEMENTLIFE_LifeHealthSet_generated_h
#error "LifeHealthSet.generated.h already included, missing '#pragma once' in LifeHealthSet.h"
#endif
#define ELEMENTLIFE_LifeHealthSet_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeHealthSet(); \
	friend struct Z_Construct_UClass_ULifeHealthSet_Statics; \
public: \
	DECLARE_CLASS(ULifeHealthSet, ULifeAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHealthSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULifeHealthSet) \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULifeHealthSet(); \
	friend struct Z_Construct_UClass_ULifeHealthSet_Statics; \
public: \
	DECLARE_CLASS(ULifeHealthSet, ULifeAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHealthSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULifeHealthSet) \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeHealthSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeHealthSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHealthSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHealthSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHealthSet(ULifeHealthSet&&); \
	NO_API ULifeHealthSet(const ULifeHealthSet&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHealthSet(ULifeHealthSet&&); \
	NO_API ULifeHealthSet(const ULifeHealthSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHealthSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHealthSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeHealthSet)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_25_PROLOG
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeHealthSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_Attributes_LifeHealthSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
