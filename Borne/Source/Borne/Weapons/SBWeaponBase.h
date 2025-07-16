#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Actor.h"
#include "SBWeaponBase.generated.h"

class UAnimMontage;

UCLASS()
class BORNE_API ASBWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	
	ASBWeaponBase();

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Weapon")
	UStaticMeshComponent* MeshComp;
	
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Anim Montage")
	UAnimMontage* LightAttackAnim;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Anim Montage")
	UAnimMontage* HeavyAttackAnim;
	
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Stats")
	float LightDamage;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Stats")
	float ChargedDmg;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Stats")
	float LightStaminaCost;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Stats")
	float HeavyStaminaCost;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Stats")
	float LightAttackSpeed;
	
protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	UAnimMontage* GetLightAnim() const { return LightAttackAnim; }

	UStaticMeshComponent* GetMesh() const { return MeshComp; }
};
