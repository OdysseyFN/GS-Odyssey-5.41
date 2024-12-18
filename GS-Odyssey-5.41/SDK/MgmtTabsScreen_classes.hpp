#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MgmtTabsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MgmtTabsScreen.MgmtTabsScreen_C
// 0x0028 (0x0320 - 0x02F8)
class UMgmtTabsScreen_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlayerHitThrob;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_6;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  TopTabContentWidgetSwitcher;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   TopTabList;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MgmtTabsScreen(int32 EntryPoint);
	void HandleShowObjectives(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason);
	void HandleShowQuests(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason);
	void Destruct();
	void Construct();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnActivated();
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget);
	void HandleDamageReceived();
	void HandleMgmtMenuTabChangeRequested(class FName TabName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MgmtTabsScreen_C">();
	}
	static class UMgmtTabsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMgmtTabsScreen_C>();
	}
};

}

