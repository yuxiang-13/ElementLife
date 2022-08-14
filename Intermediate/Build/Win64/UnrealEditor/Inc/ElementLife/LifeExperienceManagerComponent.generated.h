// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeExperienceManagerComponent_generated_h
#error "LifeExperienceManagerComponent.generated.h already included, missing '#pragma once' in LifeExperienceManagerComponent.h"
#endif
#define ELEMENTLIFE_LifeExperienceManagerComponent_generated_h

#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_SPARSE_DATA
#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentExperience);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentExperience);


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULifeExperienceManagerComponent(); \
	friend struct Z_Construct_UClass_ULifeExperienceManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeExperienceManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULifeExperienceManagerComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExperience=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentExperience	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesULifeExperienceManagerComponent(); \
	friend struct Z_Construct_UClass_ULifeExperienceManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULifeExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElementLife"), NO_API) \
	DECLARE_SERIALIZER(ULifeExperienceManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULifeExperienceManagerComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExperience=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentExperience	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULifeExperienceManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeExperienceManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeExperienceManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeExperienceManagerComponent(ULifeExperienceManagerComponent&&); \
	NO_API ULifeExperienceManagerComponent(const ULifeExperienceManagerComponent&); \
public:


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULifeExperienceManagerComponent(ULifeExperienceManagerComponent&&); \
	NO_API ULifeExperienceManagerComponent(const ULifeExperienceManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULifeExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULifeExperienceManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULifeExperienceManagerComponent)


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_27_PROLOG
#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_RPC_WRAPPERS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_INCLASS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_SPARSE_DATA \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEMENTLIFE_API UClass* StaticClass<class ULifeExperienceManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_GameModes_LifeExperienceManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
