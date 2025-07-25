#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "HelperBPLib.generated.h"

class ABorneCharacter;
/**
 * 
 */
UCLASS()
class BORNE_API UHelperBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	 * Function to play a high priority animation that checks if it's already playing.
	 * @param SourceChar Source Character to play the animation on 
	 * @param MontageToPlay Montage to play 
	 * @param InPlayRate Play rate
	 */
	UFUNCTION(BlueprintCallable, Category = "Animation Helper Function")
	static void PlayImportantAnimMontage(ACharacter* SourceChar, UAnimMontage* MontageToPlay, float InPlayRate = 1.0f);

	/**
	 * Checks if there are any current movement vector
	 * @param SourceChar Character to check the movement input for
	 * @return Bool if character currently has movement
	 */
	UFUNCTION(BlueprintCallable, Category = "Movement helper")
	static bool HasLastMovementInput(ACharacter* SourceChar);


	UFUNCTION(BlueprintCallable, Category = "Dodge rotation")
	static void AddRotationPreDodge(ACharacter* SourceChar); 
	UFUNCTION(BlueprintCallable, Category = "Dodge rotation")
	static void ResetMeshToCharacter(ACharacter* SourceChar);

	/**
	 * Run a trace for enemies.
	 */
	static void RunAttackTrace(AActor* Self);
	TArray<AActor*> TraceIgnoreActors;

	static void ClearIgnoredActors();
		
};
	