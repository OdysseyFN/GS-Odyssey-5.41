#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsListWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsListWidget.StatsListWidget_C
// 0x0040 (0x0280 - 0x0240)
class UStatsListWidget_C final : public UFortAttributeList_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         HBoxCapMessage;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StatsList;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                RowMargin;                                         // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         ClampedAttributeCount;                             // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_454E[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           List_Item_Time_Handle;                             // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatsListWidget(int32 EntryPoint);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void OnClearShownAttributes();
	void ToggleClampedValueMessage(bool InShow);
	void AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add);
	void Update();
	void Trigger_Update_Anim();
	void Trigger_Initial_Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsListWidget_C">();
	}
	static class UStatsListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsListWidget_C>();
	}
};

}
