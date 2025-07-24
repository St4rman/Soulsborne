#include "SDmgProjectile.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Borne/BorneCharacter.h"

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
	MovementComponent->InitialSpeed = 1000;
	MovementComponent->bRotationFollowsVelocity = true;
	MovementComponent->bInitialVelocityInLocalSpace = true;
	
}


void ASDmgProjectile::BeginPlay()
{
	Super::BeginPlay();
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
		if (const ABorneCharacter* Player =  Cast<ABorneCharacter>(OtherActor))
		{
			FGameplayEffectContextHandle ContextHandle =  Player->GetAbilitySystemComponent()->MakeEffectContext();
			ContextHandle.AddSourceObject(GetOwner());
		
			const FGameplayEffectSpecHandle SpecHandle =  Player->GetAbilitySystemComponent()->MakeOutgoingSpec(DamageGameplayEffect, 1.0f, ContextHandle);
			const FGameplayEffectSpecHandle NewSpecHandle = UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, DamageTag, ProjectileDamage * -1.0f );
			Player->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf( *NewSpecHandle.Data.Get() );
			
		}
		Destroy();
	}
}

void ASDmgProjectile::OnLifeExpired()
{
	Destroy();
}	