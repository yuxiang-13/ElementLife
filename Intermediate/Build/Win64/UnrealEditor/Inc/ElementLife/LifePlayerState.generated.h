// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLifeVerbMessage;
struct FGameplayTag;
class ULifeAbilitySystemComponent;
class ALifePlayerController;
#ifdef ELEMENTLIFE_LifePlayerState_generated_h
#error "LifePlayerState.generated.h already included, missing '#pragma once' in LifePlayerState.h"
#endif
#define ELEMENTLIFE_LifePlayerState_generated_h

#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_RPC_WRAPPERS \
	virtual void ClientBroadcastMessage_Implementation(const FLifeVerbMessage Message); \
 \
	DECLARE_FUNCTION(execOnRep_MySquadID); \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execClientBroadcastMessage); \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execGetSquadId); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerController);


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientBroadcastMessage_Implementation(const FLifeVerbMessage Message); \
 \
	DECLARE_FUNCTION(execOnRep_MySquadID); \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execClientBroadcastMessage); \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execGetSquadId); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerController);


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_EVENT_PARMS \
	struct LifePlayerState_eventClientBroadcastMessage_Parms \
	{ \
		FLifeVerbMessage Message; \
	};


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifePlayerState(); \
	friend struct Z_Construct_UClass_ALifePlayerState_Statics; \
public: \
	DECLARE_CLASS(ALifePlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifePlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ALifePlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		MyPlayerConnectionType, \
		MySquadID, \
		StatTags, \
		NETFIELD_REP_END=StatTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_INCLASS \
private: \
	static void StaticRegisterNativesALifePlayerState(); \
	friend struct Z_Construct_UClass_ALifePlayerState_Statics; \
public: \
	DECLARE_CLASS(ALifePlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifePlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ALifePlayerState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		MyPlayerConnectionType, \
		MySquadID, \
		StatTags, \
		NETFIELD_REP_END=StatTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifePlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifePlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifePlayerState(ALifePlayerState&&); \
	NO_API ALifePlayerState(const ALifePlayerState&); \
public:


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifePlayerState(ALifePlayerState&&); \
	NO_API ALifePlayerState(const ALifePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifePlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifePlayerState)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_44_PROLOG \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_INCLASS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Player_LifePlayerState_h


#define FOREACH_ENUM_ELIFEPLAYERCONNECTIONTYPE(op) \
	op(ELifePlayerConnectionType::Player) \
	op(ELifePlayerConnectionType::LiveSpectator) \
	op(ELifePlayerConnectionType::ReplaySpectator) \
	op(ELifePlayerConnectionType::InactivePlayer) 

enum class ELifePlayerConnectionType : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifePlayerConnectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
