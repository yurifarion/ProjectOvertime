// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FieldOfViewComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTOVERTIME_API UFieldOfViewComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    // Constructor
    UFieldOfViewComponent();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Checks if the specified actor is within the field of view
    UFUNCTION(BlueprintCallable, Category = "Field Of View")
    bool IsActorInView(AActor* TargetActor, float dist);

    // Checks if the specified actor is visible (no obstacles between owner and target)
    UFUNCTION(BlueprintCallable, Category = "Field Of View")
    bool IsActorVisible(AActor* TargetActor, float dist);

private:
    // The owning pawn of this component
    APawn* OwnerPawn;

    // The field of view angle in degrees (default is 90 degrees)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Field Of View", meta = (AllowPrivateAccess = "true"))
    float FieldOfViewAngle;
};