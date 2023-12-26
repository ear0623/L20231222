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

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)//�𸮾�� �Լ�.
	void OnUpdateMyHP(float CuerHP,float MaxHP);

	void OnUpdateMyHP_Implementation(float CuerHP, float MaxHP);//c++ �ڵ�� �Լ�
public:
	//tsubclassof->������ Ŭ������ Ŭ������ ����� ��� Ŭ������ ��������; 
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UUserWidget> HudWidgetClass;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget* HudWidget;

	FTimerHandle th_BindMyPlayerState;
	
};
