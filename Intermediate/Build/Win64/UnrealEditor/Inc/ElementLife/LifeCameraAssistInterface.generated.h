// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeCameraAssistInterface_generated_h
#error "LifeCameraAssistInterface.generated.h already included, missing '#pragma once' in LifeCameraAssistInterface.h"
#endif
#define ELEMENTLIFE_LifeCameraAssistInterface_generated_h

#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCameraAssistInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCameraAssistInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCameraAssistInterface(ULifeCameraAssistInterface&&); \
	NO_API ULifeCameraAssistInterface(const ULifeCameraAssistInterface&); \
public:


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeCameraAssistInterface(ULifeCameraAssistInterface&&); \
	NO_API ULifeCameraAssistInterface(const ULifeCameraAssistInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeCameraAssistInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeCameraAssistInterface)


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULifeCameraAssistInterface(); \
	friend struct Z_Construct_UClass_ULifeCameraAssistInterface_Statics; \
public: \
	DECLARE_CLASS(ULifeCameraAssistInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeCameraAssistInterface)


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILifeCameraAssistInterface() {} \
public: \
	typedef ULifeCameraAssistInterface UClassType; \
	typedef ILifeCameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ILifeCameraAssistInterface() {} \
public: \
	typedef ULifeCameraAssistInterface UClassType; \
	typedef ILifeCameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_11_PROLOG
#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeCameraAssistInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Camera_LifeCameraAssistInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
