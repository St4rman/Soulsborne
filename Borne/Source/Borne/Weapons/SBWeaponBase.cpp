#include "SBWeaponBase.h"


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

