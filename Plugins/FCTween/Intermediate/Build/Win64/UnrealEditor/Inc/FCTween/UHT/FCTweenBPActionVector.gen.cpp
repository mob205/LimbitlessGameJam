// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/FCTweenBPActionVector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFCTweenBPActionVector() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPAction();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionVector();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenBPActionVector_NoRegister();
FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EFCEase();
FCTWEEN_API UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FCTween();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FTweenUpdateVectorOutputPin *******************************************
struct Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics
{
	struct _Script_FCTween_eventTweenUpdateVectorOutputPin_Parms
	{
		FVector Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FCTween_eventTweenUpdateVectorOutputPin_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FCTween, nullptr, "TweenUpdateVectorOutputPin__DelegateSignature", Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::_Script_FCTween_eventTweenUpdateVectorOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::_Script_FCTween_eventTweenUpdateVectorOutputPin_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTweenUpdateVectorOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateVectorOutputPin, FVector Value)
{
	struct _Script_FCTween_eventTweenUpdateVectorOutputPin_Parms
	{
		FVector Value;
	};
	_Script_FCTween_eventTweenUpdateVectorOutputPin_Parms Parms;
	Parms.Value=Value;
	TweenUpdateVectorOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FTweenUpdateVectorOutputPin *********************************************

// ********** Begin Class UFCTweenBPActionVector Function TweenVector ******************************
struct Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics
{
	struct FCTweenBPActionVector_eventTweenVector_Parms
	{
		FVector Start;
		FVector End;
		float DurationSecs;
		EFCEase EaseType;
		float EaseParam1;
		float EaseParam2;
		float Delay;
		int32 Loops;
		float LoopDelay;
		bool bYoyo;
		float YoyoDelay;
		bool bCanTickDuringPause;
		bool bUseGlobalTimeDilation;
		UFCTweenBPActionVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Tween" },
		{ "Comment", "/**\n\x09 * @brief Tween a Vector parameter between the given values\n\x09 * @param Start The starting value\n\x09 * @param End The ending value\n\x09 * @param DurationSecs The seconds to go from start to end\n\x09 * @param EaseType The type of easing function to use for interpolation\n\x09 * @param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n\x09 * @param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n\x09 * @param Delay Seconds before the tween starts interpolating, after being created\n\x09 * @param Loops The number of loops to play. -1 for infinite\n\x09 * @param LoopDelay Seconds to pause before starting each loop\n\x09 * @param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n\x09 * @param YoyoDelay Seconds to pause before starting to yoyo\n\x09 * @param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu\n\x09 */" },
		{ "CPP_Default_bCanTickDuringPause", "false" },
		{ "CPP_Default_bUseGlobalTimeDilation", "true" },
		{ "CPP_Default_bYoyo", "false" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "CPP_Default_DurationSecs", "1.000000" },
		{ "CPP_Default_EaseParam1", "0.000000" },
		{ "CPP_Default_EaseParam2", "0.000000" },
		{ "CPP_Default_EaseType", "InOutQuad" },
		{ "CPP_Default_End", "" },
		{ "CPP_Default_LoopDelay", "0.000000" },
		{ "CPP_Default_Loops", "0" },
		{ "CPP_Default_Start", "" },
		{ "CPP_Default_YoyoDelay", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector.h" },
		{ "ToolTip", "@brief Tween a Vector parameter between the given values\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param EaseType The type of easing function to use for interpolation\n@param EaseParam1 Elastic: Amplitude (1.0) / Back: Overshoot (1.70158) / Stepped: Steps (10) / Smoothstep: x0 (0)\n@param EaseParam2 Elastic: Period (0.2) / Smoothstep: x1 (1)\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseParam1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseParam2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Loops;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopDelay;
	static void NewProp_bYoyo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYoyo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YoyoDelay;
	static void NewProp_bCanTickDuringPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTickDuringPause;
	static void NewProp_bUseGlobalTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalTimeDilation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, DurationSecs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseType = { "EaseType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, EaseType), Z_Construct_UEnum_FCTween_EFCEase, METADATA_PARAMS(0, nullptr) }; // 551746138
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseParam1 = { "EaseParam1", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, EaseParam1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseParam2 = { "EaseParam2", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, EaseParam2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, Loops), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, LoopDelay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bYoyo_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVector_Parms*)Obj)->bYoyo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVector_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, YoyoDelay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVector_Parms*)Obj)->bCanTickDuringPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVector_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVector_Parms*)Obj)->bUseGlobalTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVector_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVector_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_DurationSecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseParam1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_EaseParam2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_Loops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_LoopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bYoyo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_YoyoDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bCanTickDuringPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_bUseGlobalTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionVector, nullptr, "TweenVector", Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::FCTweenBPActionVector_eventTweenVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::FCTweenBPActionVector_eventTweenVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFCTweenBPActionVector::execTweenVector)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSecs);
	P_GET_ENUM(EFCEase,Z_Param_EaseType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EaseParam1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EaseParam2);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDelay);
	P_GET_UBOOL(Z_Param_bYoyo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_YoyoDelay);
	P_GET_UBOOL(Z_Param_bCanTickDuringPause);
	P_GET_UBOOL(Z_Param_bUseGlobalTimeDilation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFCTweenBPActionVector**)Z_Param__Result=UFCTweenBPActionVector::TweenVector(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,EFCEase(Z_Param_EaseType),Z_Param_EaseParam1,Z_Param_EaseParam2,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
	P_NATIVE_END;
}
// ********** End Class UFCTweenBPActionVector Function TweenVector ********************************

// ********** Begin Class UFCTweenBPActionVector Function TweenVectorCustomCurve *******************
struct Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics
{
	struct FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms
	{
		FVector Start;
		FVector End;
		float DurationSecs;
		UCurveFloat* Curve;
		float Delay;
		int32 Loops;
		float LoopDelay;
		bool bYoyo;
		float YoyoDelay;
		bool bCanTickDuringPause;
		bool bUseGlobalTimeDilation;
		UFCTweenBPActionVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Tween|Custom Curve" },
		{ "Comment", "/**\n\x09 * @brief Tween a float parameter between the given values\n\x09 * @param Start The starting value\n\x09 * @param End The ending value\n\x09 * @param DurationSecs The seconds to go from start to end\n\x09 * @param Curve The curve to interpolate with\n\x09 * @param Delay Seconds before the tween starts interpolating, after being created\n\x09 * @param Loops The number of loops to play. -1 for infinite\n\x09 * @param LoopDelay Seconds to pause before starting each loop\n\x09 * @param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n\x09 * @param YoyoDelay Seconds to pause before starting to yoyo\n\x09 * @param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu\n\x09 */" },
		{ "CPP_Default_bCanTickDuringPause", "false" },
		{ "CPP_Default_bUseGlobalTimeDilation", "true" },
		{ "CPP_Default_bYoyo", "false" },
		{ "CPP_Default_Curve", "None" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "CPP_Default_DurationSecs", "1.000000" },
		{ "CPP_Default_End", "" },
		{ "CPP_Default_LoopDelay", "0.000000" },
		{ "CPP_Default_Loops", "0" },
		{ "CPP_Default_Start", "" },
		{ "CPP_Default_YoyoDelay", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector.h" },
		{ "ToolTip", "@brief Tween a float parameter between the given values\n@param Start The starting value\n@param End The ending value\n@param DurationSecs The seconds to go from start to end\n@param Curve The curve to interpolate with\n@param Delay Seconds before the tween starts interpolating, after being created\n@param Loops The number of loops to play. -1 for infinite\n@param LoopDelay Seconds to pause before starting each loop\n@param bYoyo Whether to \"yoyo\" the tween - once it reaches the end, it starts counting backwards\n@param YoyoDelay Seconds to pause before starting to yoyo\n@param bCanTickDuringPause Whether to play this tween while the game is paused. Useful for UI purposes, such as a pause menu" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSecs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Loops;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopDelay;
	static void NewProp_bYoyo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYoyo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YoyoDelay;
	static void NewProp_bCanTickDuringPause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTickDuringPause;
	static void NewProp_bUseGlobalTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalTimeDilation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_DurationSecs = { "DurationSecs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, DurationSecs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, Loops), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, LoopDelay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bYoyo_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms*)Obj)->bYoyo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bYoyo = { "bYoyo", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bYoyo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_YoyoDelay = { "YoyoDelay", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, YoyoDelay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms*)Obj)->bCanTickDuringPause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bCanTickDuringPause = { "bCanTickDuringPause", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bCanTickDuringPause_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit(void* Obj)
{
	((FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms*)Obj)->bUseGlobalTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation = { "bUseGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms), &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms, ReturnValue), Z_Construct_UClass_UFCTweenBPActionVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_DurationSecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_Loops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_LoopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bYoyo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_YoyoDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bCanTickDuringPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_bUseGlobalTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFCTweenBPActionVector, nullptr, "TweenVectorCustomCurve", Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::FCTweenBPActionVector_eventTweenVectorCustomCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFCTweenBPActionVector::execTweenVectorCustomCurve)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSecs);
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDelay);
	P_GET_UBOOL(Z_Param_bYoyo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_YoyoDelay);
	P_GET_UBOOL(Z_Param_bCanTickDuringPause);
	P_GET_UBOOL(Z_Param_bUseGlobalTimeDilation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFCTweenBPActionVector**)Z_Param__Result=UFCTweenBPActionVector::TweenVectorCustomCurve(Z_Param_Start,Z_Param_End,Z_Param_DurationSecs,Z_Param_Curve,Z_Param_Delay,Z_Param_Loops,Z_Param_LoopDelay,Z_Param_bYoyo,Z_Param_YoyoDelay,Z_Param_bCanTickDuringPause,Z_Param_bUseGlobalTimeDilation);
	P_NATIVE_END;
}
// ********** End Class UFCTweenBPActionVector Function TweenVectorCustomCurve *********************

// ********** Begin Class UFCTweenBPActionVector ***************************************************
void UFCTweenBPActionVector::StaticRegisterNativesUFCTweenBPActionVector()
{
	UClass* Class = UFCTweenBPActionVector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TweenVector", &UFCTweenBPActionVector::execTweenVector },
		{ "TweenVectorCustomCurve", &UFCTweenBPActionVector::execTweenVectorCustomCurve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFCTweenBPActionVector;
UClass* UFCTweenBPActionVector::GetPrivateStaticClass()
{
	using TClass = UFCTweenBPActionVector;
	if (!Z_Registration_Info_UClass_UFCTweenBPActionVector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FCTweenBPActionVector"),
			Z_Registration_Info_UClass_UFCTweenBPActionVector.InnerSingleton,
			StaticRegisterNativesUFCTweenBPActionVector,
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
	return Z_Registration_Info_UClass_UFCTweenBPActionVector.InnerSingleton;
}
UClass* Z_Construct_UClass_UFCTweenBPActionVector_NoRegister()
{
	return UFCTweenBPActionVector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFCTweenBPActionVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/FCTweenBPActionVector.h" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyEasing_MetaData[] = {
		{ "Comment", "// Triggered every tween update. use \"Value\" to get the tweened float for this frame\n" },
		{ "ModuleRelativePath", "Public/Blueprints/FCTweenBPActionVector.h" },
		{ "ToolTip", "Triggered every tween update. use \"Value\" to get the tweened float for this frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplyEasing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVector, "TweenVector" }, // 962893162
		{ &Z_Construct_UFunction_UFCTweenBPActionVector_TweenVectorCustomCurve, "TweenVectorCustomCurve" }, // 3108728282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenBPActionVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFCTweenBPActionVector_Statics::NewProp_ApplyEasing = { "ApplyEasing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFCTweenBPActionVector, ApplyEasing), Z_Construct_UDelegateFunction_FCTween_TweenUpdateVectorOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyEasing_MetaData), NewProp_ApplyEasing_MetaData) }; // 2748358668
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCTweenBPActionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCTweenBPActionVector_Statics::NewProp_ApplyEasing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFCTweenBPActionVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFCTweenBPAction,
	(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenBPActionVector_Statics::ClassParams = {
	&UFCTweenBPActionVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFCTweenBPActionVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenBPActionVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UFCTweenBPActionVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFCTweenBPActionVector()
{
	if (!Z_Registration_Info_UClass_UFCTweenBPActionVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenBPActionVector.OuterSingleton, Z_Construct_UClass_UFCTweenBPActionVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFCTweenBPActionVector.OuterSingleton;
}
UFCTweenBPActionVector::UFCTweenBPActionVector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenBPActionVector);
UFCTweenBPActionVector::~UFCTweenBPActionVector() {}
// ********** End Class UFCTweenBPActionVector *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h__Script_FCTween_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenBPActionVector, UFCTweenBPActionVector::StaticClass, TEXT("UFCTweenBPActionVector"), &Z_Registration_Info_UClass_UFCTweenBPActionVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenBPActionVector), 1139515926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h__Script_FCTween_911438002(TEXT("/Script/FCTween"),
	Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h__Script_FCTween_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Downloads_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h__Script_FCTween_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
