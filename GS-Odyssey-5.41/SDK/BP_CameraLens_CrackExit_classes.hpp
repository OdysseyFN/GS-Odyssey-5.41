#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraLens_CrackExit

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C
// 0x0010 (0x03F0 - 0x03E0)
class ABP_CameraLens_CrackExit_C final : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*               Portal;                                            // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraLens_CrackExit_C">();
	}
	static class ABP_CameraLens_CrackExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraLens_CrackExit_C>();
	}
};

}
