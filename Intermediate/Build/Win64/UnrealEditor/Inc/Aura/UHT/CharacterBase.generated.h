// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define AURA_CharacterBase_generated_h

#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_SPARSE_DATA
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_ACCESSORS
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_9_PROLOG
#define FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_SPARSE_DATA \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_ACCESSORS \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Aura_Source_Aura_Public_Character_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
