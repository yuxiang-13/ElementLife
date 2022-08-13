// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/GameModes/LifeUserFacingExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeUserFacingExperienceDefinition() {}
// Cross Module References
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeUserFacingExperienceDefinition_NoRegister();
	ELEMENTLIFE_API UClass* Z_Construct_UClass_ULifeUserFacingExperienceDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULifeUserFacingExperienceDefinition::execCreateHostingRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest();
		P_NATIVE_END;
	}
	void ULifeUserFacingExperienceDefinition::StaticRegisterNativesULifeUserFacingExperienceDefinition()
	{
		UClass* Class = ULifeUserFacingExperienceDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHostingRequest", &ULifeUserFacingExperienceDefinition::execCreateHostingRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics
	{
		struct LifeUserFacingExperienceDefinition_eventCreateHostingRequest_Parms
		{
			UCommonSession_HostSessionRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LifeUserFacingExperienceDefinition_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Create a request object that is used to actually start a session with these settings */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Create a request object that is used to actually start a session with these settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULifeUserFacingExperienceDefinition, nullptr, "CreateHostingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::LifeUserFacingExperienceDefinition_eventCreateHostingRequest_Parms), Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULifeUserFacingExperienceDefinition);
	UClass* Z_Construct_UClass_ULifeUserFacingExperienceDefinition_NoRegister()
	{
		return ULifeUserFacingExperienceDefinition::StaticClass();
	}
	struct Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSubTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileSubTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TileDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LoadingScreenWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultExperience_MetaData[];
#endif
		static void NewProp_bIsDefaultExperience_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultExperience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInFrontEnd_MetaData[];
#endif
		static void NewProp_bShowInFrontEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInFrontEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordReplay_MetaData[];
#endif
		static void NewProp_bRecordReplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordReplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULifeUserFacingExperienceDefinition_CreateHostingRequest, "CreateHostingRequest" }, // 1528663291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Description of settings used to display experiences in the UI and start a new session */" },
		{ "IncludePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Description of settings used to display experiences in the UI and start a new session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
		{ "Comment", "/** \xe5\x9c\xb0\xe5\x9b\xbe */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe5\x9c\xb0\xe5\x9b\xbe" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MapID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "LifeExperienceDefinition" },
		{ "Category", "Experience" },
		{ "Comment", "/** \xe4\xbd\x93\xe9\xaa\x8c\xe8\xb5\x84\xe6\xba\x90 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe4\xbd\x93\xe9\xaa\x8c\xe8\xb5\x84\xe6\xba\x90" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExperienceID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** Extra arguments passed as URL options to the game \xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x88\xab\xe5\x90\x8d\xef\xbc\x8c\xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xbe\xe7\xbd\xae */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "Extra arguments passed as URL options to the game \xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x88\xab\xe5\x90\x8d\xef\xbc\x8c\xe8\x87\xaa\xe5\xb7\xb1\xe8\xae\xbe\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** \xe4\xb8\xbb\xe6\xa0\x87\xe9\xa2\x98 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe6\xa0\x87\xe9\xa2\x98" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileTitle = { "TileTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, TileTitle), METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** \xe5\x89\xaf\xe6\xa0\x87\xe9\xa2\x98 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe5\x89\xaf\xe6\xa0\x87\xe9\xa2\x98" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle = { "TileSubTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, TileSubTitle), METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** \xe6\xa0\x87\xe9\xa2\x98\xe6\x8f\x8f\xe8\xbf\xb0 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe6\xa0\x87\xe9\xa2\x98\xe6\x8f\x8f\xe8\xbf\xb0" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileDescription = { "TileDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, TileDescription), METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** UI */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "UI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileIcon = { "TileIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, TileIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData[] = {
		{ "Category", "LoadingScreen" },
		{ "Comment", "/** \xe8\xbf\x87\xe5\xba\xa6\xe7\x95\x8c\xe9\x9d\xa2\xe7\x9a\x84UI */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe8\xbf\x87\xe5\xba\xa6\xe7\x95\x8c\xe9\x9d\xa2\xe7\x9a\x84UI" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\x9c\x9f\xef\xbc\x8c\xe8\xbf\x99\xe6\x98\xaf\xe4\xb8\x80\xe7\xa7\x8d\xe9\xbb\x98\xe8\xae\xa4\xe4\xbd\x93\xe9\xaa\x8c\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe4\xba\x8e\xe5\xbf\xab\xe9\x80\x9f\xe6\x92\xad\xe6\x94\xbe\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8UI\xe4\xb8\xad\xe7\xbb\x99\xe4\xba\x88\xe4\xbc\x98\xe5\x85\x88\xe6\x9d\x83 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\x9c\x9f\xef\xbc\x8c\xe8\xbf\x99\xe6\x98\xaf\xe4\xb8\x80\xe7\xa7\x8d\xe9\xbb\x98\xe8\xae\xa4\xe4\xbd\x93\xe9\xaa\x8c\xef\xbc\x8c\xe5\xba\x94\xe7\x94\xa8\xe4\xba\x8e\xe5\xbf\xab\xe9\x80\x9f\xe6\x92\xad\xe6\x94\xbe\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8UI\xe4\xb8\xad\xe7\xbb\x99\xe4\xba\x88\xe4\xbc\x98\xe5\x85\x88\xe6\x9d\x83" },
	};
#endif
	void Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit(void* Obj)
	{
		((ULifeUserFacingExperienceDefinition*)Obj)->bIsDefaultExperience = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience = { "bIsDefaultExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULifeUserFacingExperienceDefinition), &Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** If true, this will show up in the experiences list in the front-end */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "If true, this will show up in the experiences list in the front-end" },
	};
#endif
	void Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit(void* Obj)
	{
		((ULifeUserFacingExperienceDefinition*)Obj)->bShowInFrontEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd = { "bShowInFrontEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULifeUserFacingExperienceDefinition), &Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** If true, \xe8\xae\xb0\xe5\xbd\x95\xe6\xb8\xb8\xe6\x88\x8f */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "If true, \xe8\xae\xb0\xe5\xbd\x95\xe6\xb8\xb8\xe6\x88\x8f" },
	};
#endif
	void Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit(void* Obj)
	{
		((ULifeUserFacingExperienceDefinition*)Obj)->bRecordReplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay = { "bRecordReplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULifeUserFacingExperienceDefinition), &Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData[] = {
		{ "Category", "Experience" },
		{ "Comment", "/** \xe6\x9c\x80\xe5\xa4\xa7\xe7\x8e\xa9\xe5\xae\xb6\xe6\x95\xb0 */" },
		{ "ModuleRelativePath", "GameModes/LifeUserFacingExperienceDefinition.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x8e\xa9\xe5\xae\xb6\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeUserFacingExperienceDefinition, MaxPlayerCount), METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MapID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExperienceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_TileIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeUserFacingExperienceDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::ClassParams = {
		&ULifeUserFacingExperienceDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeUserFacingExperienceDefinition()
	{
		if (!Z_Registration_Info_UClass_ULifeUserFacingExperienceDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULifeUserFacingExperienceDefinition.OuterSingleton, Z_Construct_UClass_ULifeUserFacingExperienceDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULifeUserFacingExperienceDefinition.OuterSingleton;
	}
	template<> ELEMENTLIFE_API UClass* StaticClass<ULifeUserFacingExperienceDefinition>()
	{
		return ULifeUserFacingExperienceDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeUserFacingExperienceDefinition);
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeUserFacingExperienceDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeUserFacingExperienceDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULifeUserFacingExperienceDefinition, ULifeUserFacingExperienceDefinition::StaticClass, TEXT("ULifeUserFacingExperienceDefinition"), &Z_Registration_Info_UClass_ULifeUserFacingExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULifeUserFacingExperienceDefinition), 3292595267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeUserFacingExperienceDefinition_h_2866801984(TEXT("/Script/ElementLife"),
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeUserFacingExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_GameModes_LifeUserFacingExperienceDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
