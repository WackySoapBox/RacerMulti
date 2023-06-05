// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GetUserPrivilegeCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetUserPrivilegeCallbackProxy;
class UObject;
enum class EBPUserPrivileges : uint8;
struct FBPUniqueNetId;
#ifdef ADVANCEDSESSIONS_GetUserPrivilegeCallbackProxy_generated_h
#error "GetUserPrivilegeCallbackProxy.generated.h already included, missing '#pragma once' in GetUserPrivilegeCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_GetUserPrivilegeCallbackProxy_generated_h

<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_9_DELEGATE \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_9_DELEGATE \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms \
{ \
	EBPUserPrivileges QueriedPrivilege; \
	bool HadPrivilege; \
}; \
static inline void FBlueprintGetUserPrivilegeDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetUserPrivilegeDelegate, EBPUserPrivileges QueriedPrivilege, bool HadPrivilege) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms Parms; \
	Parms.QueriedPrivilege=QueriedPrivilege; \
	Parms.HadPrivilege=HadPrivilege ? true : false; \
	BlueprintGetUserPrivilegeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
 \
	DECLARE_FUNCTION(execGetUserPrivilege);


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
 \
	DECLARE_FUNCTION(execGetUserPrivilege);


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ACCESSORS
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
private: \
	static void StaticRegisterNativesUGetUserPrivilegeCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetUserPrivilegeCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetUserPrivilegeCallbackProxy)


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
private: \
	static void StaticRegisterNativesUGetUserPrivilegeCallbackProxy(); \
	friend struct Z_Construct_UClass_UGetUserPrivilegeCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGetUserPrivilegeCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UGetUserPrivilegeCallbackProxy)


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetUserPrivilegeCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetUserPrivilegeCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetUserPrivilegeCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(UGetUserPrivilegeCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const UGetUserPrivilegeCallbackProxy&); \
public: \
	ADVANCEDSESSIONS_API virtual ~UGetUserPrivilegeCallbackProxy();


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(UGetUserPrivilegeCallbackProxy&&); \
	ADVANCEDSESSIONS_API UGetUserPrivilegeCallbackProxy(const UGetUserPrivilegeCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UGetUserPrivilegeCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetUserPrivilegeCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetUserPrivilegeCallbackProxy) \
	ADVANCEDSESSIONS_API virtual ~UGetUserPrivilegeCallbackProxy();


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_11_PROLOG
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ACCESSORS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_11_PROLOG
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_STANDARD_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ACCESSORS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
=======
#define VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_SPARSE_DATA \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GetUserPrivilegeCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UGetUserPrivilegeCallbackProxy>();

#undef CURRENT_FILE_ID
<<<<<<< HEAD:Plugins/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UnrealEditor/Inc/AdvancedSessions/UHT/GetUserPrivilegeCallbackProxy.generated.h
#define CURRENT_FILE_ID FID_RacerMulti_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h
=======
#define CURRENT_FILE_ID VRExpPluginExp_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_GetUserPrivilegeCallbackProxy_h
>>>>>>> 0ab4d15f94fa6af360f1642608078f66927134c1:Plugins/AdvancedSessions/AdvancedSessions/AdvancedSessions/Intermediate/Build/Win64/UE4Editor/Inc/AdvancedSessions/GetUserPrivilegeCallbackProxy.generated.h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
