// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULifeHealthComponent;
enum class ELifeDeathState : uint8;
class ULifeAbilitySystemComponent;
#ifdef ELEMENTLIFE_LifeHealthComponent_generated_h
#error "LifeHealthComponent.generated.h already included, missing '#pragma once' in LifeHealthComponent.h"
#endif
#define ELEMENTLIFE_LifeHealthComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_17_DELEGATE \
struct _Script_ElementLife_eventLifeHealth_DeathEvent_Parms \
{ \
	AActor* OwningActor; \
}; \
static inline void FLifeHealth_DeathEvent_DelegateWrapper(const FMulticastScriptDelegate& LifeHealth_DeathEvent, AActor* OwningActor) \
{ \
	_Script_ElementLife_eventLifeHealth_DeathEvent_Parms Parms; \
	Parms.OwningActor=OwningActor; \
	LifeHealth_DeathEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_18_DELEGATE \
struct _Script_ElementLife_eventLifeHealth_AttributeChanged_Parms \
{ \
	ULifeHealthComponent* HealthComponent; \
	float OldValue; \
	float NewValue; \
	AActor* Instigator; \
}; \
static inline void FLifeHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& LifeHealth_AttributeChanged, ULifeHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator) \
{ \
	_Script_ElementLife_eventLifeHealth_AttributeChanged_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.OldValue=OldValue; \
	Parms.NewValue=NewValue; \
	Parms.Instigator=Instigator; \
	LifeHealth_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DeathState); \
	DECLARE_FUNCTION(execIsDeadOrDying); \
	DECLARE_FUNCTION(execGetDeathState); \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeHealthComponent(); \
	friend struct Z_Construct_UClass_ULifeHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesULifeHealthComponent(); \
	friend struct Z_Construct_UClass_ULifeHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHealthComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DeathState=NETFIELD_REP_START, \
		NETFIELD_REP_END=DeathState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHealthComponent(ULifeHealthComponent&&); \
	NO_API ULifeHealthComponent(const ULifeHealthComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHealthComponent(ULifeHealthComponent&&); \
	NO_API ULifeHealthComponent(const ULifeHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeHealthComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_40_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifeHealthComponent_h


#define FOREACH_ENUM_ELIFEDEATHSTATE(op) \
	op(ELifeDeathState::NotDead) \
	op(ELifeDeathState::DeathStarted) \
	op(ELifeDeathState::DeathFinished) 

enum class ELifeDeathState : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeDeathState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
