// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floaters.generated.h"

UCLASS()
class MYPROJECT_API AFloaters : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloaters();
	
	    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ActorMeshComponents")
		UStaticMeshComponent* StaticMesh;

		// Location used by SetActorLocation() when BeginPlay() is called
		UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
		FVector InitialLocation;

		// Location of the Actor when dragged in from the editor 
		UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
		FVector PlacedLocation;

		UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Floater Variables")
		FVector WorldOrigin;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Variables")
		FVector InitialDirection; 

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Variables")
		bool bShouldFloat;

		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Floater Variables")
		bool bInitializeFloaterLocations;

		UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Floater Variables")
		FVector InitialForce;

		UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Floater Variables")
		FVector InitialTorque;

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floater Variables")
		FRotator Rotation;

private:
	 
	float RunningTime;

	UPROPERTY(EditAnywhere, Category = "FloaterVariables | Wave parameters")
	float Amplitude;

	UPROPERTY(EditAnywhere, Category = "FloaterVariables | Wave parameters")
	float TimeStretch;

	UPROPERTY(EditAnywhere, Category = "FloaterVariables | Wave parameters")
	float MidPoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
