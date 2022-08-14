// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULifeHeroComponent;
#ifdef ELEMENTLIFE_LifeHeroComponent_generated_h
#error "LifeHeroComponent.generated.h already included, missing '#pragma once' in LifeHeroComponent.h"
#endif
#define ELEMENTLIFE_LifeHeroComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindHeroComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindHeroComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeHeroComponent(); \
	friend struct Z_Construct_UClass_ULifeHeroComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeHeroComponent, ULifePawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHeroComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULifeHeroComponent(); \
	friend struct Z_Construct_UClass_ULifeHeroComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeHeroComponent, ULifePawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeHeroComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeHeroComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeHeroComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHeroComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHeroComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHeroComponent(ULifeHeroComponent&&); \
	NO_API ULifeHeroComponent(const ULifeHeroComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeHeroComponent(ULifeHeroComponent&&); \
	NO_API ULifeHeroComponent(const ULifeHeroComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeHeroComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeHeroComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeHeroComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_24_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeHeroComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifeHeroComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
