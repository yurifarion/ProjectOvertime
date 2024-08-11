// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;
#ifdef PROJECTOVERTIME_SelectionBase_generated_h
#error "SelectionBase.generated.h already included, missing '#pragma once' in SelectionBase.h"
#endif
#define PROJECTOVERTIME_SelectionBase_generated_h

#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectionOption_Statics; \
	PROJECTOVERTIME_API static class UScriptStruct* StaticStruct();


template<> PROJECTOVERTIME_API UScriptStruct* StaticStruct<struct FSelectionOption>();

#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_SPARSE_DATA
#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNavigation); \
	DECLARE_FUNCTION(execSelectNext); \
	DECLARE_FUNCTION(execSelectPrevious);


#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_ACCESSORS
#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectionBase(); \
	friend struct Z_Construct_UClass_USelectionBase_Statics; \
public: \
	DECLARE_CLASS(USelectionBase, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectOvertime"), NO_API) \
	DECLARE_SERIALIZER(USelectionBase)


#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectionBase(USelectionBase&&); \
	NO_API USelectionBase(const USelectionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectionBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelectionBase) \
	NO_API virtual ~USelectionBase();


#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_24_PROLOG
#define FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_SPARSE_DATA \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_ACCESSORS \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTOVERTIME_API UClass* StaticClass<class USelectionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
