// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/Messages/GameplayMessageProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayMessageProcessor() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameplayMessageProcessor_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_UGameplayMessageProcessor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
// End Cross Module References
	void UGameplayMessageProcessor::StaticRegisterNativesUGameplayMessageProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayMessageProcessor);
	UClass* Z_Construct_UClass_UGameplayMessageProcessor_NoRegister()
	{
		return UGameplayMessageProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayMessageProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayMessageProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayMessageProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UGameplayMessageProcessor\n * \n * Base class for any message processor which observes other gameplay messages\n * and potentially re-emits updates (e.g., when a chain or combo is detected)\n * \n * Note that these processors are spawned on the server once (not per player)\n * and should do their own internal filtering if only relevant for some players.\n */" },
		{ "IncludePath", "Messages/GameplayMessageProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Messages/GameplayMessageProcessor.h" },
		{ "ToolTip", "UGameplayMessageProcessor\n\nBase class for any message processor which observes other gameplay messages\nand potentially re-emits updates (e.g., when a chain or combo is detected)\n\nNote that these processors are spawned on the server once (not per player)\nand should do their own internal filtering if only relevant for some players." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayMessageProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayMessageProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayMessageProcessor_Statics::ClassParams = {
		&UGameplayMessageProcessor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayMessageProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayMessageProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayMessageProcessor()
	{
		if (!Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton, Z_Construct_UClass_UGameplayMessageProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayMessageProcessor.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<UGameplayMessageProcessor>()
	{
		return UGameplayMessageProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayMessageProcessor);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_GameplayMessageProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_GameplayMessageProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayMessageProcessor, UGameplayMessageProcessor::StaticClass, TEXT("UGameplayMessageProcessor"), &Z_Registration_Info_UClass_UGameplayMessageProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayMessageProcessor), 2590726710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_GameplayMessageProcessor_h_4116561990(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_GameplayMessageProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_Messages_GameplayMessageProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
