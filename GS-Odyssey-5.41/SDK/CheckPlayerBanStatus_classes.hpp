#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckPlayerBanStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckPlayerBanStatus.CheckPlayerBanStatus_C
// 0x0048 (0x03D0 - 0x0388)
class ACheckPlayerBanStatus_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerBannedModal_C*                   BannedModal;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMcpBanInfo                            CurrBanInfo;                                       // 0x03A0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CheckPlayerBanStatus(int32 EntryPoint);
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void UserConstructionScript();
	void ShowBan();
	void OnActionCompleted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckPlayerBanStatus_C">();
	}
	static class ACheckPlayerBanStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckPlayerBanStatus_C>();
	}
};

}
