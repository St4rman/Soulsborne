#include "SInventoryComponent.h"
#include "Borne/BorneCharacter.h"

USInventoryComponent::USInventoryComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;
	EquippedWeapon = nullptr;
	CurrentTargetWeapon = nullptr;

	if (GetOwner())
	{
		Player = CastChecked<ABorneCharacter>(GetOwner());
	}
}


// Called when the game starts
void USInventoryComponent::BeginPlay()
{
	if (DetectorRadius == 0 )
	{
		DetectorRadius = 100.0f;
	}
	Super::BeginPlay();
	
}

void USInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	WeaponInPickUpRange();
}


void USInventoryComponent::SetCurrentEquippedWeapon(ASBWeaponBase* NewWeapon)
{
	if (ensure(NewWeapon->GetClass()))
	{
		const FVector HandLoc = Player->GetMesh()->GetSocketLocation("MeleeArmament-right");
		const FTransform SpawnTM = FTransform(FRotator(0, 0, 0), HandLoc);
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = Cast<APawn>(GetOwner());
		
		ASBWeaponBase* CurrentWep = GetWorld()->SpawnActor<ASBWeaponBase>(NewWeapon->GetClass(), SpawnTM, SpawnParams);
		CurrentWep->SetOwner(Player);
		CurrentWep->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale, "MeleeArmament-right");
		EquippedWeapon = CurrentWep;
		ActorsToIgnore.Add(CurrentWep);
	}
}

void USInventoryComponent::DropCurrentWeapon()
{
	if (EquippedWeapon
		&& EquippedWeapon->Implements<UWeaponInterface>())
	{
		
		EquippedWeapon->OnWeaponDrop_Implementation();
		EquippedWeapon = nullptr;
		ActorsToIgnore.Empty(0);
	}
}

bool USInventoryComponent::WeaponInPickUpRange()
{
	const FVector BoxPos = GetOwner()->GetActorLocation();
	TArray<AActor*> OutActor;
	UKismetSystemLibrary::BoxOverlapActors(
		GetWorld(),
		BoxPos, FVector(DetectorRadius, DetectorRadius, DetectorRadius), WeaponObjectType, nullptr, ActorsToIgnore,  OutActor );

	UKismetSystemLibrary::DrawDebugBox(GetWorld(), BoxPos,FVector(DetectorRadius, DetectorRadius, DetectorRadius), FColor::Red, FRotator::ZeroRotator, 3.0f, 1.0f );

	if (OutActor.Num() > 0)
	{
		ASBWeaponBase* DetectedWeapon = CastChecked<ASBWeaponBase>(OutActor[0]);
		if (DetectedWeapon->Implements<UWeaponInterface>())
		{
			CurrentTargetWeapon = DetectedWeapon;
		}
	}
	return OutActor.Num() > 0;
}

void USInventoryComponent::PickUpWeapon()
{
	if (WeaponInPickUpRange())
	{
		if (EquippedWeapon)
		{
			DropCurrentWeapon();
		}
		if (CurrentTargetWeapon->Implements<UWeaponInterface>())
		{
			CurrentTargetWeapon->OnWeaponPickup_Implementation(GetOwner());
		}
	}
	
}