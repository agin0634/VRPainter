// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPainter_ColorPicker.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPainter_ColorPicker() {}
// Cross Module References
	VRPAINTERPLUGIN_API UFunction* Z_Construct_UFunction_UVRPainter_ColorPicker_ColorPickerWheel();
	VRPAINTERPLUGIN_API UClass* Z_Construct_UClass_UVRPainter_ColorPicker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VRPAINTERPLUGIN_API UClass* Z_Construct_UClass_UVRPainter_ColorPicker_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VRPainterPlugin();
// End Cross Module References
	void UVRPainter_ColorPicker::StaticRegisterNativesUVRPainter_ColorPicker()
	{
		UClass* Class = UVRPainter_ColorPicker::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ColorPickerWheel", (Native)&UVRPainter_ColorPicker::execColorPickerWheel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVRPainter_ColorPicker_ColorPickerWheel()
	{
		struct VRPainter_ColorPicker_eventColorPickerWheel_Parms
		{
			float Xaxis;
			float Yaxis;
			FLinearColor ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVRPainter_ColorPicker();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ColorPickerWheel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(VRPainter_ColorPicker_eventColorPickerWheel_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, VRPainter_ColorPicker_eventColorPickerWheel_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FLinearColor());
			UProperty* NewProp_Yaxis = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Yaxis"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Yaxis, VRPainter_ColorPicker_eventColorPickerWheel_Parms), 0x0010000000000080);
			UProperty* NewProp_Xaxis = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Xaxis"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Xaxis, VRPainter_ColorPicker_eventColorPickerWheel_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ColorPicker"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VRPainter_ColorPicker.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRPainter_ColorPicker_NoRegister()
	{
		return UVRPainter_ColorPicker::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRPainter_ColorPicker()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_VRPainterPlugin();
			OuterClass = UVRPainter_ColorPicker::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVRPainter_ColorPicker_ColorPickerWheel());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVRPainter_ColorPicker_ColorPickerWheel(), "ColorPickerWheel"); // 1253965236
				static TCppClassTypeInfo<TCppClassTypeTraits<UVRPainter_ColorPicker> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("VRPainter"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRPainter_ColorPicker.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VRPainter_ColorPicker.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRPainter_ColorPicker, 3663217102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRPainter_ColorPicker(Z_Construct_UClass_UVRPainter_ColorPicker, &UVRPainter_ColorPicker::StaticClass, TEXT("/Script/VRPainterPlugin"), TEXT("UVRPainter_ColorPicker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRPainter_ColorPicker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
