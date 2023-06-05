// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdvancedSessionsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
=======
class UObject;
struct FBPUniqueNetId;
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
class APlayerState;
class UObject;
enum class EBlueprintResultSwitch : uint8;
enum class EBPOnlineSessionState : uint8;
enum class EOnlineComparisonOpRedux : uint8;
enum class ESessionSettingSearchResult : uint8;
struct FBlueprintSessionResult;
struct FBPUniqueNetId;
struct FSessionPropertyKeyPair;
struct FSessionsSearchSetting;
#ifdef ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h
#error "AdvancedSessionsLibrary.generated.h already included, missing '#pragma once' in AdvancedSessionsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedSessionsLibrary_generated_h

<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
 \
	DECLARE_FUNCTION(execHasOnlineSubsystem); \
	DECLARE_FUNCTION(execGetNetPlayerIndex); \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execUniqueNetIdToString); \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID); \
	DECLARE_FUNCTION(execIsValidUniqueNetID); \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState); \
	DECLARE_FUNCTION(execGetUniqueNetID); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte); \
	DECLARE_FUNCTION(execGetSessionPropertyFloat); \
	DECLARE_FUNCTION(execGetSessionPropertyInt); \
	DECLARE_FUNCTION(execGetSessionPropertyString); \
	DECLARE_FUNCTION(execGetSessionPropertyBool); \
	DECLARE_FUNCTION(execGetSessionPropertyByte); \
	DECLARE_FUNCTION(execFindSessionPropertyIndexByName); \
	DECLARE_FUNCTION(execFindSessionPropertyByName); \
	DECLARE_FUNCTION(execGetSessionPropertyKey); \
	DECLARE_FUNCTION(execGetUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentSessionID_AsString); \
	DECLARE_FUNCTION(execGetSessionID_AsString); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetExtraSettings); \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings); \
	DECLARE_FUNCTION(execBanPlayer); \
	DECLARE_FUNCTION(execKickPlayer);


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
 \
	DECLARE_FUNCTION(execHasOnlineSubsystem); \
	DECLARE_FUNCTION(execGetNetPlayerIndex); \
	DECLARE_FUNCTION(execGetNumberOfNetworkPlayers); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execUniqueNetIdToString); \
	DECLARE_FUNCTION(execEqualEqual_UNetIDUnetID); \
	DECLARE_FUNCTION(execIsValidUniqueNetID); \
	DECLARE_FUNCTION(execGetUniqueNetIDFromPlayerState); \
	DECLARE_FUNCTION(execGetUniqueNetID); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyFloat); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyInt); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyString); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyBool); \
	DECLARE_FUNCTION(execMakeLiteralSessionPropertyByte); \
	DECLARE_FUNCTION(execGetSessionPropertyFloat); \
	DECLARE_FUNCTION(execGetSessionPropertyInt); \
	DECLARE_FUNCTION(execGetSessionPropertyString); \
	DECLARE_FUNCTION(execGetSessionPropertyBool); \
	DECLARE_FUNCTION(execGetSessionPropertyByte); \
	DECLARE_FUNCTION(execFindSessionPropertyIndexByName); \
	DECLARE_FUNCTION(execFindSessionPropertyByName); \
	DECLARE_FUNCTION(execGetSessionPropertyKey); \
	DECLARE_FUNCTION(execGetUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentUniqueBuildID); \
	DECLARE_FUNCTION(execGetCurrentSessionID_AsString); \
	DECLARE_FUNCTION(execGetSessionID_AsString); \
	DECLARE_FUNCTION(execIsValidSession); \
	DECLARE_FUNCTION(execMakeLiteralSessionSearchProperty); \
	DECLARE_FUNCTION(execIsPlayerInSession); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetExtraSettings); \
	DECLARE_FUNCTION(execAddOrModifyExtraSettings); \
	DECLARE_FUNCTION(execBanPlayer); \
	DECLARE_FUNCTION(execKickPlayer);


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ACCESSORS
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary)


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
private: \
	static void StaticRegisterNativesUAdvancedSessionsLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedSessionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedSessionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedSessionsLibrary)


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_STANDARD_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_STANDARD_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public: \
	NO_API virtual ~UAdvancedSessionsLibrary();


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedSessionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedSessionsLibrary(UAdvancedSessionsLibrary&&); \
	NO_API UAdvancedSessionsLibrary(const UAdvancedSessionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedSessionsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedSessionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedSessionsLibrary) \
	NO_API virtual ~UAdvancedSessionsLibrary();


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_29_PROLOG
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ACCESSORS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_STANDARD_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_29_PROLOG
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_STANDARD_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ACCESSORS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_SPARSE_DATA \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h_32_ENHANCED_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedSessionsLibrary>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/AdvancedSessionsLibrary.generated.h
#define CURRENT_FILE_ID FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h
=======
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedSessionsLibrary_h
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4/Inc/AdvancedSessions/AdvancedSessionsLibrary.generated.h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
