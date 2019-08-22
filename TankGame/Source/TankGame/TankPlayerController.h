// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank* GetPlayerControlledTank() const;

	void AimTowardsCrosshair();

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

private:
	bool GetSightRayHitLocation(FVector& OurHitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrossHairLocationX = 0.5;
	UPROPERTY(EditAnywhere)
	float CrossHairLocationY = 0.33333;

};
