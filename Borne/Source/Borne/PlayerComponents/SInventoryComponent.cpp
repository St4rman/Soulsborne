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
	if (EquippedWeapon)
	{
		return;
	}
	ABorneCharacter* Player = CastChecked<ABorneCharacter>(GetOwner());
	NewWeapon->SetOwner(Player);
	NewWeapon->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale, "MeleeArmament-right");
	EquippedWeapon = NewWeapon;
}

void USInventoryComponent::DropCurrentWeapon()
{
	if (EquippedWeapon)
	{
		EquippedWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		EquippedWeapon = nullptr;
	}
}