// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ShootingHUD.h"
#include "Blueprint/UserWidget.h"
#include "GameMode/ShootingPlayerState.h"

AShootingHUD::AShootingHUD()
{
}

void AShootingHUD::BeginPlay()
{
	Super::BeginPlay();

	check(HudWidgetClass);

	HudWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);
	HudWidget->AddToViewport();
	BindMyPlayerState();
}

void AShootingHUD::BindMyPlayerState()
{
	APlayerController* pc = GetWorld()->GetFirstPlayerController();
	if (IsValid(pc))
	{
		AShootingPlayerState* ps = Cast<AShootingPlayerState>(pc->PlayerState);
		if (IsValid(ps))
		{
			ps->m_Dele_UpdateHp.AddDynamic(this, &AShootingHUD::OnUpdateMyHP);

			OnUpdateMyHP(ps->m_CurHP, 100);
			GEngine->AddOnScreenDebugMessage(-1, 15.01f, FColor::Blue, TEXT("AShootingHUD(ps) Bind Success"));
			return;
		}

	}
	FTimerManager& timerManager = GetWorld()->GetTimerManager();
	timerManager.SetTimer(th_BindMyPlayerState, this, &AShootingHUD::BindMyPlayerState, 0.01f, false);
}

void AShootingHUD::OnUpdateMyHP_Implementation(float CuerHP, float MaxHP)
{

}
