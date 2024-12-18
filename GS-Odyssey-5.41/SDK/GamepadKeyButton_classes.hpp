#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadKeyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GamepadKeyButton.GamepadKeyButton_C
// 0x00D8 (0x0968 - 0x0890)
class UGamepadKeyButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0890(0x0008)(Transient, DuplicateTransient)
	class UKeybindWidget_C*                       BoundKey;                                          // 0x0898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x08A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x08A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x08C0(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ButtonClickAction;                                 // 0x0950(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x0960(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GamepadKeyButton(int32 EntryPoint);
	void BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void UpdateContentAlignment();
	void SetContentAlignment(EHorizontalAlignment Param_ContentAlignment);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadKeyButton_C">();
	}
	static class UGamepadKeyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadKeyButton_C>();
	}
};

}

