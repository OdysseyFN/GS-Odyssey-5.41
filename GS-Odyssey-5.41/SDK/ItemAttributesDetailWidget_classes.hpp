#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAttributesDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemAttributesDetailWidget.ItemAttributesDetailWidget_C
// 0x0010 (0x0268 - 0x0258)
class UItemAttributesDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UStatsListWidget_C*                     StatsListWidget;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemAttributesDetailWidget(int32 EntryPoint);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandlePreDifferentItemToCompareWithSet();
	void HandlePreDifferentItemToDetailSet();
	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void UpdateItemsForWidgets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemAttributesDetailWidget_C">();
	}
	static class UItemAttributesDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemAttributesDetailWidget_C>();
	}
};

}
