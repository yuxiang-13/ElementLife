// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ALifeHUD;
class ULifeAbilitySystemComponent;
class ALifePlayerState;
#ifdef ELEMENTLIFE_LifePlayerController_generated_h
#error "LifePlayerController.generated.h already included, missing '#pragma once' in LifePlayerController.h"
#endif
#define ELEMENTLIFE_LifePlayerController_generated_h

#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_RPC_WRAPPERS \
	virtual bool ServerCheatAll_Validate(const FString& ); \
	virtual void ServerCheatAll_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execServerCheatAll); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execGetLifeHUD); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerState);


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCheatAll_Validate(const FString& ); \
	virtual void ServerCheatAll_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
 \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execServerCheatAll); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execGetLifeHUD); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLifePlayerState);


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_EVENT_PARMS \
	struct LifePlayerController_eventServerCheat_Parms \
	{ \
		FString Msg; \
	}; \
	struct LifePlayerController_eventServerCheatAll_Parms \
	{ \
		FString Msg; \
	};


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifePlayerController(); \
	friend struct Z_Construct_UClass_ALifePlayerController_Statics; \
public: \
	DECLARE_CLASS(ALifePlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifePlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ALifePlayerController*>(this); }


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_INCLASS \
private: \
	static void StaticRegisterNativesALifePlayerController(); \
	friend struct Z_Construct_UClass_ALifePlayerController_Statics; \
public: \
	DECLARE_CLASS(ALifePlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifePlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ALifePlayerController*>(this); }


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifePlayerController(ALifePlayerController&&); \
	NO_API ALifePlayerController(const ALifePlayerController&); \
public:


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifePlayerController(ALifePlayerController&&); \
	NO_API ALifePlayerController(const ALifePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifePlayerController)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_22_PROLOG \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_INCLASS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifePlayerController>();

#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifeReplayPlayerController(); \
	friend struct Z_Construct_UClass_ALifeReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALifeReplayPlayerController, ALifePlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeReplayPlayerController)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_INCLASS \
private: \
	static void StaticRegisterNativesALifeReplayPlayerController(); \
	friend struct Z_Construct_UClass_ALifeReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALifeReplayPlayerController, ALifePlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeReplayPlayerController)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifeReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeReplayPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeReplayPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeReplayPlayerController(ALifeReplayPlayerController&&); \
	NO_API ALifeReplayPlayerController(const ALifeReplayPlayerController&); \
public:


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifeReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeReplayPlayerController(ALifeReplayPlayerController&&); \
	NO_API ALifeReplayPlayerController(const ALifeReplayPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeReplayPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeReplayPlayerController)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_127_PROLOG
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_INCLASS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifeReplayPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Player_LifePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
