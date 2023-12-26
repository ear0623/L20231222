// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ShootingPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGCODEGAME_ShootingPlayerState_generated_h
#error "ShootingPlayerState.generated.h already included, missing '#pragma once' in ShootingPlayerState.h"
#endif
#define SHOOTINGCODEGAME_ShootingPlayerState_generated_h

#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_9_DELEGATE \
SHOOTINGCODEGAME_API void FDele_UpdateHp_DelegateWrapper(const FMulticastScriptDelegate& Dele_UpdateHp, float CurHp, float MaxHp);


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_SPARSE_DATA
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurHP); \
	DECLARE_FUNCTION(execAddDamage);


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingPlayerState(); \
	friend struct Z_Construct_UClass_AShootingPlayerState_Statics; \
public: \
	DECLARE_CLASS(AShootingPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingCodeGame"), NO_API) \
	DECLARE_SERIALIZER(AShootingPlayerState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		m_CurHP=NETFIELD_REP_START, \
		NETFIELD_REP_END=m_CurHP	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingPlayerState(AShootingPlayerState&&); \
	NO_API AShootingPlayerState(const AShootingPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingPlayerState) \
	NO_API virtual ~AShootingPlayerState();


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_14_PROLOG
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_SPARSE_DATA \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGCODEGAME_API UClass* StaticClass<class AShootingPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
