#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementMulchModeBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementMulchModeBox.ItemManagementMulchModeBox_C
// 0x0010 (0x0350 - 0x0340)
class UItemManagementMulchModeBox_C final : public UFortItemMulchModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(Transient, DuplicateTransient)
	class UItemWindow_C*                          Recycle_Info_Window;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemManagementMulchModeBox(int32 EntryPoint);
	void Destruct();
	void OnActivated();
	void Construct();
	void HandleDifferentItemToDetailSetBP();
	void HandleBack(bool* Passthrough);
	void HandleInfo(bool* Pass_Through);
	void HandleMulchListChanged();
	void HandleCursorModeChanging(bool IsEnabled);
	void HandleLeaveInventory(bool* Passthrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementMulchModeBox_C">();
	}
	static class UItemManagementMulchModeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementMulchModeBox_C>();
	}
};

}
