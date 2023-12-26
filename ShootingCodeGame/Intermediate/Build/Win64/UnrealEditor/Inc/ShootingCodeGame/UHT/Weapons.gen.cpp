// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/BluePrints/Weapons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapons() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AWeapons();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AWeapons_NoRegister();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	DEFINE_FUNCTION(AWeapons::execEventShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventShoot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapons::execEventTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventTrigger_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWeapons_EventShoot = FName(TEXT("EventShoot"));
	void AWeapons::EventShoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapons_EventShoot),NULL);
	}
	static FName NAME_AWeapons_EventTrigger = FName(TEXT("EventTrigger"));
	void AWeapons::EventTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapons_EventTrigger),NULL);
	}
	void AWeapons::StaticRegisterNativesAWeapons()
	{
		UClass* Class = AWeapons::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventShoot", &AWeapons::execEventShoot },
			{ "EventTrigger", &AWeapons::execEventTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapons_EventShoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapons_EventShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrints/Weapons.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapons_EventShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapons, nullptr, "EventShoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapons_EventShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapons_EventShoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapons_EventShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapons_EventShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapons_EventTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapons_EventTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrints/Weapons.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapons_EventTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapons, nullptr, "EventTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapons_EventTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapons_EventTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapons_EventTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapons_EventTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapons);
	UClass* Z_Construct_UClass_AWeapons_NoRegister()
	{
		return AWeapons::StaticClass();
	}
	struct Z_Construct_UClass_AWeapons_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapons_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapons_EventShoot, "EventShoot" }, // 643409370
		{ &Z_Construct_UFunction_AWeapons_EventTrigger, "EventTrigger" }, // 903851610
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BluePrints/Weapons.h" },
		{ "ModuleRelativePath", "Public/BluePrints/Weapons.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BluePrints/Weapons.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapons, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapons_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(AWeapons, IWeaponInterface), false },  // 184116776
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapons>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapons_Statics::ClassParams = {
		&AWeapons::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapons_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeapons()
	{
		if (!Z_Registration_Info_UClass_AWeapons.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapons.OuterSingleton, Z_Construct_UClass_AWeapons_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapons.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<AWeapons>()
	{
		return AWeapons::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapons);
	AWeapons::~AWeapons() {}
	struct Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapons, AWeapons::StaticClass, TEXT("AWeapons"), &Z_Registration_Info_UClass_AWeapons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapons), 1241314981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_965005844(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_Weapons_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
