// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef ELEMENTLIFE_LifePlayerSpawningManagerComponent_generated_h
#error "LifePlayerSpawningManagerComponent.generated.h already included, missing '#pragma once' in LifePlayerSpawningManagerComponent.h"
#endif
#define ELEMENTLIFE_LifePlayerSpawningManagerComponent_generated_h

#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_RPC_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_EVENT_PARMS \
	struct LifePlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms \
	{ \
		AController* Player; \
		FRotator StartRotation; \
	};


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_CALLBACK_WRAPPERS
#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifePlayerSpawningManagerComponent(); \
	friend struct Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePlayerSpawningManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePlayerSpawningManagerComponent)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULifePlayerSpawningManagerComponent(); \
	friend struct Z_Construct_UClass_ULifePlayerSpawningManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULifePlayerSpawningManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifePlayerSpawningManagerComponent)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifePlayerSpawningManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePlayerSpawningManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePlayerSpawningManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePlayerSpawningManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePlayerSpawningManagerComponent(ULifePlayerSpawningManagerComponent&&); \
	NO_API ULifePlayerSpawningManagerComponent(const ULifePlayerSpawningManagerComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifePlayerSpawningManagerComponent(ULifePlayerSpawningManagerComponent&&); \
	NO_API ULifePlayerSpawningManagerComponent(const ULifePlayerSpawningManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifePlayerSpawningManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifePlayerSpawningManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifePlayerSpawningManagerComponent)


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_20_PROLOG \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_EVENT_PARMS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_INCLASS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_CALLBACK_WRAPPERS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifePlayerSpawningManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Player_LifePlayerSpawningManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
