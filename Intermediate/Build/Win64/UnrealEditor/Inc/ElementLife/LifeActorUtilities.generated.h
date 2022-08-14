// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EBlueprintExposedNetMode : uint8;
#ifdef ELEMENTLIFE_LifeActorUtilities_generated_h
#error "LifeActorUtilities.generated.h already included, missing '#pragma once' in LifeActorUtilities.h"
#endif
#define ELEMENTLIFE_LifeActorUtilities_generated_h

#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchOnNetMode);


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchOnNetMode);


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeActorUtilities(); \
	friend struct Z_Construct_UClass_ULifeActorUtilities_Statics; \
public: \
	DECLARE_CLASS(ULifeActorUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeActorUtilities)


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_INCLASS \
private: \
	static void StaticRegisterNativesULifeActorUtilities(); \
	friend struct Z_Construct_UClass_ULifeActorUtilities_Statics; \
public: \
	DECLARE_CLASS(ULifeActorUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeActorUtilities)


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeActorUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeActorUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeActorUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeActorUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeActorUtilities(ULifeActorUtilities&&); \
	NO_API ULifeActorUtilities(const ULifeActorUtilities&); \
public:


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeActorUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeActorUtilities(ULifeActorUtilities&&); \
	NO_API ULifeActorUtilities(const ULifeActorUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeActorUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeActorUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeActorUtilities)


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_29_PROLOG
#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_INCLASS \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeActorUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h


#define FOREACH_ENUM_EBLUEPRINTEXPOSEDNETMODE(op) \
	op(EBlueprintExposedNetMode::Standalone) \
	op(EBlueprintExposedNetMode::DedicatedServer) \
	op(EBlueprintExposedNetMode::ListenServer) \
	op(EBlueprintExposedNetMode::Client) 

enum class EBlueprintExposedNetMode : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<EBlueprintExposedNetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
