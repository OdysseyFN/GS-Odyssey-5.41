#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_EpicQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C
// 0x0028 (0x0260 - 0x0238)
class UFrontEndRewards_EpicQuest_C final : public UFortRewardNewQuestWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UQuestInfo_Widget_C*                    QuestInfo_Widget;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         Quest;                                             // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ReplayAction;                                      // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_FrontEndRewards_EpicQuest(int32 EntryPoint);
	void OnPrimaryAction();
	void Construct();
	void TransitionOutBegin();
	void TransitionInBegin();
	void PopulateFromQuest(class UFortQuestItem* InQuest);
	void HandleContinueAction(bool* Committed);
	void HandleTransitionInComplete();
	void MarkQuestAsSeen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_EpicQuest_C">();
	}
	static class UFrontEndRewards_EpicQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_EpicQuest_C>();
	}
};

}
