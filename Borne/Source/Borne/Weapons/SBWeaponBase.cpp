#include "SBWeaponBase.h"
#include "Borne/BorneCharacter.h"


void ASBWeaponBase::OnWeaponPickup_Implementation(AActor* ReferenceActor)
{
	const ABorneCharacter* Player = Cast<ABorneCharacter>(ReferenceActor);
	Player->GetInventoryComponent()->SetCurrentEquippedWeapon(this);
	Player->GetPlayerHUD()->SetMeleeIcon(Icon);
	IWeaponInterface::OnWeaponPickup_Implementation(ReferenceActor);
	Destroy();
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
	
}

void ASBWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

