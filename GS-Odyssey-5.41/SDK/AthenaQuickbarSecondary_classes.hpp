#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickbarSecondary

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "QuickbarBase_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaQuickbarSecondary.AthenaQuickbarSecondary_C
// 0x0068 (0x02C8 - 0x0260)
class UAthenaQuickbarSecondary_C final : public UQuickbarBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AthenaQuickbarSecondary_C;          // 0x0260(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         _Horizontal_Box__Camera_Mode_Content;              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Separator;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Switch_Action;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindSwitchBinding;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       QuickbarSecondaryInvalidationBox;                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                  QuickbarSlotF1;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                  QuickbarSlotF2;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                  QuickbarSlotF3;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                  QuickbarSlotF4;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickBarSlot_C*                  QuickbarSlotF5;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Building;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentBuildingSlot;                               // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaQuickbarSecondary(int32 EntryPoint);
	void AnimationFinished();
	void OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int32 Param_Slot);
	void Destruct();
	void HandleInputMethodChanged_Bind(bool bUsingGamepad);
	void Show_Secondary_Quickbar_Rail(bool Show);
	void HandleKeyBindsChange();
	void HandleShowHideRail();
	void UpdateQuickBarCaching(bool Desire_Caching);
	void Construct();
	void OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, const TArray<int32>& ChangedSlots);
	void HandleKeybindsChanged();
	void Minimize();
	void Maximize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaQuickbarSecondary_C">();
	}
	static class UAthenaQuickbarSecondary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaQuickbarSecondary_C>();
	}
};

}
