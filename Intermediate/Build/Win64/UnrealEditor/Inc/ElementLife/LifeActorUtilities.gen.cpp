// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/LifeActorUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeActorUtilities() {}
// Cross Module References
	ELEMENTLIFE_API UEnum* Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeActorUtilities_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeActorUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintExposedNetMode;
	static UEnum* EBlueprintExposedNetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode, Z_Construct_UPackage__Script_ElementLife(), TEXT("EBlueprintExposedNetMode"));
		}
		return Z_Registration_Info_UEnum_EBlueprintExposedNetMode.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UEnum* StaticEnum<EBlueprintExposedNetMode>()
	{
		return EBlueprintExposedNetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enumerators[] = {
		{ "EBlueprintExposedNetMode::Standalone", (int64)EBlueprintExposedNetMode::Standalone },
		{ "EBlueprintExposedNetMode::DedicatedServer", (int64)EBlueprintExposedNetMode::DedicatedServer },
		{ "EBlueprintExposedNetMode::ListenServer", (int64)EBlueprintExposedNetMode::ListenServer },
		{ "EBlueprintExposedNetMode::Client", (int64)EBlueprintExposedNetMode::Client },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams[] = {
		{ "Client.Comment", "/**\n\x09 * Network client: client connected to a remote server.\n\x09 * Note that every mode less than this value is a kind of server, so checking NetMode < NM_Client is always some variety of server.\n\x09 */" },
		{ "Client.Name", "EBlueprintExposedNetMode::Client" },
		{ "Client.ToolTip", "Network client: client connected to a remote server.\nNote that every mode less than this value is a kind of server, so checking NetMode < NM_Client is always some variety of server." },
		{ "DedicatedServer.Comment", "/** Dedicated server: server with no local players. */" },
		{ "DedicatedServer.Name", "EBlueprintExposedNetMode::DedicatedServer" },
		{ "DedicatedServer.ToolTip", "Dedicated server: server with no local players." },
		{ "ListenServer.Comment", "/** Listen server: a server that also has a local player who is hosting the game, available to other players on the network. */" },
		{ "ListenServer.Name", "EBlueprintExposedNetMode::ListenServer" },
		{ "ListenServer.ToolTip", "Listen server: a server that also has a local player who is hosting the game, available to other players on the network." },
		{ "ModuleRelativePath", "System/LifeActorUtilities.h" },
		{ "Standalone.Comment", "/** Standalone: a game without networking, with one or more local players. Still considered a server because it has all server functionality. */" },
		{ "Standalone.Name", "EBlueprintExposedNetMode::Standalone" },
		{ "Standalone.ToolTip", "Standalone: a game without networking, with one or more local players. Still considered a server because it has all server functionality." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ElementLife,
		nullptr,
		"EBlueprintExposedNetMode",
		"EBlueprintExposedNetMode",
		Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton, Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintExposedNetMode.InnerSingleton;
	}
	DEFINE_FUNCTION(ULifeActorUtilities::execSwitchOnNetMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBlueprintExposedNetMode*)Z_Param__Result=ULifeActorUtilities::SwitchOnNetMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void ULifeActorUtilities::StaticRegisterNativesULifeActorUtilities()
	{
		UClass* Class = ULifeActorUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchOnNetMode", &ULifeActorUtilities::execSwitchOnNetMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics
	{
		struct LifeActorUtilities_eventSwitchOnNetMode_Parms
		{
			const UObject* WorldContextObject;
			EBlueprintExposedNetMode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeActorUtilities_eventSwitchOnNetMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeActorUtilities_eventSwitchOnNetMode_Parms, ReturnValue), Z_Construct_UEnum_ElementLife_EBlueprintExposedNetMode, METADATA_PARAMS(nullptr, 0) }; // 834410894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Life" },
		{ "Comment", "/**\n\x09 * Get the network mode (dedicated server, client, standalone, etc...) for an actor or component.\n\x09 */" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "System/LifeActorUtilities.h" },
		{ "ToolTip", "Get the network mode (dedicated server, client, standalone, etc...) for an actor or component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeActorUtilities, nullptr, "SwitchOnNetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::LifeActorUtilities_eventSwitchOnNetMode_Parms), Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeActorUtilities);
	UClass* Z_Construct_UClass_ULifeActorUtilities_NoRegister()
	{
		return ULifeActorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_ULifeActorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeActorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeActorUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeActorUtilities_SwitchOnNetMode, "SwitchOnNetMode" }, // 46074598
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeActorUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "System/LifeActorUtilities.h" },
		{ "ModuleRelativePath", "System/LifeActorUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeActorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeActorUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeActorUtilities_Statics::ClassParams = {
		&ULifeActorUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeActorUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeActorUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeActorUtilities()
	{
		if (!Z_Registration_Info_UClass_ULifeActorUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeActorUtilities.OuterSingleton, Z_Construct_UClass_ULifeActorUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeActorUtilities.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeActorUtilities>()
	{
		return ULifeActorUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeActorUtilities);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::EnumInfo[] = {
		{ EBlueprintExposedNetMode_StaticEnum, TEXT("EBlueprintExposedNetMode"), &Z_Registration_Info_UEnum_EBlueprintExposedNetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 834410894U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeActorUtilities, ULifeActorUtilities::StaticClass, TEXT("ULifeActorUtilities"), &Z_Registration_Info_UClass_ULifeActorUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeActorUtilities), 2094258538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_678686714(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_LifeActorUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
