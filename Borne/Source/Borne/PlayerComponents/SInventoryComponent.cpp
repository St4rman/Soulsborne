#include "SInventoryComponent.h"

#include "MovieSceneTracksComponentTypes.h"
#include "Borne/BorneCharacter.h"



USInventoryComponent::USInventoryComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
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
	ABorneCharacter* Player = CastChecked<ABorneCharacter>(GetOwner());
	NewWeapon->SetOwner(Player);
	NewWeapon->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale, "MeleeArmament-right");
	EquippedWeapon = NewWeapon;
}

