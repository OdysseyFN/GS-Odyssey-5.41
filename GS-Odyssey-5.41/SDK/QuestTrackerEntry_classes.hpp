#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTrackerEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestTrackerEntry.QuestTrackerEntry_C
// 0x0010 (0x0280 - 0x0270)
class UQuestTrackerEntry_C final : public UFortQuestTrackerEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 SeparatorLine;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestTrackerEntry_C">();
	}
	static class UQuestTrackerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestTrackerEntry_C>();
	}
};

}
