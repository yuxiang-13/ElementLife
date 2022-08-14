// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLifeVerbMessage;
class ULifeAbilitySystemComponent;
#ifdef ELEMENTLIFE_LifeGameState_generated_h
#error "LifeGameState.generated.h already included, missing '#pragma once' in LifeGameState.h"
#endif
#define ELEMENTLIFE_LifeGameState_generated_h

#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_RPC_WRAPPERS \
	virtual void MulticastReliableMessageToClients_Implementation(const FLifeVerbMessage Message); \
	virtual void MulticastMessageToClients_Implementation(const FLifeVerbMessage Message); \
 \
	DECLARE_FUNCTION(execMulticastReliableMessageToClients); \
	DECLARE_FUNCTION(execMulticastMessageToClients); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastReliableMessageToClients_Implementation(const FLifeVerbMessage Message); \
	virtual void MulticastMessageToClients_Implementation(const FLifeVerbMessage Message); \
 \
	DECLARE_FUNCTION(execMulticastReliableMessageToClients); \
	DECLARE_FUNCTION(execMulticastMessageToClients); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_EVENT_PARMS \
	struct LifeGameState_eventMulticastMessageToClients_Parms \
	{ \
		FLifeVerbMessage Message; \
	}; \
	struct LifeGameState_eventMulticastReliableMessageToClients_Parms \
	{ \
		FLifeVerbMessage Message; \
	};


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifeGameState(); \
	friend struct Z_Construct_UClass_ALifeGameState_Statics; \
public: \
	DECLARE_CLASS(ALifeGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ALifeGameState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerFPS=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerFPS	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_INCLASS \
private: \
	static void StaticRegisterNativesALifeGameState(); \
	friend struct Z_Construct_UClass_ALifeGameState_Statics; \
public: \
	DECLARE_CLASS(ALifeGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ALifeGameState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerFPS=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerFPS	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifeGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeGameState(ALifeGameState&&); \
	NO_API ALifeGameState(const ALifeGameState&); \
public:


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeGameState(ALifeGameState&&); \
	NO_API ALifeGameState(const ALifeGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeGameState)


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_21_PROLOG \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_INCLASS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifeGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_GameModes_LifeGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
