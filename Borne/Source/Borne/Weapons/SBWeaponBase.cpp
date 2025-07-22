#include "SBWeaponBase.h"
#include "Borne/BorneCharacter.h"


void ASBWeaponBase::OnWeaponPickup_Implementation(AActor* ReferenceActor)
{
	const ABorneCharacter* Player = Cast<ABorneCharacter>(ReferenceActor);
	Player->GetInventoryComponent()->SetCurrentEquippedWeapon(this);
	Player->GetPlayerHUD()->SetMeleeIcon(Icon);
	bIsEquipped = true;
	IWeaponInterface::OnWeaponPickup_Implementation(ReferenceActor);
	Destroy();
}

void ASBWeaponBase::OnWeaponDrop_Implementation()
{
	bIsEquipped = false;
	GetMesh()->SetSimulatePhysics(true);
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

void ASBWeaponBase::StopFloating_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Stop Floating has not been implemented. "));
}


ASBWeaponBase::ASBWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Model"));
	MeshComp->SetupAttachment(RootComponent);
	
}

void ASBWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	MeshComp->SetEnableGravity(true);
}

void ASBWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

