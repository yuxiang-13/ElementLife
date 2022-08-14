// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifePawnComponent_generated_h
#error "LifePawnComponent.generated.h already included, missing '#pragma once' in LifePawnComponent.h"
#endif
#define ELEMENTLIFE_LifePawnComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeReadyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeReadyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeReadyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeReadyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeReadyInterface(ULifeReadyInterface&&); \
	NO_API ULifeReadyInterface(const ULifeReadyInterface&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeReadyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeReadyInterface(ULifeReadyInterface&&); \
	NO_API ULifeReadyInterface(const ULifeReadyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeReadyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeReadyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeReadyInterface)


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULifeReadyInterface(); \
	friend struct Z_Construct_UClass_ULifeReadyInterface_Statics; \
public: \
	DECLARE_CLASS(ULifeReadyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeReadyInterface)


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILifeReadyInterface() {} \
public: \
	typedef ULifeReadyInterface UClassType; \
	typedef ILifeReadyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILifeReadyInterface() {} \
public: \
	typedef ULifeReadyInterface UClassType; \
	typedef ILifeReadyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_10_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeReadyInterface>();

#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifePawnComponent(); \
	friend struct Z_Construct_UClass_ULifePawnComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePawnComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePawnComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULifePawnComponent*>(this); }


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesULifePawnComponent(); \
	friend struct Z_Construct_UClass_ULifePawnComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePawnComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePawnComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULifePawnComponent*>(this); }


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifePawnComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePawnComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePawnComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePawnComponent(ULifePawnComponent&&); \
	NO_API ULifePawnComponent(const ULifePawnComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePawnComponent(ULifePawnComponent&&); \
	NO_API ULifePawnComponent(const ULifePawnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePawnComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePawnComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_32_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifePawnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
