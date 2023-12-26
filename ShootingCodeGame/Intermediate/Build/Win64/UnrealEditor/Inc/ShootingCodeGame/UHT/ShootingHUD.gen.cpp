// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/GameMode/ShootingHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingHUD();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	DEFINE_FUNCTION(AShootingHUD::execOnUpdateMyHP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CuerHP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateMyHP_Implementation(Z_Param_CuerHP,Z_Param_MaxHP);
		P_NATIVE_END;
	}
	struct ShootingHUD_eventOnUpdateMyHP_Parms
	{
		float CuerHP;
		float MaxHP;
	};
	static FName NAME_AShootingHUD_OnUpdateMyHP = FName(TEXT("OnUpdateMyHP"));
	void AShootingHUD::OnUpdateMyHP(float CuerHP, float MaxHP)
	{
		ShootingHUD_eventOnUpdateMyHP_Parms Parms;
		Parms.CuerHP=CuerHP;
		Parms.MaxHP=MaxHP;
		ProcessEvent(FindFunctionChecked(NAME_AShootingHUD_OnUpdateMyHP),&Parms);
	}
	void AShootingHUD::StaticRegisterNativesAShootingHUD()
	{
		UClass* Class = AShootingHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpdateMyHP", &AShootingHUD::execOnUpdateMyHP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CuerHP;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::NewProp_CuerHP = { "CuerHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingHUD_eventOnUpdateMyHP_Parms, CuerHP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingHUD_eventOnUpdateMyHP_Parms, MaxHP), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::NewProp_CuerHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::NewProp_MaxHP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingHUD, nullptr, "OnUpdateMyHP", nullptr, nullptr, Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::PropPointers), sizeof(ShootingHUD_eventOnUpdateMyHP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::PropPointers) < 2048);
	static_assert(sizeof(ShootingHUD_eventOnUpdateMyHP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingHUD);
	UClass* Z_Construct_UClass_AShootingHUD_NoRegister()
	{
		return AShootingHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShootingHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HudWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingHUD_OnUpdateMyHP, "OnUpdateMyHP" }, // 2981221713
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameMode/ShootingHUD.h" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidgetClass_MetaData[] = {
		{ "Category", "ShootingHUD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tsubclassof->\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd; \n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tsubclassof->\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd;" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidgetClass = { "HudWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingHUD, HudWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidgetClass_MetaData), Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidget_MetaData[] = {
		{ "Category", "ShootingHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidget = { "HudWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingHUD, HudWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidget_MetaData), Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingHUD_Statics::NewProp_HudWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingHUD_Statics::ClassParams = {
		&AShootingHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShootingHUD()
	{
		if (!Z_Registration_Info_UClass_AShootingHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingHUD.OuterSingleton, Z_Construct_UClass_AShootingHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingHUD.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<AShootingHUD>()
	{
		return AShootingHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingHUD);
	AShootingHUD::~AShootingHUD() {}
	struct Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingHUD, AShootingHUD::StaticClass, TEXT("AShootingHUD"), &Z_Registration_Info_UClass_AShootingHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingHUD), 3904020099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingHUD_h_217948149(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
