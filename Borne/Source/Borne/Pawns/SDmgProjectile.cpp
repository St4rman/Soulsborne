#include "SDmgProjectile.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Borne/BorneCharacter.h"
#include "Borne/AI/SoulsAICharacter.h"

ASDmgProjectile::ASDmgProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASDmgProjectile::OnActorOverlap);
	SphereComp->SetCollisionProfileName("Projectile");
	RootComponent = SphereComp;
	
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>("ProjectileMesh");
	ProjectileMesh->SetupAttachment(SphereComp);
	
	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComponent");
	MovementComponent->InitialSpeed = 3000;
	MovementComponent->bRotationFollowsVelocity = true;
	MovementComponent->bInitialVelocityInLocalSpace = true;
	
}


void ASDmgProjectile::BeginPlay()
{
	Super::BeginPlay();
	// GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "ASDmgProjectile::BeginPlay");
	GetWorld()->GetTimerManager().SetTimer(LIfeCycleTimer, this, &ASDmgProjectile::OnLifeExpired,LifeTime);
}


void ASDmgProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ASDmgProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{

		if (ASoulsAICharacter* boss = Cast<ASoulsAICharacter>(OtherActor))
		{
			return;
		}

		if (ASDmgProjectile* dmg = Cast<ASDmgProjectile>(OtherActor))
		{
			return;
		}
		if (ABorneCharacter* Player =  Cast<ABorneCharacter>(OtherActor))
		{
			Player->DoPlayerDamage_Implementation(ProjectileDamage, GetOwner());
			Destroy();
		}
		
		Destroy();
	}
}

void ASDmgProjectile::OnLifeExpired()
{
	Destroy();
}	