// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BluePrints/Weapons.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGCODEGAME_Weapons_generated_h
#error "Weapons.generated.h already included, missing '#pragma once' in Weapons.h"
#endif
#define SHOOTINGCODEGAME_Weapons_generated_h

#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_SPARSE_DATA
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEventShoot); \
	DECLARE_FUNCTION(execEventTrigger);


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_CALLBACK_WRAPPERS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapons(); \
	friend struct Z_Construct_UClass_AWeapons_Statics; \
public: \
	DECLARE_CLASS(AWeapons, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingCodeGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapons) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapons*>(this); }


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapons(AWeapons&&); \
	NO_API AWeapons(const AWeapons&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapons); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapons); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapons) \
	NO_API virtual ~AWeapons();


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_10_PROLOG
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_SPARSE_DATA \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_CALLBACK_WRAPPERS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_INCLASS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGCODEGAME_API UClass* StaticClass<class AWeapons>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
