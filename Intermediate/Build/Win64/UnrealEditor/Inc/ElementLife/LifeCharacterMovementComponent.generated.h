// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLifeCharacterGroundInfo;
#ifdef ELEMENTLIFE_LifeCharacterMovementComponent_generated_h
#error "LifeCharacterMovementComponent.generated.h already included, missing '#pragma once' in LifeCharacterMovementComponent.h"
#endif
#define ELEMENTLIFE_LifeCharacterMovementComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics; \
	ELEMENTLIFE_API static class UScriptStruct* StaticStruct();


template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<struct FLifeCharacterGroundInfo>();

#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_ULifeCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCharacterMovementComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesULifeCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_ULifeCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCharacterMovementComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCharacterMovementComponent(ULifeCharacterMovementComponent&&); \
	NO_API ULifeCharacterMovementComponent(const ULifeCharacterMovementComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCharacterMovementComponent(ULifeCharacterMovementComponent&&); \
	NO_API ULifeCharacterMovementComponent(const ULifeCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCharacterMovementComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_42_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
