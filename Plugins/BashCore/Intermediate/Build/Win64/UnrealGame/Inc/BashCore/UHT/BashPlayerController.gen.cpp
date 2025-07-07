// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/BashPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBashPlayerController() {}

// ********** Begin Cross Module References ********************************************************
BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController();
BASHCORE_API UClass* Z_Construct_UClass_ABashPlayerController_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UBashLocalPlayer_NoRegister();
BASHCORE_API UClass* Z_Construct_UClass_UUIInputComponent_NoRegister();
LIMBITLESSBLUETOOTHPLUGIN_API UClass* Z_Construct_UClass_ALimbitlessPlayerController();
UPackage* Z_Construct_UPackage__Script_BashCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABashPlayerController Function GetBashLocalPlayer ************************
struct Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics
{
	struct BashPlayerController_eventGetBashLocalPlayer_Parms
	{
		UBashLocalPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Local Player" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BashPlayerController_eventGetBashLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_UBashLocalPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABashPlayerController, nullptr, "GetBashLocalPlayer", Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::BashPlayerController_eventGetBashLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::BashPlayerController_eventGetBashLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABashPlayerController::execGetBashLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBashLocalPlayer**)Z_Param__Result=P_THIS->GetBashLocalPlayer();
	P_NATIVE_END;
}
// ********** End Class ABashPlayerController Function GetBashLocalPlayer **************************

// ********** Begin Class ABashPlayerController ****************************************************
void ABashPlayerController::StaticRegisterNativesABashPlayerController()
{
	UClass* Class = ABashPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBashLocalPlayer", &ABashPlayerController::execGetBashLocalPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABashPlayerController;
UClass* ABashPlayerController::GetPrivateStaticClass()
{
	using TClass = ABashPlayerController;
	if (!Z_Registration_Info_UClass_ABashPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BashPlayerController"),
			Z_Registration_Info_UClass_ABashPlayerController.InnerSingleton,
			StaticRegisterNativesABashPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABashPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABashPlayerController_NoRegister()
{
	return ABashPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABashPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/BashPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIInputComponent_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BashLocalPlayer_MetaData[] = {
		{ "Category", "Local Player" },
		{ "ModuleRelativePath", "Public/Player/BashPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BashLocalPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABashPlayerController_GetBashLocalPlayer, "GetBashLocalPlayer" }, // 3936091511
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABashPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent = { "UIInputComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABashPlayerController, UIInputComponent), Z_Construct_UClass_UUIInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIInputComponent_MetaData), NewProp_UIInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer = { "BashLocalPlayer", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABashPlayerController, BashLocalPlayer), Z_Construct_UClass_UBashLocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BashLocalPlayer_MetaData), NewProp_BashLocalPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABashPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashPlayerController_Statics::NewProp_UIInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABashPlayerController_Statics::NewProp_BashLocalPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABashPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALimbitlessPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BashCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABashPlayerController_Statics::ClassParams = {
	&ABashPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABashPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABashPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABashPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABashPlayerController()
{
	if (!Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton, Z_Construct_UClass_ABashPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABashPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABashPlayerController);
ABashPlayerController::~ABashPlayerController() {}
// ********** End Class ABashPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h__Script_BashCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABashPlayerController, ABashPlayerController::StaticClass, TEXT("ABashPlayerController"), &Z_Registration_Info_UClass_ABashPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABashPlayerController), 2535093190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h__Script_BashCore_76392886(TEXT("/Script/BashCore"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h__Script_BashCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_BashCore_HostProject_Plugins_BashCore_Source_BashCore_Public_Player_BashPlayerController_h__Script_BashCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
