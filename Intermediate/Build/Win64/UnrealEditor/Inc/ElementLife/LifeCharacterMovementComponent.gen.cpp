// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifeCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeCharacterMovementComponent() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FLifeCharacterGroundInfo();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCharacterMovementComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo;
class UScriptStruct* FLifeCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo, Z_Construct_UPackage__Script_ElementLife(), TEXT("LifeCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FLifeCharacterGroundInfo>()
{
	return FLifeCharacterGroundInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLifeCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
		{ "ToolTip", "FLifeCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLifeCharacterGroundInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "LifeCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData[] = {
		{ "Category", "LifeCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLifeCharacterGroundInfo, GroundDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewProp_GroundDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		&NewStructOps,
		"LifeCharacterGroundInfo",
		sizeof(FLifeCharacterGroundInfo),
		alignof(FLifeCharacterGroundInfo),
		Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLifeCharacterGroundInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ULifeCharacterMovementComponent::execGetGroundInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLifeCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
		P_NATIVE_END;
	}
	void ULifeCharacterMovementComponent::StaticRegisterNativesULifeCharacterMovementComponent()
	{
		UClass* Class = ULifeCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroundInfo", &ULifeCharacterMovementComponent::execGetGroundInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics
	{
		struct LifeCharacterMovementComponent_eventGetGroundInfo_Parms
		{
			FLifeCharacterGroundInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLifeCharacterGroundInfo, METADATA_PARAMS(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue_MetaData)) }; // 732795085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life|CharacterMovement" },
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::LifeCharacterMovementComponent_eventGetGroundInfo_Parms), Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeCharacterMovementComponent);
	UClass* Z_Construct_UClass_ULifeCharacterMovementComponent_NoRegister()
	{
		return ULifeCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifeCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[];
#endif
		static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 677022028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULifeCharacterMovementComponent\n *\n *\x09The base character movement component class used by this project.\n */" },
		{ "IncludePath", "Character/LifeCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifeCharacterMovementComponent\n\n    The base character movement component class used by this project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LifeCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
	{
		((ULifeCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULifeCharacterMovementComponent), &Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::ClassParams = {
		&ULifeCharacterMovementComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_ULifeCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_ULifeCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeCharacterMovementComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeCharacterMovementComponent>()
	{
		return ULifeCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeCharacterMovementComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ScriptStructInfo[] = {
		{ FLifeCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FLifeCharacterGroundInfo_Statics::NewStructOps, TEXT("LifeCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_LifeCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLifeCharacterGroundInfo), 732795085U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeCharacterMovementComponent, ULifeCharacterMovementComponent::StaticClass, TEXT("ULifeCharacterMovementComponent"), &Z_Registration_Info_UClass_ULifeCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeCharacterMovementComponent), 2084096505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_2544353179(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifeCharacterMovementComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
