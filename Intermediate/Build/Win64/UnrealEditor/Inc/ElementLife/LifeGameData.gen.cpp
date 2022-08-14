// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/LifeGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameData() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameData_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	void ULifeGameData::StaticRegisterNativesULifeGameData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameData);
	UClass* Z_Construct_UClass_ULifeGameData_NoRegister()
	{
		return ULifeGameData::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_SetByCaller_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DamageGameplayEffect_SetByCaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealGameplayEffect_SetByCaller_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HealGameplayEffect_SetByCaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTagGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DynamicTagGameplayEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifeGameData\n *\n *\x09Non-mutable data asset that contains global game data.\n */" },
		{ "DisplayName", "Life Game Data" },
		{ "IncludePath", "System/LifeGameData.h" },
		{ "ModuleRelativePath", "System/LifeGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
		{ "ToolTip", "ULifeGameData\n\n    Non-mutable data asset that contains global game data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.\n" },
		{ "DisplayName", "Damage Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LifeGameData.h" },
		{ "ToolTip", "Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULifeGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller = { "DamageGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameData, DamageGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.\n" },
		{ "DisplayName", "Heal Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/LifeGameData.h" },
		{ "ToolTip", "Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULifeGameData_Statics::NewProp_HealGameplayEffect_SetByCaller = { "HealGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameData, HealGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameData_Statics::NewProp_HealGameplayEffect_SetByCaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
		{ "Comment", "// Gameplay effect used to add and remove dynamic tags.\n" },
		{ "ModuleRelativePath", "System/LifeGameData.h" },
		{ "ToolTip", "Gameplay effect used to add and remove dynamic tags." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULifeGameData_Statics::NewProp_DynamicTagGameplayEffect = { "DynamicTagGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeGameData, DynamicTagGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameData_Statics::NewProp_DynamicTagGameplayEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameData_Statics::NewProp_HealGameplayEffect_SetByCaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeGameData_Statics::NewProp_DynamicTagGameplayEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameData_Statics::ClassParams = {
		&ULifeGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameData()
	{
		if (!Z_Registration_Info_UClass_ULifeGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameData.OuterSingleton, Z_Construct_UClass_ULifeGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameData.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameData>()
	{
		return ULifeGameData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameData);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameData, ULifeGameData::StaticClass, TEXT("ULifeGameData"), &Z_Registration_Info_UClass_ULifeGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameData), 223773612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameData_h_1710361854(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
