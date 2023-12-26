// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/BluePrints/WeaponInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_UWeaponInterface();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	DEFINE_FUNCTION(IWeaponInterface::execEventShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventShoot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IWeaponInterface::execEventTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventTrigger_Implementation();
		P_NATIVE_END;
	}
	void IWeaponInterface::EventShoot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EventShoot instead.");
	}
	void IWeaponInterface::EventTrigger()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EventTrigger instead.");
	}
	void UWeaponInterface::StaticRegisterNativesUWeaponInterface()
	{
		UClass* Class = UWeaponInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventShoot", &IWeaponInterface::execEventShoot },
			{ "EventTrigger", &IWeaponInterface::execEventTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrints/WeaponInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInterface, nullptr, "EventShoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWeaponInterface_EventShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInterface_EventShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BluePrints/WeaponInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponInterface, nullptr, "EventTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWeaponInterface_EventTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponInterface_EventTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponInterface);
	UClass* Z_Construct_UClass_UWeaponInterface_NoRegister()
	{
		return UWeaponInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponInterface_EventShoot, "EventShoot" }, // 2230096211
		{ &Z_Construct_UFunction_UWeaponInterface_EventTrigger, "EventTrigger" }, // 2878297997
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BluePrints/WeaponInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeaponInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInterface_Statics::ClassParams = {
		&UWeaponInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWeaponInterface()
	{
		if (!Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton, Z_Construct_UClass_UWeaponInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponInterface.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<UWeaponInterface>()
	{
		return UWeaponInterface::StaticClass();
	}
	UWeaponInterface::UWeaponInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInterface);
	UWeaponInterface::~UWeaponInterface() {}
	static FName NAME_UWeaponInterface_EventShoot = FName(TEXT("EventShoot"));
	void IWeaponInterface::Execute_EventShoot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWeaponInterface_EventShoot);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWeaponInterface*)(O->GetNativeInterfaceAddress(UWeaponInterface::StaticClass())))
		{
			I->EventShoot_Implementation();
		}
	}
	static FName NAME_UWeaponInterface_EventTrigger = FName(TEXT("EventTrigger"));
	void IWeaponInterface::Execute_EventTrigger(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UWeaponInterface_EventTrigger);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IWeaponInterface*)(O->GetNativeInterfaceAddress(UWeaponInterface::StaticClass())))
		{
			I->EventTrigger_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponInterface, UWeaponInterface::StaticClass, TEXT("UWeaponInterface"), &Z_Registration_Info_UClass_UWeaponInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponInterface), 184116776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_1232549494(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_BluePrints_WeaponInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
