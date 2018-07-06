// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPainter_ColorPicker.h"


// Sets default values for this component's properties
UVRPainter_ColorPicker::UVRPainter_ColorPicker()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVRPainter_ColorPicker::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVRPainter_ColorPicker::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FLinearColor UVRPainter_ColorPicker::ColorPickerWheel(float Xaxis, float Yaxis) {
	XAxis = Xaxis;
	YAxis = Yaxis;
	float  Degree = UKismetMathLibrary::DegAtan2(XAxis, YAxis);
	UE_LOG(LogTemp, Warning, TEXT("%f"), Degree);
	FVector2D CurrentVector = FVector2D(XAxis, YAxis);

	if (Degree < 0) {
		PickedColor = UKismetMathLibrary::HSVToRGB(
			UKismetMathLibrary::MapRangeClamped(Degree, -180.f, 0.f, 180.f, 360.f),
			CurrentVector.Size(),
			1.f,
			1.f
		);
	}
	else
	{
		PickedColor = UKismetMathLibrary::HSVToRGB(
			Degree,
			CurrentVector.Size(),
			1.f,
			1.f
		);
	}

	return PickedColor;
}

