// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULifeAbilitySystemComponent;
class AActor;
class ULifePawnExtensionComponent;
#ifdef ELEMENTLIFE_LifePawnExtensionComponent_generated_h
#error "LifePawnExtensionComponent.generated.h already included, missing '#pragma once' in LifePawnExtensionComponent.h"
#endif
#define ELEMENTLIFE_LifePawnExtensionComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_14_DELEGATE \
static inline void FLifeDynamicMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& LifeDynamicMulticastDelegate) \
{ \
	LifeDynamicMulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execIsPawnReadyToInitialize); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindPawnExtensionComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execIsPawnReadyToInitialize); \
	DECLARE_FUNCTION(execGetLifeAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindPawnExtensionComponent);


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifePawnExtensionComponent(); \
	friend struct Z_Construct_UClass_ULifePawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePawnExtensionComponent, ULifePawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePawnExtensionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULifePawnExtensionComponent(); \
	friend struct Z_Construct_UClass_ULifePawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePawnExtensionComponent, ULifePawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePawnExtensionComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifePawnExtensionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePawnExtensionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePawnExtensionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePawnExtensionComponent(ULifePawnExtensionComponent&&); \
	NO_API ULifePawnExtensionComponent(const ULifePawnExtensionComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePawnExtensionComponent(ULifePawnExtensionComponent&&); \
	NO_API ULifePawnExtensionComponent(const ULifePawnExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePawnExtensionComponent)


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_23_PROLOG
#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_INCLASS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifePawnExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Character_LifePawnExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
