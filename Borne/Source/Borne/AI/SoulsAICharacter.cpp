#include "SoulsAICharacter.h"

#include "Borne/BorneCharacter.h"
#include "Borne/Core/HelperData.h"
#include "Kismet/GameplayStatics.h"


ASoulsAICharacter::ASoulsAICharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	LockOnWidget = CreateDefaultSubobject<UWidgetComponent>("LockOnWidget");
	LockOnWidget->SetupAttachment(RootComponent);
	LockOnWidget->SetVisibility(false);

	MotionWarp = CreateDefaultSubobject<UMotionWarpingComponent>("MotionWarp");

	NiagaraRoarComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraRoarComponent->SetupAttachment(GetMesh());
	NiagaraRoarComponent->SetAutoActivate(false);

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComponent");
}

void ASoulsAICharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ASoulsAICharacter::OnPawnSeen);
	
}

void ASoulsAICharacter::BeginPlay()
{
	Super::BeginPlay();

	const FVector HandLoc =  GetMesh()->GetSocketLocation("MeleeArmament-boss-r");
	const FTransform SpawnTM = FTransform(GetMesh()->GetSocketRotation("MeleeArmament-boss-r"), HandLoc);
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Instigator = Cast<APawn>(GetOwner());

	ASBWeaponBase* CurrentWep  =  GetWorld()->SpawnActor<ASBWeaponBase>(WeaponBase, SpawnTM, SpawnParams);
	CurrentWep->SetOwner(this);
	CurrentWep->GetMesh()->SetWorldScale3D(FVector(2, 2, 2));
	CurrentWep->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, "MeleeArmament-boss-r");
	MainWeapon = CurrentWep;

	if (MaxHealth < 0)
	{
		UE_LOG(LogTemp, Error, TEXT("MaxHealth is 0"));
	}
	Health = MaxHealth;

	Target = UGameplayStatics::GetActorOfClass(GetWorld(), ABorneCharacter::StaticClass());
}

void ASoulsAICharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateMotionWarpingTarget();
}

void ASoulsAICharacter::TakeDamage( const float DamageAmount )
{
	const float HealthDelta = Health - DamageAmount;
	if (HealthDelta > 0)
	{
		Health = HealthDelta;
		UpdateHealth();
	}
}

void ASoulsAICharacter::SetSelfAsTarget_Implementation()
{
	ITargetableInterface::SetSelfAsTarget_Implementation();
	LockOnWidget->SetVisibility(true);
}

void ASoulsAICharacter::RemoveSelfAsTarget_Implementation()
{ 
	LockOnWidget->SetVisibility(false);
	ITargetableInterface::RemoveSelfAsTarget_Implementation();
}

void ASoulsAICharacter::OnPawnSeen(APawn* Pawn)
{
	AAIController* AIC = Cast<AAIController>(GetController());
	if (AIC)
	{
		UBlackboardComponent* BBComp = AIC->GetBlackboardComponent();
		BBComp->SetValueAsObject("TargetActor", Pawn);
		Target = Pawn;
	}
}

void ASoulsAICharacter::UpdateMotionWarpingTarget()
{
	if (Target == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Target is null"));
		return;
	}
	const FVector Location = Target->GetActorLocation();
	
	FVector ToTarget = Location - GetActorLocation();
	ToTarget.Normalize();
	const FVector StoppingPos = Location - ToTarget * 200.0f;
	
	const FVector LookAt = FVector(Location.X, Location.Y, GetActorLocation().Z);
	const FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LookAt);
	
	MotionWarp->AddOrUpdateWarpTargetFromLocationAndRotation(MotionWarpName, StoppingPos, Rotation);
}




