#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Button_Crouch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonBacchusButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C
// 0x0008 (0x03D8 - 0x03D0)
class UButton_Crouch_C final : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Button_Crouch_C;                    // 0x03D0(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Button_Crouch(int32 EntryPoint);
	void OnHUDStateUpdate(const struct FFortHUDState& NewState);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Button_Crouch_C">();
	}
	static class UButton_Crouch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButton_Crouch_C>();
	}
};

}

