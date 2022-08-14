// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementLife_init() {}
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature();
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeGamePhaseDynamicDelegate__DelegateSignature();
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeGamePhaseTagDynamicDelegate__DelegateSignature();
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature();
	ELEMENTLIFE_API UFunction* Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ElementLife;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ElementLife()
	{
		if (!Z_Registration_Info_UPackage__Script_ElementLife.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ElementLife_LifeDynamicMulticastDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ElementLife_LifeGamePhaseDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ElementLife_LifeGamePhaseTagDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ElementLife_LifeHealth_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ElementLife_LifeHealth_DeathEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ElementLife",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x177556E7,
				0x99B75F46,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ElementLife.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ElementLife.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ElementLife(Z_Construct_UPackage__Script_ElementLife, TEXT("/Script/ElementLife"), Z_Registration_Info_UPackage__Script_ElementLife, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x177556E7, 0x99B75F46));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
