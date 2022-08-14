// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULifeGamePhaseAbility;
struct FGameplayTag;
enum class EPhaseTagMatchType : uint8;
#ifdef ELEMENTLIFE_LifeGamePhaseSubsystem_generated_h
#error "LifeGamePhaseSubsystem.generated.h already included, missing '#pragma once' in LifeGamePhaseSubsystem.h"
#endif
#define ELEMENTLIFE_LifeGamePhaseSubsystem_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_13_DELEGATE \
struct _Script_ElementLife_eventLifeGamePhaseDynamicDelegate_Parms \
{ \
	const ULifeGamePhaseAbility* Phase; \
}; \
static inline void FLifeGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& LifeGamePhaseDynamicDelegate, const ULifeGamePhaseAbility* Phase) \
{ \
	_Script_ElementLife_eventLifeGamePhaseDynamicDelegate_Parms Parms; \
	Parms.Phase=Phase; \
	LifeGamePhaseDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_16_DELEGATE \
struct _Script_ElementLife_eventLifeGamePhaseTagDynamicDelegate_Parms \
{ \
	FGameplayTag PhaseTag; \
}; \
static inline void FLifeGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& LifeGamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag) \
{ \
	_Script_ElementLife_eventLifeGamePhaseTagDynamicDelegate_Parms Parms; \
	Parms.PhaseTag=PhaseTag; \
	LifeGamePhaseTagDynamicDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase); \
	DECLARE_FUNCTION(execIsPhaseActive);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase); \
	DECLARE_FUNCTION(execIsPhaseActive);


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeGamePhaseSubsystem(); \
	friend struct Z_Construct_UClass_ULifeGamePhaseSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULifeGamePhaseSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGamePhaseSubsystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_INCLASS \
private: \
	static void StaticRegisterNativesULifeGamePhaseSubsystem(); \
	friend struct Z_Construct_UClass_ULifeGamePhaseSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULifeGamePhaseSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeGamePhaseSubsystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeGamePhaseSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeGamePhaseSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGamePhaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGamePhaseSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGamePhaseSubsystem(ULifeGamePhaseSubsystem&&); \
	NO_API ULifeGamePhaseSubsystem(const ULifeGamePhaseSubsystem&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeGamePhaseSubsystem(ULifeGamePhaseSubsystem&&); \
	NO_API ULifeGamePhaseSubsystem(const ULifeGamePhaseSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeGamePhaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeGamePhaseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeGamePhaseSubsystem)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_34_PROLOG
#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_INCLASS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeGamePhaseSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_Phases_LifeGamePhaseSubsystem_h


#define FOREACH_ENUM_EPHASETAGMATCHTYPE(op) \
	op(EPhaseTagMatchType::ExactMatch) \
	op(EPhaseTagMatchType::PartialMatch) 

enum class EPhaseTagMatchType : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<EPhaseTagMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
