// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCodeGame_init() {}
	SHOOTINGCODEGAME_API UFunction* Z_Construct_UDelegateFunction_ShootingCodeGame_Dele_UpdateHp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShootingCodeGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShootingCodeGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ShootingCodeGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootingCodeGame_Dele_UpdateHp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShootingCodeGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x43CC601D,
				0xE1168DF8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShootingCodeGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShootingCodeGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShootingCodeGame(Z_Construct_UPackage__Script_ShootingCodeGame, TEXT("/Script/ShootingCodeGame"), Z_Registration_Info_UPackage__Script_ShootingCodeGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x43CC601D, 0xE1168DF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
