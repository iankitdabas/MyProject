// Fill out your copyright notice in the Description page of Project Settings.


#include "Floaters.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFloaters::AFloaters()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomStaticMesh"));

	InitialLocation = FVector(0.0f);
	PlacedLocation = FVector(0.0f);
	WorldOrigin = FVector(0.0f, 0.0f, 0.0f);
	InitialDirection = FVector(0.0f, 0.0f, 0.0f);

	bInitializeFloaterLocations = false;
	bShouldFloat = false;

	InitialForce = FVector(0.0f, 0.0f, 0.0f);
	InitialTorque = FVector(0.0f, 0.0f, 0.0f);

	RunningTime = 0.f;
	Amplitude = 1.f;
	TimeStretch = 1.f;
	MidPoint = 1.f;

	Rotation = FRotator(1.0f, 0.0f, 0.0f);
    
}

// Called when the game starts or when spawned
void AFloaters::BeginPlay()
{
	Super::BeginPlay();
   
	//SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	//               OR
	//SetActorLocation(FVector(0.0f));
	//               OR
	
	float InitialX = FMath::FRandRange(-500.f, 500.f);
	float InitialY = FMath::FRandRange(-500.f, 500.f);
	float InitialZ = FMath::FRandRange(0.f, 500.f);

	InitialLocation.X = InitialX;
	InitialLocation.Y = InitialY;
	InitialLocation.Z = InitialZ;

	PlacedLocation = GetActorLocation();

	if (bInitializeFloaterLocations)
	{
		SetActorLocation(InitialLocation);
	}

	/*StaticMesh->AddForce(InitialForce);
	StaticMesh->AddTorque(InitialTorque);*/

}

// Called every frame
void AFloaters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 
	if (bShouldFloat)
	{
		/*FHitResult HitResult;
		AddActorLocalOffset(InitialDirection, true, &HitResult);

		FVector HitLocation = HitResult.Location;*/

		FVector NewLocation = GetActorLocation();
		NewLocation.Z = Amplitude * FMath::Sin(TimeStretch * RunningTime) + MidPoint;

		SetActorLocation(NewLocation);
		RunningTime += DeltaTime;

	}
    
	AddActorLocalRotation(Rotation);

}

 