#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_EnemyDeathFX_Off

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_EnemyDeathFX_Off.AnimNotify_EnemyDeathFX_Off_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_EnemyDeathFX_Off_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_EnemyDeathFX_Off_C">();
	}
	static class UAnimNotify_EnemyDeathFX_Off_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_EnemyDeathFX_Off_C>();
	}
};

}
