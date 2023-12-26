// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ShootingPlayerState.h"
#include "Net/UnrealNetwork.h"

void AShootingPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AShootingPlayerState, m_CurHP);//±ÔÄ¢
}

void AShootingPlayerState::AddDamage(float Damage)
{
	m_CurHP = m_CurHP - Damage;
	OnRep_CurHP();
}

void AShootingPlayerState::OnRep_CurHP()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red,FString::Printf(TEXT("OnRep_CureHP = %f"),m_CurHP));
}
