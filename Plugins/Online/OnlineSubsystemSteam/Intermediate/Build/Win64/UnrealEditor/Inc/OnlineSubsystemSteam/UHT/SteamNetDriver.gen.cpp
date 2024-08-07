// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Classes/SteamNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetDriver() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetDriver();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetDriver_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// End Cross Module References

// Begin Class USteamNetDriver
void USteamNetDriver::StaticRegisterNativesUSteamNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamNetDriver);
UClass* Z_Construct_UClass_USteamNetDriver_NoRegister()
{
	return USteamNetDriver::StaticClass();
}
struct Z_Construct_UClass_USteamNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetDriver.h" },
		{ "ModuleRelativePath", "Classes/SteamNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamNetDriver_Statics::ClassParams = {
	&USteamNetDriver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamNetDriver()
{
	if (!Z_Registration_Info_UClass_USteamNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamNetDriver.OuterSingleton, Z_Construct_UClass_USteamNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamNetDriver.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAM_API UClass* StaticClass<USteamNetDriver>()
{
	return USteamNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamNetDriver);
USteamNetDriver::~USteamNetDriver() {}
// End Class USteamNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamNetDriver, USteamNetDriver::StaticClass, TEXT("USteamNetDriver"), &Z_Registration_Info_UClass_USteamNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamNetDriver), 3579408327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetDriver_h_899633904(TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
