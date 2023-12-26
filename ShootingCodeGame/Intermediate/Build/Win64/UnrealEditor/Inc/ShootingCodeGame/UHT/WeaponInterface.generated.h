// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BluePrints/WeaponInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGCODEGAME_WeaponInterface_generated_h
#error "WeaponInterface.generated.h already included, missing '#pragma once' in WeaponInterface.h"
#endif
#define SHOOTINGCODEGAME_WeaponInterface_generated_h

#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_SPARSE_DATA
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EventShoot_Implementation() {}; \
	virtual void EventTrigger_Implementation() {}; \
 \
	DECLARE_FUNCTION(execEventShoot); \
	DECLARE_FUNCTION(execEventTrigger);


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_ACCESSORS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_CALLBACK_WRAPPERS
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponInterface(UWeaponInterface&&); \
	NO_API UWeaponInterface(const UWeaponInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponInterface) \
	NO_API virtual ~UWeaponInterface();


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWeaponInterface(); \
	friend struct Z_Construct_UClass_UWeaponInterface_Statics; \
public: \
	DECLARE_CLASS(UWeaponInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShootingCodeGame"), NO_API) \
	DECLARE_SERIALIZER(UWeaponInterface)


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWeaponInterface() {} \
public: \
	typedef UWeaponInterface UClassType; \
	typedef IWeaponInterface ThisClass; \
	static void Execute_EventShoot(UObject* O); \
	static void Execute_EventTrigger(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_9_PROLOG
#define FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_SPARSE_DATA \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_ACCESSORS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_CALLBACK_WRAPPERS \
	FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGCODEGAME_API UClass* StaticClass<class UWeaponInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
