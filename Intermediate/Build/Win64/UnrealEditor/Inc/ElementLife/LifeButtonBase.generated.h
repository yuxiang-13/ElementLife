// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeButtonBase_generated_h
#error "LifeButtonBase.generated.h already included, missing '#pragma once' in LifeButtonBase.h"
#endif
#define ELEMENTLIFE_LifeButtonBase_generated_h

#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetButtonText);


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetButtonText);


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_EVENT_PARMS \
	struct LifeButtonBase_eventUpdateButtonText_Parms \
	{ \
		FText InText; \
	};


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeButtonBase(); \
	friend struct Z_Construct_UClass_ULifeButtonBase_Statics; \
public: \
	DECLARE_CLASS(ULifeButtonBase, UCommonButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeButtonBase)


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULifeButtonBase(); \
	friend struct Z_Construct_UClass_ULifeButtonBase_Statics; \
public: \
	DECLARE_CLASS(ULifeButtonBase, UCommonButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeButtonBase)


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeButtonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeButtonBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeButtonBase(ULifeButtonBase&&); \
	NO_API ULifeButtonBase(const ULifeButtonBase&); \
public:


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeButtonBase(ULifeButtonBase&&); \
	NO_API ULifeButtonBase(const ULifeButtonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeButtonBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeButtonBase)


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_9_PROLOG \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_INCLASS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeButtonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_UI_Foundation_LifeButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
