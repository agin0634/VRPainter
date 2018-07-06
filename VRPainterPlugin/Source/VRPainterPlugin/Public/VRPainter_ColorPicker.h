// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Color.h"
#include "Kismet/KismetMathLibrary.h"
#include "Public/GenericPlatform/GenericPlatformMath.h"
#include "Components/SceneComponent.h"
#include "VRPainter_ColorPicker.generated.h"


UCLASS( ClassGroup=(VRPainter), meta=(BlueprintSpawnableComponent) )
class VRPAINTERPLUGIN_API UVRPainter_ColorPicker : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVRPainter_ColorPicker();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "ColorPicker")
	FLinearColor ColorPickerWheel(float Xaxis, float Yaxis);

private:
	float XAxis = 0;
	float YAxis = 0;

	FLinearColor PickedColor;
};
