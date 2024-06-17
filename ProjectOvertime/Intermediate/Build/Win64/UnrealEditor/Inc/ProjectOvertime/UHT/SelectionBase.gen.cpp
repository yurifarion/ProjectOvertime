// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOvertime/SelectionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_USelectionBase();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_USelectionBase_NoRegister();
	PROJECTOVERTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionOption();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectOvertime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectionOption;
class UScriptStruct* FSelectionOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectionOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectionOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionOption, (UObject*)Z_Construct_UPackage__Script_ProjectOvertime(), TEXT("SelectionOption"));
	}
	return Z_Registration_Info_UScriptStruct_SelectionOption.OuterSingleton;
}
template<> PROJECTOVERTIME_API UScriptStruct* StaticStruct<FSelectionOption>()
{
	return FSelectionOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSelectionOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectionOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionOption_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Option" },
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSelectionOption_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectionOption, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOption_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FSelectionOption_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectionOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionOption_Statics::NewProp_Label,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOvertime,
		nullptr,
		&NewStructOps,
		"SelectionOption",
		Z_Construct_UScriptStruct_FSelectionOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOption_Statics::PropPointers),
		sizeof(FSelectionOption),
		alignof(FSelectionOption),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSelectionOption_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionOption_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSelectionOption()
	{
		if (!Z_Registration_Info_UScriptStruct_SelectionOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectionOption.InnerSingleton, Z_Construct_UScriptStruct_FSelectionOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SelectionOption.InnerSingleton;
	}
	DEFINE_FUNCTION(USelectionBase::execOnNavigation)
	{
		P_GET_ENUM(EUINavigation,Z_Param_InNavigation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->OnNavigation(EUINavigation(Z_Param_InNavigation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectionBase::execSelectNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectionBase::execSelectPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectPrevious();
		P_NATIVE_END;
	}
	void USelectionBase::StaticRegisterNativesUSelectionBase()
	{
		UClass* Class = USelectionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNavigation", &USelectionBase::execOnNavigation },
			{ "SelectNext", &USelectionBase::execSelectNext },
			{ "SelectPrevious", &USelectionBase::execSelectPrevious },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectionBase_OnNavigation_Statics
	{
		struct SelectionBase_eventOnNavigation_Parms
		{
			EUINavigation InNavigation;
			UWidget* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNavigation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_InNavigation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_InNavigation = { "InNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBase_eventOnNavigation_Parms, InNavigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 995543793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBase_eventOnNavigation_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_InNavigation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_InNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectionBase, nullptr, "OnNavigation", nullptr, nullptr, Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::SelectionBase_eventOnNavigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::SelectionBase_eventOnNavigation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectionBase_OnNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectionBase_OnNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectionBase_SelectNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectionBase_SelectNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectionBase_SelectNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectionBase, nullptr, "SelectNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_SelectNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectionBase_SelectNext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USelectionBase_SelectNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectionBase_SelectNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectionBase, nullptr, "SelectPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USelectionBase_SelectPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectionBase_SelectPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectionBase);
	UClass* Z_Construct_UClass_USelectionBase_NoRegister()
	{
		return USelectionBase::StaticClass();
	}
	struct Z_Construct_UClass_USelectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOvertime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectionBase_OnNavigation, "OnNavigation" }, // 3694460772
		{ &Z_Construct_UFunction_USelectionBase_SelectNext, "SelectNext" }, // 517754436
		{ &Z_Construct_UFunction_USelectionBase_SelectPrevious, "SelectPrevious" }, // 3553660611
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectionBase.h" },
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelectionBase_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSelectionOption, METADATA_PARAMS(0, nullptr) }; // 1591181958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectionBase_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "SelectionBase" },
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectionBase_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectionBase, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::NewProp_Options_MetaData), Z_Construct_UClass_USelectionBase_Statics::NewProp_Options_MetaData) }; // 1591181958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectionBase_Statics::NewProp_Label_MetaData[] = {
		{ "BindWidget", "" },
		{ "BlueprintType", "true" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SelectionBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USelectionBase_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectionBase, Label), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::NewProp_Label_MetaData), Z_Construct_UClass_USelectionBase_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectionBase_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectionBase_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectionBase_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectionBase_Statics::ClassParams = {
		&USelectionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USelectionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectionBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USelectionBase()
	{
		if (!Z_Registration_Info_UClass_USelectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectionBase.OuterSingleton, Z_Construct_UClass_USelectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectionBase.OuterSingleton;
	}
	template<> PROJECTOVERTIME_API UClass* StaticClass<USelectionBase>()
	{
		return USelectionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectionBase);
	USelectionBase::~USelectionBase() {}
	struct Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ScriptStructInfo[] = {
		{ FSelectionOption::StaticStruct, Z_Construct_UScriptStruct_FSelectionOption_Statics::NewStructOps, TEXT("SelectionOption"), &Z_Registration_Info_UScriptStruct_SelectionOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectionOption), 1591181958U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectionBase, USelectionBase::StaticClass, TEXT("USelectionBase"), &Z_Registration_Info_UClass_USelectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectionBase), 1338780896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_1712030780(TEXT("/Script/ProjectOvertime"),
		Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yurir_OneDrive_Documentos_GitHub_Project_Overtime_ProjectOvertime_Source_ProjectOvertime_SelectionBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
