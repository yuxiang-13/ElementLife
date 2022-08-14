// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef ELEMENTLIFE_LifeGameMode_generated_h
#error "LifeGameMode.generated.h already included, missing '#pragma once' in LifeGameMode.h"
#endif
#define ELEMENTLIFE_LifeGameMode_generated_h

#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALifeGameMode(); \
	friend struct Z_Construct_UClass_ALifeGameMode_Statics; \
public: \
	DECLARE_CLASS(ALifeGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeGameMode)


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesALifeGameMode(); \
	friend struct Z_Construct_UClass_ALifeGameMode_Statics; \
public: \
	DECLARE_CLASS(ALifeGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ALifeGameMode)


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALifeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeGameMode(ALifeGameMode&&); \
	NO_API ALifeGameMode(const ALifeGameMode&); \
public:


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALifeGameMode(ALifeGameMode&&); \
	NO_API ALifeGameMode(const ALifeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALifeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALifeGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALifeGameMode)


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_25_PROLOG
#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_INCLASS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ALifeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_GameModes_LifeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
