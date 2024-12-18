#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_QuestSpawn_MiniMapIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C
// 0x0010 (0x0430 - 0x0420)
class AGCN_QuestSpawn_MiniMapIcon_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UFortMiniMapComponent*                  MiniMapCrosshair;                                  // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void HideMiniBossGCN();
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_QuestSpawn_MiniMapIcon_C">();
	}
	static class AGCN_QuestSpawn_MiniMapIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_QuestSpawn_MiniMapIcon_C>();
	}
};

}

