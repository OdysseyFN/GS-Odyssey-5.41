#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchStatsGrid

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
// 0x0008 (0x0210 - 0x0208)
class UMatchStatsGrid_C final : public UUserWidget
{
public:
	class UAthenaProfileStatBox*                  ProfileStatBox;                                    // 0x0208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetStats(class UAthenaMatchStatView* AthenaMatchStats);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchStatsGrid_C">();
	}
	static class UMatchStatsGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchStatsGrid_C>();
	}
};

}

