// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeAbilitySourceInterface_generated_h
#error "LifeAbilitySourceInterface.generated.h already included, missing '#pragma once' in LifeAbilitySourceInterface.h"
#endif
#define ELEMENTLIFE_LifeAbilitySourceInterface_generated_h

#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeAbilitySourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeAbilitySourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeAbilitySourceInterface(ULifeAbilitySourceInterface&&); \
	NO_API ULifeAbilitySourceInterface(const ULifeAbilitySourceInterface&); \
public:


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeAbilitySourceInterface(ULifeAbilitySourceInterface&&); \
	NO_API ULifeAbilitySourceInterface(const ULifeAbilitySourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeAbilitySourceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeAbilitySourceInterface)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULifeAbilitySourceInterface(); \
	friend struct Z_Construct_UClass_ULifeAbilitySourceInterface_Statics; \
public: \
	DECLARE_CLASS(ULifeAbilitySourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeAbilitySourceInterface)


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILifeAbilitySourceInterface() {} \
public: \
	typedef ULifeAbilitySourceInterface UClassType; \
	typedef ILifeAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~ILifeAbilitySourceInterface() {} \
public: \
	typedef ULifeAbilitySourceInterface UClassType; \
	typedef ILifeAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_15_PROLOG
#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeAbilitySourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_AbilitySystem_LifeAbilitySourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
