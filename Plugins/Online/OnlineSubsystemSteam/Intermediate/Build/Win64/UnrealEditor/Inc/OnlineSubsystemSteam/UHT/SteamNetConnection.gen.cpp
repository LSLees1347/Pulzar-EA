// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Classes/SteamNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetConnection() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetConnection();
ONLINESUBSYSTEMSTEAM_API UClass* Z_Construct_UClass_USteamNetConnection_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteam();
// End Cross Module References

// Begin Class USteamNetConnection
void USteamNetConnection::StaticRegisterNativesUSteamNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamNetConnection);
UClass* Z_Construct_UClass_USteamNetConnection_NoRegister()
{
	return USteamNetConnection::StaticClass();
}
struct Z_Construct_UClass_USteamNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetConnection.h" },
		{ "ModuleRelativePath", "Classes/SteamNetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is this net connection passthrough to IpConnection */" },
#endif
		{ "ModuleRelativePath", "Classes/SteamNetConnection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this net connection passthrough to IpConnection" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsPassthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
{
	((USteamNetConnection*)Obj)->bIsPassthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamNetConnection), &Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPassthrough_MetaData), NewProp_bIsPassthrough_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamNetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamNetConnection_Statics::NewProp_bIsPassthrough,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamNetConnection_Statics::ClassParams = {
	&USteamNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamNetConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamNetConnection()
{
	if (!Z_Registration_Info_UClass_USteamNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamNetConnection.OuterSingleton, Z_Construct_UClass_USteamNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamNetConnection.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAM_API UClass* StaticClass<USteamNetConnection>()
{
	return USteamNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamNetConnection);
USteamNetConnection::~USteamNetConnection() {}
// End Class USteamNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamNetConnection, USteamNetConnection::StaticClass, TEXT("USteamNetConnection"), &Z_Registration_Info_UClass_USteamNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamNetConnection), 1989994040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetConnection_h_1696216103(TEXT("/Script/OnlineSubsystemSteam"),
	Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__dev_Astroids2_0_ast2_0_Plugins_Online_OnlineSubsystemSteam_Source_Classes_SteamNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
