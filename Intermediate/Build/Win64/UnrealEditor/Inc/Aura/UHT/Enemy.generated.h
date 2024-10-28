// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define AURA_Enemy_generated_h

#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_SPARSE_DATA
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_12_PROLOG
#define FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_SPARSE_DATA \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_Aura_Source_Aura_Public_Character_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Aura_Source_Aura_Public_Character_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
