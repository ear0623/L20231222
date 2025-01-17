// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ShootingCodeGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGCODEGAME_ShootingCodeGameCharacter_generated_h
#error "ShootingCodeGameCharacter.generated.h already included, missing '#pragma once' in ShootingCodeGameCharacter.h"
#endif
#define SHOOTINGCODEGAME_ShootingCodeGameCharacter_generated_h

#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_SPARSE_DATA
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResReload_Implementation(); \
	virtual void ReqReload_Implementation(); \
	virtual void MultiShoot_Implementation(); \
	virtual void ServerShoot_Implementation(); \
	virtual void ResPressFCilent_Implementation(); \
	virtual void ResPressF_Implementation(); \
	virtual void ReqPressF_Implementation(); \
 \
	DECLARE_FUNCTION(execResReload); \
	DECLARE_FUNCTION(execReqReload); \
	DECLARE_FUNCTION(execMultiShoot); \
	DECLARE_FUNCTION(execServerShoot); \
	DECLARE_FUNCTION(execResPressFCilent); \
	DECLARE_FUNCTION(execResPressF); \
	DECLARE_FUNCTION(execReqPressF);


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_CALLBACK_WRAPPERS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingCodeGameCharacter(); \
	friend struct Z_Construct_UClass_AShootingCodeGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootingCodeGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingCodeGame"), NO_API) \
	DECLARE_SERIALIZER(AShootingCodeGameCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ControlRot=NETFIELD_REP_START, \
		NETFIELD_REP_END=ControlRot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingCodeGameCharacter(AShootingCodeGameCharacter&&); \
	NO_API AShootingCodeGameCharacter(const AShootingCodeGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingCodeGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingCodeGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingCodeGameCharacter) \
	NO_API virtual ~AShootingCodeGameCharacter();


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_20_PROLOG
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_SPARSE_DATA \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_CALLBACK_WRAPPERS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGCODEGAME_API UClass* StaticClass<class AShootingCodeGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingCodeGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
