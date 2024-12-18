#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchStatsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchStatsScreen.AthenaMatchStatsScreen_C
// 0x0018 (0x0340 - 0x0328)
class UAthenaMatchStatsScreen_C final : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UAthenaMatchStatsPartial_C*             AthenaMatchStatsPartial;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderTouchZone;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchStatsScreen(int32 EntryPoint);
	void Construct();
	void OnActivated();
	void RegisterBack();
	void HandleBack(bool* Passthrough);
	void InputSetup();
	void InputRefresh();
	struct FEventReply On_BorderTouchZone_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchStatsScreen_C">();
	}
	static class UAthenaMatchStatsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchStatsScreen_C>();
	}
};

}

