#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Tunneler_TeleportNPC_TunnelSegment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C
// 0x0010 (0x03A8 - 0x0398)
class AGCN_Tunneler_TeleportNPC_TunnelSegment_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Tunneler_TeleportNPC_TunnelSegment_C">();
	}
	static class AGCN_Tunneler_TeleportNPC_TunnelSegment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Tunneler_TeleportNPC_TunnelSegment_C>();
	}
};

}
