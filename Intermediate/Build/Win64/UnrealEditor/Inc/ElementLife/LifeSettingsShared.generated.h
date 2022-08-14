// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELEMENTLIFE_LifeSettingsShared_generated_h
#error "LifeSettingsShared.generated.h already included, missing '#pragma once' in LifeSettingsShared.h"
#endif
#define ELEMENTLIFE_LifeSettingsShared_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElementLife_Source_ElementLife_Settings_LifeSettingsShared_h


#define FOREACH_ENUM_ECOLORBLINDMODE(op) \
	op(EColorBlindMode::Off) \
	op(EColorBlindMode::Deuteranope) \
	op(EColorBlindMode::Protanope) \
	op(EColorBlindMode::Tritanope) 

enum class EColorBlindMode : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<EColorBlindMode>();

#define FOREACH_ENUM_ELIFEALLOWBACKGROUNDAUDIOSETTING(op) \
	op(ELifeAllowBackgroundAudioSetting::Off) \
	op(ELifeAllowBackgroundAudioSetting::AllSounds) \
	op(ELifeAllowBackgroundAudioSetting::Num) 

enum class ELifeAllowBackgroundAudioSetting : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeAllowBackgroundAudioSetting>();

#define FOREACH_ENUM_ELIFEGAMEPADSENSITIVITY(op) \
	op(ELifeGamepadSensitivity::Invalid) \
	op(ELifeGamepadSensitivity::Slow) \
	op(ELifeGamepadSensitivity::SlowPlus) \
	op(ELifeGamepadSensitivity::SlowPlusPlus) \
	op(ELifeGamepadSensitivity::Normal) \
	op(ELifeGamepadSensitivity::NormalPlus) \
	op(ELifeGamepadSensitivity::NormalPlusPlus) \
	op(ELifeGamepadSensitivity::Fast) \
	op(ELifeGamepadSensitivity::FastPlus) \
	op(ELifeGamepadSensitivity::FastPlusPlus) \
	op(ELifeGamepadSensitivity::Insane) 

enum class ELifeGamepadSensitivity : uint8;
template<> ELEMENTLIFE_API UEnum* StaticEnum<ELifeGamepadSensitivity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
