#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportablePlayerEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReportablePlayerEntry.ReportablePlayerEntry_C
// 0x0018 (0x08E0 - 0x08C8)
class UReportablePlayerEntry_C final : public UFeedbackReportablePlayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08C8(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ReportablePlayerEntry(int32 EntryPoint);
	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReportablePlayerEntry_C">();
	}
	static class UReportablePlayerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReportablePlayerEntry_C>();
	}
};

}
