// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULifeCameraComponent;
#ifdef ELEMENTLIFE_LifeCameraComponent_generated_h
#error "LifeCameraComponent.generated.h already included, missing '#pragma once' in LifeCameraComponent.h"
#endif
#define ELEMENTLIFE_LifeCameraComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeCameraComponent(); \
	friend struct Z_Construct_UClass_ULifeCameraComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCameraComponent)


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULifeCameraComponent(); \
	friend struct Z_Construct_UClass_ULifeCameraComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCameraComponent)


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCameraComponent(ULifeCameraComponent&&); \
	NO_API ULifeCameraComponent(const ULifeCameraComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCameraComponent(ULifeCameraComponent&&); \
	NO_API ULifeCameraComponent(const ULifeCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCameraComponent)


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_24_PROLOG
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_INCLASS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Camera_LifeCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
