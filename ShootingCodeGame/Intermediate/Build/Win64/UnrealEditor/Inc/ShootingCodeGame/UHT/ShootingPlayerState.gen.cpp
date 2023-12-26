// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCodeGame/Public/GameMode/ShootingPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingPlayerState();
	SHOOTINGCODEGAME_API UClass* Z_Construct_UClass_AShootingPlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingCodeGame();
// End Cross Module References
	DEFINE_FUNCTION(AShootingPlayerState::execOnRep_CurHP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurHP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayerState::execAddDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDamage(Z_Param_Damage);
		P_NATIVE_END;
	}
	void AShootingPlayerState::StaticRegisterNativesAShootingPlayerState()
	{
		UClass* Class = AShootingPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDamage", &AShootingPlayerState::execAddDamage },
			{ "OnRep_CurHP", &AShootingPlayerState::execOnRep_CurHP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics
	{
		struct ShootingPlayerState_eventAddDamage_Parms
		{
			float Damage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayerState_eventAddDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/ShootingPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayerState, nullptr, "AddDamage", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::ShootingPlayerState_eventAddDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::ShootingPlayerState_eventAddDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayerState_AddDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayerState_AddDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replicate Function\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ShootingPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicate Function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayerState, nullptr, "OnRep_CurHP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingPlayerState);
	UClass* Z_Construct_UClass_AShootingPlayerState_NoRegister()
	{
		return AShootingPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AShootingPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CurHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_CurHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCodeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingPlayerState_AddDamage, "AddDamage" }, // 1074196951
		{ &Z_Construct_UFunction_AShootingPlayerState_OnRep_CurHP, "OnRep_CurHP" }, // 3079346312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ShootingPlayerState.h" },
		{ "ModuleRelativePath", "Public/GameMode/ShootingPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayerState_Statics::NewProp_m_CurHP_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameMode/ShootingPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingPlayerState_Statics::NewProp_m_CurHP = { "m_CurHP", "OnRep_CurHP", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayerState, m_CurHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::NewProp_m_CurHP_MetaData), Z_Construct_UClass_AShootingPlayerState_Statics::NewProp_m_CurHP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayerState_Statics::NewProp_m_CurHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingPlayerState_Statics::ClassParams = {
		&AShootingPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShootingPlayerState()
	{
		if (!Z_Registration_Info_UClass_AShootingPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingPlayerState.OuterSingleton, Z_Construct_UClass_AShootingPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingPlayerState.OuterSingleton;
	}
	template<> SHOOTINGCODEGAME_API UClass* StaticClass<AShootingPlayerState>()
	{
		return AShootingPlayerState::StaticClass();
	}

	void AShootingPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_m_CurHP(TEXT("m_CurHP"));

		const bool bIsValid = true
			&& Name_m_CurHP == ClassReps[(int32)ENetFields_Private::m_CurHP].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShootingPlayerState"));
	}
	AShootingPlayerState::AShootingPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingPlayerState);
	AShootingPlayerState::~AShootingPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingPlayerState, AShootingPlayerState::StaticClass, TEXT("AShootingPlayerState"), &Z_Registration_Info_UClass_AShootingPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingPlayerState), 982558954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_645496472(TEXT("/Script/ShootingCodeGame"),
		Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_VR16_ShootingCodeGame_Source_ShootingCodeGame_Public_GameMode_ShootingPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
