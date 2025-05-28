// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOvertime/SettingsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings_NoRegister();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_USelectionBase_NoRegister();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_USettingsWidget();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_USettingsWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectOvertime();
// End Cross Module References
	DEFINE_FUNCTION(USettingsWidget::execOnVSyncChanged)
	{
		P_GET_UBOOL(Z_Param_InIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVSyncChanged(Z_Param_InIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsWidget::execOnResolutionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_InSelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResolutionChanged(Z_Param_InSelectedItem,ESelectInfo::Type(Z_Param_InSelectionType));
		P_NATIVE_END;
	}
	void USettingsWidget::StaticRegisterNativesUSettingsWidget()
	{
		UClass* Class = USettingsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResolutionChanged", &USettingsWidget::execOnResolutionChanged },
			{ "OnVSyncChanged", &USettingsWidget::execOnVSyncChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics
	{
		struct SettingsWidget_eventOnResolutionChanged_Parms
		{
			FString InSelectedItem;
			TEnumAsByte<ESelectInfo::Type> InSelectionType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSelectedItem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSelectionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::NewProp_InSelectedItem = { "InSelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsWidget_eventOnResolutionChanged_Parms, InSelectedItem), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::NewProp_InSelectionType = { "InSelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsWidget_eventOnResolutionChanged_Parms, InSelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 1154398966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::NewProp_InSelectedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::NewProp_InSelectionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsWidget, nullptr, "OnResolutionChanged", nullptr, nullptr, Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::SettingsWidget_eventOnResolutionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::SettingsWidget_eventOnResolutionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsWidget_OnResolutionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsWidget_OnResolutionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics
	{
		struct SettingsWidget_eventOnVSyncChanged_Parms
		{
			bool InIsChecked;
		};
		static void NewProp_InIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::NewProp_InIsChecked_SetBit(void* Obj)
	{
		((SettingsWidget_eventOnVSyncChanged_Parms*)Obj)->InIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::NewProp_InIsChecked = { "InIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsWidget_eventOnVSyncChanged_Parms), &Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::NewProp_InIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::NewProp_InIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsWidget, nullptr, "OnVSyncChanged", nullptr, nullptr, Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::SettingsWidget_eventOnVSyncChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::SettingsWidget_eventOnVSyncChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsWidget_OnVSyncChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsWidget_OnVSyncChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsWidget);
	UClass* Z_Construct_UClass_USettingsWidget_NoRegister()
	{
		return USettingsWidget::StaticClass();
	}
	struct Z_Construct_UClass_USettingsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameUserSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameUserSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionComboBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResolutionComboBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VSyncCheckBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VSyncCheckBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramerateSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FramerateSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingQualitySelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShadingQualitySelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIlluminationQualitySelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalIlluminationQualitySelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingQualitySelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessingQualitySelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualEffectsQualitySelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualEffectsQualitySelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowQualitySelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShadowQualitySelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LanguageSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LanguageSelection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Resolutions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOvertime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsWidget_OnResolutionChanged, "OnResolutionChanged" }, // 2093378556
		{ &Z_Construct_UFunction_USettingsWidget_OnVSyncChanged, "OnVSyncChanged" }, // 494374684
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SettingsWidget.h" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_GameUserSettings_MetaData[] = {
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_GameUserSettings = { "GameUserSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, GameUserSettings), Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_GameUserSettings_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_GameUserSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_ResolutionComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_ResolutionComboBox = { "ResolutionComboBox", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, ResolutionComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_ResolutionComboBox_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_ResolutionComboBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_VSyncCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_VSyncCheckBox = { "VSyncCheckBox", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, VSyncCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_VSyncCheckBox_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_VSyncCheckBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_FramerateSelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_FramerateSelection = { "FramerateSelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, FramerateSelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_FramerateSelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_FramerateSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadingQualitySelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadingQualitySelection = { "ShadingQualitySelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, ShadingQualitySelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadingQualitySelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadingQualitySelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_GlobalIlluminationQualitySelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_GlobalIlluminationQualitySelection = { "GlobalIlluminationQualitySelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, GlobalIlluminationQualitySelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_GlobalIlluminationQualitySelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_GlobalIlluminationQualitySelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_PostProcessingQualitySelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_PostProcessingQualitySelection = { "PostProcessingQualitySelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, PostProcessingQualitySelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_PostProcessingQualitySelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_PostProcessingQualitySelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_VisualEffectsQualitySelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_VisualEffectsQualitySelection = { "VisualEffectsQualitySelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, VisualEffectsQualitySelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_VisualEffectsQualitySelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_VisualEffectsQualitySelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadowQualitySelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadowQualitySelection = { "ShadowQualitySelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, ShadowQualitySelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadowQualitySelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadowQualitySelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_LanguageSelection_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SettingsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_LanguageSelection = { "LanguageSelection", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, LanguageSelection), Z_Construct_UClass_USelectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_LanguageSelection_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_LanguageSelection_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions_Inner = { "Resolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions_MetaData[] = {
		{ "ModuleRelativePath", "SettingsWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions = { "Resolutions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsWidget, Resolutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions_MetaData), Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_GameUserSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_ResolutionComboBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_VSyncCheckBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_FramerateSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadingQualitySelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_GlobalIlluminationQualitySelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_PostProcessingQualitySelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_VisualEffectsQualitySelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_ShadowQualitySelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_LanguageSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsWidget_Statics::NewProp_Resolutions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsWidget_Statics::ClassParams = {
		&USettingsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USettingsWidget()
	{
		if (!Z_Registration_Info_UClass_USettingsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsWidget.OuterSingleton, Z_Construct_UClass_USettingsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USettingsWidget.OuterSingleton;
	}
	template<> PROJECTOVERTIME_API UClass* StaticClass<USettingsWidget>()
	{
		return USettingsWidget::StaticClass();
	}
	USettingsWidget::USettingsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsWidget);
	USettingsWidget::~USettingsWidget() {}
	struct Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USettingsWidget, USettingsWidget::StaticClass, TEXT("USettingsWidget"), &Z_Registration_Info_UClass_USettingsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsWidget), 3477418701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_1669184569(TEXT("/Script/ProjectOvertime"),
		Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_SettingsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
