#include "SInventoryComponent.h"
#include "Borne/BorneCharacter.h"

USInventoryComponent::USInventoryComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;
	EquippedWeapon = nullptr;
}


// Called when the game starts
void USInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void USInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}


void USInventoryComponent::SetCurrentEquippedWeapon(ASBWeaponBase* NewWeapon)
{
	if (ensure(NewWeapon->GetClass()))
	{
		ABorneCharacter* Player = CastChecked<ABorneCharacter>(GetOwner());
		const FVector HandLoc = Player->GetMesh()->GetSocketLocation("MeleeArmament-right");
		const FTransform SpawnTM = FTransform(FRotator(0, 0, 0), HandLoc);
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = Cast<APawn>(GetOwner());
		
		auto CurrentWep = GetWorld()->SpawnActor<ASBWeaponBase>(NewWeapon->GetClass(), SpawnTM, SpawnParams);
		CurrentWep->SetOwner(Player);
		CurrentWep->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale, "MeleeArmament-right");
		EquippedWeapon = CurrentWep;
	}
}

void USInventoryComponent::DropCurrentWeapon()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		EquippedWeapon = nullptr;
	}
}
