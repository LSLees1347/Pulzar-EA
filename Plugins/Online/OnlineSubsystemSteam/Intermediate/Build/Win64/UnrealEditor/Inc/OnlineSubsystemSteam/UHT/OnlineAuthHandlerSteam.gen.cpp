// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/OnlineAuthHandlerSteam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAuthHandlerSteam() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// End Cross Module References

// Begin Class USteamAuthComponentModuleInterface
void USteamAuthComponentModuleInterface::StaticRegisterNativesUSteamAuthComponentModuleInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAuthComponentModuleInterface);
UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface_NoRegister()
{
	return USteamAuthComponentModuleInterface::StaticClass();
}
struct Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineAuthHandlerSteam.h" },
		{ "ModuleRelativePath", "Private/OnlineAuthHandlerSteam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAuthComponentModuleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams = {
	&USteamAuthComponentModuleInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAuthComponentModuleInterface()
{
	if (!Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton, Z_Construct_UClass_USteamAuthComponentModuleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAuthComponentModuleInterface.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAM_API UClass* StaticClass<USteamAuthComponentModuleInterface>()
{
	return USteamAuthComponentModuleInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAuthComponentModuleInterface);
USteamAuthComponentModuleInterface::~USteamAuthComponentModuleInterface() {}
// End Class USteamAuthComponentModuleInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Private_OnlineAuthHandlerSteam_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAuthComponentModuleInterface, USteamAuthComponentModuleInterface::StaticClass, TEXT("USteamAuthComponentModuleInterface"), &Z_Registration_Info_UClass_USteamAuthComponentModuleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAuthComponentModuleInterface), 508179613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Private_OnlineAuthHandlerSteam_h_3164552240(TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Private_OnlineAuthHandlerSteam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Private_OnlineAuthHandlerSteam_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
