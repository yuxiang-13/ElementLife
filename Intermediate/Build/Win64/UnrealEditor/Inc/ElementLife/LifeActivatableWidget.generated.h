// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeActivatableWidget_generated_h
#error "LifeActivatableWidget.generated.h already included, missing '#pragma once' in LifeActivatableWidget.h"
#endif
#define ELEMENTLIFE_LifeActivatableWidget_generated_h

#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeActivatableWidget(); \
	friend struct Z_Construct_UClass_ULifeActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(ULifeActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeActivatableWidget)


#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesULifeActivatableWidget(); \
	friend struct Z_Construct_UClass_ULifeActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(ULifeActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeActivatableWidget)


#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeActivatableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeActivatableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeActivatableWidget(ULifeActivatableWidget&&); \
	NO_API ULifeActivatableWidget(const ULifeActivatableWidget&); \
public:


#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeActivatableWidget(ULifeActivatableWidget&&); \
	NO_API ULifeActivatableWidget(const ULifeActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeActivatableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeActivatableWidget)


#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_22_PROLOG
#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_INCLASS \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_UI_LifeActivatableWidget_h


#define FOREACH_ENUM_ELIFEWIDGETINPUTMODE(op) \
	op(ELifeWidgetInputMode::Default) \
	op(ELifeWidgetInputMode::GameAndMenu) \
	op(ELifeWidgetInputMode::Game) \
	op(ELifeWidgetInputMode::Menu) 

enum class ELifeWidgetInputMode : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeWidgetInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
