#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Layout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Announcement_Layout.Announcement_Layout_C
// 0x0020 (0x0258 - 0x0238)
class UAnnouncement_Layout_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class USizeBox*                               AnnouncementRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionFocusWidget_C*                  MissionFocusWidget;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 AnnouncementWidget_Basic;                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announcement_Layout(int32 EntryPoint);
	void Destruct();
	void OnStartNewAnnouncement(class AFortClientAnnouncement* NewAnnouncement);
	void Construct();
	void SwapAnnouncementUIContent(class AFortClientAnnouncement* NewAnnouncement);
	void CreateAnnouncementWidget(class UClass* NewWidgetClass, bool ForceCreateUI, class UFortAnnouncementWidget** NewWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announcement_Layout_C">();
	}
	static class UAnnouncement_Layout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnnouncement_Layout_C>();
	}
};

}

