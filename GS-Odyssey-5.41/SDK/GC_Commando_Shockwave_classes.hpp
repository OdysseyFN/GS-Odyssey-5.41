#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Commando_Shockwave

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Commando_Shockwave.GC_Commando_Shockwave_C
// 0x0018 (0x0098 - 0x0080)
class UGC_Commando_Shockwave_C final : public UFortGameplayCueNotify_Simple
{
public:
	float                                         ShockwaveRefractionRingHeight;                     // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1E[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ShockwaveCameraShake;                              // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ShockwaveForceFeedback;                            // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Commando_Shockwave_C">();
	}
	static class UGC_Commando_Shockwave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Commando_Shockwave_C>();
	}
};

}
