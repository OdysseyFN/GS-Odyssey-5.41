#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerZoneTeamScoreContributionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C
// 0x02C8 (0x04E0 - 0x0218)
class UPlayerZoneTeamScoreContributionWidget_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Border_Shell;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerScoreCounter;                            // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortPlayerScoreReport                 ScoreReport;                                       // 0x0248(0x0298)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget(int32 EntryPoint);
	void Construct();
	void Initialize();
	void Update_Contribution_LERP(float LERP_Factor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerZoneTeamScoreContributionWidget_C">();
	}
	static class UPlayerZoneTeamScoreContributionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerZoneTeamScoreContributionWidget_C>();
	}
};

}
