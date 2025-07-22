#include "DetectorComponent.h"
#include "Borne/BorneCharacter.h"

UDetectorComponent::UDetectorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	CollisionParams.AddIgnoredActor(GetOwner());
	if (GetOwner())
	{
		PlayerCharacter = Cast<ABorneCharacter>(GetOwner());
	}
}



void UDetectorComponent::BeginPlay()
{
	Super::BeginPlay();
	
	ObjectsToLookFor.Add(UEngineTypes::ConvertToObjectType(CollisionChannel));
	ActorsToIgnore.Add(GetOwner());
}

void UDetectorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

/**
 * Populates our Target list
 */
void UDetectorComponent::FireDetection()
{
	FVector CamFwd = PlayerCharacter->GetCamFwd();
	CamFwd.Z = 0.0f;
	
	const FVector Start = GetOwner()->GetActorLocation();
	
	TArray<AActor*> OutActors;
	UKismetSystemLibrary::BoxOverlapActors(
		GetWorld(),
		Start,
		FVector(DetectorRadius* 10), ObjectsToLookFor, nullptr, ActorsToIgnore, OutActors);

	if (OutActors.Num() > 0)
	{
		Targets = OutActors;
	}
	
	PickMainTarget();
	
}

/**
 * Picks out a main target from the array of hitresults
 */
void UDetectorComponent::PickMainTarget()
{
	if (Targets.Num() > 0)
	{
		AActor* FirstTarget = Targets[0];
		float FirstAngle = ComputeTargetCompareData(FirstTarget);
		
		for (AActor* Element : Targets)
		{
			if (Element == FirstTarget)
			{
				continue;
			}
			float NewAngle = ComputeTargetCompareData(Element);
			
			if (NewAngle < FirstAngle)
			{
				FirstTarget = Element;
			}
		}

		MainTarget = FirstTarget;
	}
}

/**
 * Function that computes some data to compare if one target is more likely to be main target than another
 * @param NewTarget Target whose comparison data we need
 * @return Comparison data to tell if one target is more likely to be a main target or not
 */
float UDetectorComponent::ComputeTargetCompareData(const AActor*  NewTarget) const
{
	FVector ToNew = NewTarget->GetActorLocation() - GetOwner()->GetActorLocation();
	ToNew.Normalize();

	const FVector Fwd = PlayerCharacter->GetCamFwd();

	return FMath::Acos(FVector::DotProduct(ToNew, Fwd));
}