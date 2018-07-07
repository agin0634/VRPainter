// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef VRPAINTERPLUGIN_VRPainter_ColorPicker_generated_h
#error "VRPainter_ColorPicker.generated.h already included, missing '#pragma once' in VRPainter_ColorPicker.h"
#endif
#define VRPAINTERPLUGIN_VRPainter_ColorPicker_generated_h

#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execColorPickerWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Xaxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->ColorPickerWheel(Z_Param_Xaxis,Z_Param_Yaxis,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execColorPickerWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Xaxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=this->ColorPickerWheel(Z_Param_Xaxis,Z_Param_Yaxis,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRPainter_ColorPicker(); \
	friend VRPAINTERPLUGIN_API class UClass* Z_Construct_UClass_UVRPainter_ColorPicker(); \
public: \
	DECLARE_CLASS(UVRPainter_ColorPicker, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPainterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRPainter_ColorPicker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVRPainter_ColorPicker(); \
	friend VRPAINTERPLUGIN_API class UClass* Z_Construct_UClass_UVRPainter_ColorPicker(); \
public: \
	DECLARE_CLASS(UVRPainter_ColorPicker, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPainterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRPainter_ColorPicker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRPainter_ColorPicker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRPainter_ColorPicker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRPainter_ColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRPainter_ColorPicker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRPainter_ColorPicker(UVRPainter_ColorPicker&&); \
	NO_API UVRPainter_ColorPicker(const UVRPainter_ColorPicker&); \
public:


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRPainter_ColorPicker(UVRPainter_ColorPicker&&); \
	NO_API UVRPainter_ColorPicker(const UVRPainter_ColorPicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRPainter_ColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRPainter_ColorPicker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRPainter_ColorPicker)


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_13_PROLOG
#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_RPC_WRAPPERS \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_INCLASS \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VRPainterPlugin_Source_VRPainterPlugin_Public_VRPainter_ColorPicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
