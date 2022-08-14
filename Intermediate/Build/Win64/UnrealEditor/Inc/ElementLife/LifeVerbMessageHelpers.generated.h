// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayCueParameters;
struct FLifeVerbMessage;
class UObject;
class APlayerController;
class APlayerState;
#ifdef ELEMENTLIFE_LifeVerbMessageHelpers_generated_h
#error "LifeVerbMessageHelpers.generated.h already included, missing '#pragma once' in LifeVerbMessageHelpers.h"
#endif
#define ELEMENTLIFE_LifeVerbMessageHelpers_generated_h

#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCueParametersToVerbMessage); \
	DECLARE_FUNCTION(execVerbMessageToCueParameters); \
	DECLARE_FUNCTION(execGetPlayerControllerFromObject); \
	DECLARE_FUNCTION(execGetPlayerStateFromObject);


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCueParametersToVerbMessage); \
	DECLARE_FUNCTION(execVerbMessageToCueParameters); \
	DECLARE_FUNCTION(execGetPlayerControllerFromObject); \
	DECLARE_FUNCTION(execGetPlayerStateFromObject);


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeVerbMessageHelpers(); \
	friend struct Z_Construct_UClass_ULifeVerbMessageHelpers_Statics; \
public: \
	DECLARE_CLASS(ULifeVerbMessageHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeVerbMessageHelpers)


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULifeVerbMessageHelpers(); \
	friend struct Z_Construct_UClass_ULifeVerbMessageHelpers_Statics; \
public: \
	DECLARE_CLASS(ULifeVerbMessageHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeVerbMessageHelpers)


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeVerbMessageHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeVerbMessageHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeVerbMessageHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeVerbMessageHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeVerbMessageHelpers(ULifeVerbMessageHelpers&&); \
	NO_API ULifeVerbMessageHelpers(const ULifeVerbMessageHelpers&); \
public:


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeVerbMessageHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeVerbMessageHelpers(ULifeVerbMessageHelpers&&); \
	NO_API ULifeVerbMessageHelpers(const ULifeVerbMessageHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeVerbMessageHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeVerbMessageHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeVerbMessageHelpers)


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_18_PROLOG
#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_INCLASS \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeVerbMessageHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Messages_LifeVerbMessageHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
