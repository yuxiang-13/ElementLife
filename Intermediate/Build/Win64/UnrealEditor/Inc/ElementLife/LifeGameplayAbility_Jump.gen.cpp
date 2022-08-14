// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/AbilitySystem/Abilities/LifeGameplayAbility_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeGameplayAbility_Jump() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_Jump_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility_Jump();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	DEFINE_FUNCTION(ULifeGameplayAbility_Jump::execCharacterJumpStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterJumpStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULifeGameplayAbility_Jump::execCharacterJumpStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterJumpStart();
		P_NATIVE_END;
	}
	void ULifeGameplayAbility_Jump::StaticRegisterNativesULifeGameplayAbility_Jump()
	{
		UClass* Class = ULifeGameplayAbility_Jump::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CharacterJumpStart", &ULifeGameplayAbility_Jump::execCharacterJumpStart },
			{ "CharacterJumpStop", &ULifeGameplayAbility_Jump::execCharacterJumpStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Jump.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility_Jump, nullptr, "CharacterJumpStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Jump.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeGameplayAbility_Jump, nullptr, "CharacterJumpStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeGameplayAbility_Jump);
	UClass* Z_Construct_UClass_ULifeGameplayAbility_Jump_NoRegister()
	{
		return ULifeGameplayAbility_Jump::StaticClass();
	}
	struct Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULifeGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStart, "CharacterJumpStart" }, // 50693084
		{ &Z_Construct_UFunction_ULifeGameplayAbility_Jump_CharacterJumpStop, "CharacterJumpStop" }, // 4285902184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeGameplayAbility_Jump\n *\n *\x09Gameplay ability used for character jumping.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LifeGameplayAbility_Jump.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LifeGameplayAbility_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeGameplayAbility_Jump\n\n    Gameplay ability used for character jumping." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeGameplayAbility_Jump>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::ClassParams = {
		&ULifeGameplayAbility_Jump::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeGameplayAbility_Jump()
	{
		if (!Z_Registration_Info_UClass_ULifeGameplayAbility_Jump.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeGameplayAbility_Jump.OuterSingleton, Z_Construct_UClass_ULifeGameplayAbility_Jump_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeGameplayAbility_Jump.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeGameplayAbility_Jump>()
	{
		return ULifeGameplayAbility_Jump::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeGameplayAbility_Jump);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Jump_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Jump_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeGameplayAbility_Jump, ULifeGameplayAbility_Jump::StaticClass, TEXT("ULifeGameplayAbility_Jump"), &Z_Registration_Info_UClass_ULifeGameplayAbility_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeGameplayAbility_Jump), 1986339926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Jump_h_1802760357(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_AbilitySystem_Abilities_LifeGameplayAbility_Jump_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
