#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Definition

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK
{

// UserDefinedStruct FrontEndRewards_Definition.FrontEndRewards_Definition
// 0x0060 (0x0060 - 0x0000)
struct FFrontEndRewards_Definition final
{
public:
	bool                                          ShowMissionRewards_1_C7BDE40E456913658E82C99BDF716FD0; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowMissionAlertRewards_16_45DFCE744858A450CF7A6F8DDB3019E2; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D27[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortQuestItem*>                 CompletedQuests_5_F0B57A5444C985942CB6438097704985; // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortQuestItem*>                 NewQuests_7_9B70ABD44C42EFEED67C05BAA7B44AC7;      // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortExpeditionItem*>            Expeditions_10_F1E594504A730C86DC1574996D8CD6F5;   // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortCollectionBookRewards>     CollectionBookRewards_14_257477CC44DB7B3E9CE221BEFD80F48E; // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          ShowDifficultyIncreaseRewards_23_65788A384F15925597F8D2BC507844A4; // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewGiftBoxes_25_8CF5BBD04ED2FF67BBD1278A910766B6;  // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D28[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortItem*>                      ItemCacheRewards_31_92CF1A0A40AB5D12F4ABAC8731BF4329; // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
};

}
