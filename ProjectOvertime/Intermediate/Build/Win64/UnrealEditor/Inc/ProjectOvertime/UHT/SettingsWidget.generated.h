// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SettingsWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTOVERTIME_SettingsWidget_generated_h
#error "SettingsWidget.generated.h already included, missing '#pragma once' in SettingsWidget.h"
#endif
#define PROJECTOVERTIME_SettingsWidget_generated_h

#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_SPARSE_DATA
#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVSyncChanged); \
	DECLARE_FUNCTION(execOnResolutionChanged);


#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsWidget(); \
	friend struct Z_Construct_UClass_USettingsWidget_Statics; \
public: \
	DECLARE_CLASS(USettingsWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectOvertime"), NO_API) \
	DECLARE_SERIALIZER(USettingsWidget)


#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsWidget(USettingsWidget&&); \
	NO_API USettingsWidget(const USettingsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsWidget) \
	NO_API virtual ~USettingsWidget();


#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_15_PROLOG
#define FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_SPARSE_DATA \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTOVERTIME_API UClass* StaticClass<class USettingsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
