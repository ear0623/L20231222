// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootingHUD.generated.h"

class UUserWidget;
/**
 * 
 */
UCLASS()
class SHOOTINGCODEGAME_API AShootingHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShootingHUD();

	virtual void BeginPlay() override;

public:
	void BindMyPlayerState();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)//언리얼용 함수.
	void OnUpdateMyHP(float CuerHP,float MaxHP);

	void OnUpdateMyHP_Implementation(float CuerHP, float MaxHP);//c++ 코드용 함수
public:
	//tsubclassof->지정한 클래스와 클래스를 상속한 모든 클래스를 지정가능; 
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UUserWidget> HudWidgetClass;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget* HudWidget;

	FTimerHandle th_BindMyPlayerState;
	
};
