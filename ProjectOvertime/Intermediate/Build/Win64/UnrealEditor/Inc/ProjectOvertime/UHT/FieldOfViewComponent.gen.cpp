// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectOvertime/FieldOfViewComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldOfViewComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_UFieldOfViewComponent();
	PROJECTOVERTIME_API UClass* Z_Construct_UClass_UFieldOfViewComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectOvertime();
// End Cross Module References
	DEFINE_FUNCTION(UFieldOfViewComponent::execIsActorVisible)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dist);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorVisible(Z_Param_TargetActor,Z_Param_dist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFieldOfViewComponent::execIsActorInView)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dist);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorInView(Z_Param_TargetActor,Z_Param_dist);
		P_NATIVE_END;
	}
	void UFieldOfViewComponent::StaticRegisterNativesUFieldOfViewComponent()
	{
		UClass* Class = UFieldOfViewComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActorInView", &UFieldOfViewComponent::execIsActorInView },
			{ "IsActorVisible", &UFieldOfViewComponent::execIsActorVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics
	{
		struct FieldOfViewComponent_eventIsActorInView_Parms
		{
			AActor* TargetActor;
			float dist;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dist;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldOfViewComponent_eventIsActorInView_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_dist = { "dist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldOfViewComponent_eventIsActorInView_Parms, dist), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FieldOfViewComponent_eventIsActorInView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldOfViewComponent_eventIsActorInView_Parms), &Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_dist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field Of View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the specified actor is within the field of view\n" },
#endif
		{ "ModuleRelativePath", "FieldOfViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified actor is within the field of view" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldOfViewComponent, nullptr, "IsActorInView", nullptr, nullptr, Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::FieldOfViewComponent_eventIsActorInView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::FieldOfViewComponent_eventIsActorInView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics
	{
		struct FieldOfViewComponent_eventIsActorVisible_Parms
		{
			AActor* TargetActor;
			float dist;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dist;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldOfViewComponent_eventIsActorVisible_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_dist = { "dist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldOfViewComponent_eventIsActorVisible_Parms, dist), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FieldOfViewComponent_eventIsActorVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldOfViewComponent_eventIsActorVisible_Parms), &Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_dist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field Of View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the specified actor is visible (no obstacles between owner and target)\n" },
#endif
		{ "ModuleRelativePath", "FieldOfViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the specified actor is visible (no obstacles between owner and target)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldOfViewComponent, nullptr, "IsActorVisible", nullptr, nullptr, Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::FieldOfViewComponent_eventIsActorVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::FieldOfViewComponent_eventIsActorVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldOfViewComponent);
	UClass* Z_Construct_UClass_UFieldOfViewComponent_NoRegister()
	{
		return UFieldOfViewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFieldOfViewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfViewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfViewAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFieldOfViewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectOvertime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFieldOfViewComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldOfViewComponent_IsActorInView, "IsActorInView" }, // 1858426355
		{ &Z_Construct_UFunction_UFieldOfViewComponent_IsActorVisible, "IsActorVisible" }, // 3070337584
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldOfViewComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FieldOfViewComponent.h" },
		{ "ModuleRelativePath", "FieldOfViewComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFieldOfViewComponent_Statics::NewProp_FieldOfViewAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Field Of View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The field of view angle in degrees (default is 90 degrees)\n" },
#endif
		{ "ModuleRelativePath", "FieldOfViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The field of view angle in degrees (default is 90 degrees)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFieldOfViewComponent_Statics::NewProp_FieldOfViewAngle = { "FieldOfViewAngle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldOfViewComponent, FieldOfViewAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::NewProp_FieldOfViewAngle_MetaData), Z_Construct_UClass_UFieldOfViewComponent_Statics::NewProp_FieldOfViewAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldOfViewComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldOfViewComponent_Statics::NewProp_FieldOfViewAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFieldOfViewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldOfViewComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldOfViewComponent_Statics::ClassParams = {
		&UFieldOfViewComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFieldOfViewComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldOfViewComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldOfViewComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFieldOfViewComponent()
	{
		if (!Z_Registration_Info_UClass_UFieldOfViewComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldOfViewComponent.OuterSingleton, Z_Construct_UClass_UFieldOfViewComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFieldOfViewComponent.OuterSingleton;
	}
	template<> PROJECTOVERTIME_API UClass* StaticClass<UFieldOfViewComponent>()
	{
		return UFieldOfViewComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldOfViewComponent);
	UFieldOfViewComponent::~UFieldOfViewComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_FieldOfViewComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_FieldOfViewComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFieldOfViewComponent, UFieldOfViewComponent::StaticClass, TEXT("UFieldOfViewComponent"), &Z_Registration_Info_UClass_UFieldOfViewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldOfViewComponent), 1467808763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_FieldOfViewComponent_h_4110135104(TEXT("/Script/ProjectOvertime"),
		Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_FieldOfViewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectOvertime_Source_ProjectOvertime_FieldOfViewComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
