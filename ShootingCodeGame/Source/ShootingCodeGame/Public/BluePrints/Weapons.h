// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponInterface.h"
#include "Weapons.generated.h"

UCLASS()
class SHOOTINGCODEGAME_API AWeapons : public AActor, public IWeaponInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapons();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventTrigger();
	virtual void EventTrigger_Implementation()override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventShoot();
	virtual void EventShoot_Implementation()override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* WeaponMesh;

};
