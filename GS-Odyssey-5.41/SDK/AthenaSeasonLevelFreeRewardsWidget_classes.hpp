#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelFreeRewardsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C
// 0x0030 (0x0258 - 0x0228)
class UAthenaSeasonLevelFreeRewardsWidget_C final : public USeasonPassLevelWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 DarkenCenter;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          FreeRewardsBorder;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             FreeRewardsGrid;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaSeasonReward_C*>          RewardWidgets;                                     // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget(int32 EntryPoint);
	void PlayIntro();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void OnSetup();
	void UpdateStyling();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonLevelFreeRewardsWidget_C">();
	}
	static class UAthenaSeasonLevelFreeRewardsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonLevelFreeRewardsWidget_C>();
	}
};

}
