// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Character/LifePawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifePawnComponent() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeReadyInterface_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeReadyInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnComponent_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifePawnComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
// End Cross Module References
	void ULifeReadyInterface::StaticRegisterNativesULifeReadyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeReadyInterface);
	UClass* Z_Construct_UClass_ULifeReadyInterface_NoRegister()
	{
		return ULifeReadyInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULifeReadyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeReadyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeReadyInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character/LifePawnComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeReadyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILifeReadyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeReadyInterface_Statics::ClassParams = {
		&ULifeReadyInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeReadyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeReadyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeReadyInterface()
	{
		if (!Z_Registration_Info_UClass_ULifeReadyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeReadyInterface.OuterSingleton, Z_Construct_UClass_ULifeReadyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeReadyInterface.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeReadyInterface>()
	{
		return ULifeReadyInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeReadyInterface);
	void ULifePawnComponent::StaticRegisterNativesULifePawnComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifePawnComponent);
	UClass* Z_Construct_UClass_ULifePawnComponent_NoRegister()
	{
		return ULifePawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULifePawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifePawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifePawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULifePawnComponent\n *\n *\x09""An actor component that can be used for adding custom behavior to pawns.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/LifePawnComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/LifePawnComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULifePawnComponent\n\n    An actor component that can be used for adding custom behavior to pawns." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULifePawnComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULifeReadyInterface_NoRegister, (int32)VTABLE_OFFSET(ULifePawnComponent, ILifeReadyInterface), false },  // 9038701
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifePawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifePawnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifePawnComponent_Statics::ClassParams = {
		&ULifePawnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULifePawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifePawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifePawnComponent()
	{
		if (!Z_Registration_Info_UClass_ULifePawnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifePawnComponent.OuterSingleton, Z_Construct_UClass_ULifePawnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifePawnComponent.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifePawnComponent>()
	{
		return ULifePawnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifePawnComponent);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeReadyInterface, ULifeReadyInterface::StaticClass, TEXT("ULifeReadyInterface"), &Z_Registration_Info_UClass_ULifeReadyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeReadyInterface), 9038701U) },
		{ Z_Construct_UClass_ULifePawnComponent, ULifePawnComponent::StaticClass, TEXT("ULifePawnComponent"), &Z_Registration_Info_UClass_ULifePawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifePawnComponent), 3453107699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_3877478149(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Character_LifePawnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
