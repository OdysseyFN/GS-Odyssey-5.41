#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
// 0x0088 (0x02C8 - 0x0240)
class UTabVideoOptions_C final : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       TooltipDisplay;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Enable_Overlay;                                    // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Disable_Overlay;                                   // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortOptionsMenuSetting*                DisplayResolutionSetting;                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<ESettingType, class UFortOptionsMenuSetting*> ForceUpdateSettings;                               // 0x0278(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
	void Disable_Overlay__DelegateSignature();
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint);
	void Setting_Value_Changed();
	void Quality_Changed();
	void Window_Mode_Changed(bool IsWindowedFullscreen);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Destruct();
	void OnGameUserSettingsUINeedsUpdate();
	void CenterOnTab();
	void UpdateOptionsTab();
	void Construct();
	void Update_Qualities();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabVideoOptions_C">();
	}
	static class UTabVideoOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabVideoOptions_C>();
	}
};

}
