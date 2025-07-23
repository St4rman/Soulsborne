#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "Borne/Interfaces/WeaponInterface.h"
#include "GameFramework/Actor.h"
#include "SBWeaponBase.generated.h"

class UAnimMontage;

UCLASS()
class BORNE_API ASBWeaponBase : public AActor, public IWeaponInterface
{
	GENERATED_BODY()



public:
	
	ASBWeaponBase();

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true), Category="Weapon")
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

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true), Category="Icon")
	UTexture2D* Icon;

protected:
	
	UPROPERTY(VisibleAnywhere, meta=(AllowPrivateAccess=true), Category="Equipped")
	bool bIsEquipped = false;
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	UAnimMontage* GetLightAnim() const { return LightAttackAnim; }

	UStaticMeshComponent* GetMesh() const { return MeshComp; }

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetIcon() const { return Icon; }

	UFUNCTION(BlueprintCallable)
	virtual void OnWeaponPickup_Implementation(AActor* ReferenceActor) override;

	UFUNCTION(BlueprintCallable)
	virtual void OnWeaponDrop_Implementation() override;

	UFUNCTION(BlueprintCallable)
	bool IsWeaponEquipped(){ return bIsEquipped; }

	UFUNCTION(BlueprintNativeEvent)
	void StopFloating();
};
