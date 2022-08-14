// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSwapAudioOutputResult;
#ifdef ELEMENTLIFE_LifeLocalPlayer_generated_h
#error "LifeLocalPlayer.generated.h already included, missing '#pragma once' in LifeLocalPlayer.h"
#endif
#define ELEMENTLIFE_LifeLocalPlayer_generated_h

#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap);


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap);


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeLocalPlayer(); \
	friend struct Z_Construct_UClass_ULifeLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULifeLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeLocalPlayer)


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULifeLocalPlayer(); \
	friend struct Z_Construct_UClass_ULifeLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULifeLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeLocalPlayer)


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeLocalPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeLocalPlayer(ULifeLocalPlayer&&); \
	NO_API ULifeLocalPlayer(const ULifeLocalPlayer&); \
public:


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeLocalPlayer(ULifeLocalPlayer&&); \
	NO_API ULifeLocalPlayer(const ULifeLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULifeLocalPlayer)


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_15_PROLOG
#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_INCLASS \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Player_LifeLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
