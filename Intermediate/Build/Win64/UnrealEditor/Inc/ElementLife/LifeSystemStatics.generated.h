// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
struct FLinearColor;
class UObject;
struct FPrimaryAssetId;
#ifdef ELEMENTLIFE_LifeSystemStatics_generated_h
#error "LifeSystemStatics.generated.h already included, missing '#pragma once' in LifeSystemStatics.h"
#endif
#define ELEMENTLIFE_LifeSystemStatics_generated_h

#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromUserFacingExperienceName); \
	DECLARE_FUNCTION(execGetTypedSoftObjectReferenceFromPrimaryAssetId);


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromUserFacingExperienceName); \
	DECLARE_FUNCTION(execGetTypedSoftObjectReferenceFromPrimaryAssetId);


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeSystemStatics(); \
	friend struct Z_Construct_UClass_ULifeSystemStatics_Statics; \
public: \
	DECLARE_CLASS(ULifeSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeSystemStatics)


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULifeSystemStatics(); \
	friend struct Z_Construct_UClass_ULifeSystemStatics_Statics; \
public: \
	DECLARE_CLASS(ULifeSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeSystemStatics)


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeSystemStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeSystemStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeSystemStatics(ULifeSystemStatics&&); \
	NO_API ULifeSystemStatics(const ULifeSystemStatics&); \
public:


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeSystemStatics(ULifeSystemStatics&&); \
	NO_API ULifeSystemStatics(const ULifeSystemStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeSystemStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeSystemStatics)


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_12_PROLOG
#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_INCLASS \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeSystemStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_System_LifeSystemStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
