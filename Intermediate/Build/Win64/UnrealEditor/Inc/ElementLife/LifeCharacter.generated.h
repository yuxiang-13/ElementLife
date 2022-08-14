// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULifeAbilitySystemComponent;
class ALifePlayerState;
class ALifePlayerController;
#ifdef ELEMENTLIFE_LifeCharacter_generated_h
#error "LifeCharacter.generated.h already included, missing '#pragma once' in LifeCharacter.h"
#endif
#define ELEMENTLIFE_LifeCharacter_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLifeReplicatedAcceleration_Statics; \
	ELEMENTLIFE_API static class UScriptStruct* StaticStruct();


template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<struct FLifeReplicatedAcceleration>();

#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerState); \
	DECLARE_FUNCTION(execGetLifePlayerController);


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerState); \
	DECLARE_FUNCTION(execGetLifePlayerController);


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_EVENT_PARMS
#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifeCharacter(); \
	friend struct Z_Construct_UClass_ALifeCharacter_Statics; \
public: \
	DECLARE_CLASS(ALifeCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALifeCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedAcceleration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_INCLASS \
private: \
	static void StaticRegisterNativesALifeCharacter(); \
	friend struct Z_Construct_UClass_ALifeCharacter_Statics; \
public: \
	DECLARE_CLASS(ALifeCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALifeCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedAcceleration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifeCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeCharacter(ALifeCharacter&&); \
	NO_API ALifeCharacter(const ALifeCharacter&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeCharacter(ALifeCharacter&&); \
	NO_API ALifeCharacter(const ALifeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeCharacter)


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_49_PROLOG \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
