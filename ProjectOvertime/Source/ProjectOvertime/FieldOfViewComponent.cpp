#include "FieldOfViewComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"

UFieldOfViewComponent::UFieldOfViewComponent()
{
    PrimaryComponentTick.bCanEverTick = false;

    // Default FOV angle in degrees
    FieldOfViewAngle = 90.0f;
}

void UFieldOfViewComponent::BeginPlay()
{
    Super::BeginPlay();

    // Cache the owning pawn
    OwnerPawn = Cast<APawn>(GetOwner());
}

bool UFieldOfViewComponent::IsActorInView(AActor* TargetActor, float dist)
{
    if (!OwnerPawn || !TargetActor || !TargetActor->WasRecentlyRendered()) return false;


    FVector PlayerLocation = OwnerPawn->GetActorLocation();
    FVector PlayerForwardVector = OwnerPawn->GetActorForwardVector();

    FVector TargetLocation = TargetActor->GetActorLocation();
    FVector DirectionToTarget = (TargetLocation - PlayerLocation).GetSafeNormal();

    float Distance = FVector::Dist(PlayerLocation, TargetLocation);
    if (Distance > dist) return false;

    // Calculate the angle between the player's forward vector and the direction to the target
    float DotProduct = FVector::DotProduct(PlayerForwardVector, DirectionToTarget);
    float AngleDegrees = FMath::RadiansToDegrees(acosf(DotProduct));

    return AngleDegrees <= FieldOfViewAngle / 2.0f;
}

bool UFieldOfViewComponent::IsActorVisible(AActor* TargetActor,float dist)
{

    if (!IsActorInView(TargetActor,dist)) return false;
    /// Get the camera location and rotation
    FVector CameraLocation;
    FRotator CameraRotation;
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    // Get the camera location and rotation
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    // Get the forward vector from the camera rotation
    FVector Forward = CameraRotation.Vector();

    // Define the length of the lines
    float LineLength = 1000.0f; // Adjust this value as needed
    float Angle = 30.0f; // Angle for up, down, left, right

    // Create the rotation quaternions for the angles
    FQuat PitchRotation = FQuat(FVector::RightVector, FMath::DegreesToRadians(Angle));
    FQuat YawRotation = FQuat(FVector::UpVector, FMath::DegreesToRadians(Angle));

    // Array of direction vectors for the 5 rays
    TArray<FVector> RayDirections;
    RayDirections.Add(Forward); // Forward
    RayDirections.Add(PitchRotation.RotateVector(Forward)); // Forward-Up
    RayDirections.Add(PitchRotation.Inverse().RotateVector(Forward)); // Forward-Down
    RayDirections.Add(YawRotation.RotateVector(Forward)); // Forward-Right
    RayDirections.Add(YawRotation.Inverse().RotateVector(Forward)); // Forward-Left

    // Set up the collision query parameters
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(PlayerController->GetPawn()); // Ignore the player

    // Perform the raycasts
    for (const FVector& Direction : RayDirections)
    {
        FVector EndLocation = CameraLocation + Direction * LineLength;
        FHitResult HitResult;

        // Perform the line trace (raycast)
        bool bHit = GetWorld()->LineTraceSingleByChannel(
            HitResult,             // Hit result
            CameraLocation,        // Start location
            EndLocation,           // End location
            ECC_Visibility,        // Collision channel
            QueryParams            // Collision query parameters
        );

        //Visualize the raycast
        //DrawDebugLine(GetWorld(), CameraLocation, EndLocation, bHit ? FColor::Green : FColor::Red, false, 1.0f, 0, 5.0f);

        // Check if the ray hit the target actor (you can replace this with your specific target check)
        if (bHit && HitResult.GetActor())
        {

            AActor* HitActor = HitResult.GetActor();
            UE_LOG(LogTemp, Warning, TEXT("Objeto Atingido: %s"), *HitActor->GetName());
            UE_LOG(LogTemp, Warning, TEXT("Objeto Alvo: %s"), *TargetActor->GetName());
            if (HitActor == TargetActor) // Replace with your specific target check
            {
                return true; // The ray hit the target
            }
        }
    }


    return false;
}