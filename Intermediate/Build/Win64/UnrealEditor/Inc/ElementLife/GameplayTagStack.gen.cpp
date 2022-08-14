// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementLife/System/GameplayTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagStack() {}
// Cross Module References
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStack();
	UPackage* Z_Construct_UPackage__Script_ElementLife();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ELEMENTLIFE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayTagStack>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FGameplayTagStack cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagStack;
class UScriptStruct* FGameplayTagStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagStack, Z_Construct_UPackage__Script_ElementLife(), TEXT("GameplayTagStack"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FGameplayTagStack>()
{
	return FGameplayTagStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents one stack of a gameplay tag (tag + count)\n */" },
		{ "ModuleRelativePath", "System/GameplayTagStack.h" },
		{ "ToolTip", "Represents one stack of a gameplay tag (tag + count)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagStack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "System/GameplayTagStack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "System/GameplayTagStack.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagStack, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"GameplayTagStack",
		sizeof(FGameplayTagStack),
		alignof(FGameplayTagStack),
		Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStack()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTagStackContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FGameplayTagStackContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagStackContainer;
class UScriptStruct* FGameplayTagStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagStackContainer, Z_Construct_UPackage__Script_ElementLife(), TEXT("GameplayTagStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton;
}
template<> ELEMENTLIFE_API UScriptStruct* StaticStruct<FGameplayTagStackContainer>()
{
	return FGameplayTagStackContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Container of gameplay tag stacks */" },
		{ "ModuleRelativePath", "System/GameplayTagStack.h" },
		{ "ToolTip", "Container of gameplay tag stacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagStackContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_Inner = { "Stacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTagStack, METADATA_PARAMS(nullptr, 0) }; // 942347867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_MetaData[] = {
		{ "Comment", "// Replicated list of gameplay tag stacks\n" },
		{ "ModuleRelativePath", "System/GameplayTagStack.h" },
		{ "ToolTip", "Replicated list of gameplay tag stacks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagStackContainer, Stacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_MetaData)) }; // 942347867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ElementLife,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"GameplayTagStackContainer",
		sizeof(FGameplayTagStackContainer),
		alignof(FGameplayTagStackContainer),
		Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_GameplayTagStack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_GameplayTagStack_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagStack::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewStructOps, TEXT("GameplayTagStack"), &Z_Registration_Info_UScriptStruct_GameplayTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagStack), 942347867U) },
		{ FGameplayTagStackContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewStructOps, TEXT("GameplayTagStackContainer"), &Z_Registration_Info_UScriptStruct_GameplayTagStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagStackContainer), 3062566863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_GameplayTagStack_h_3232027397(TEXT("/Script/ElementLife"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_GameplayTagStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElementLife_Source_ElementLife_System_GameplayTagStack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
