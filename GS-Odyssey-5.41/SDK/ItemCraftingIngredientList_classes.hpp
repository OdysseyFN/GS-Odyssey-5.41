#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCraftingIngredientList

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
// 0x0020 (0x02B0 - 0x0290)
class UItemCraftingIngredientList_C final : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           IngredientsList;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              ItemRepresented;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                IconSize;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemCraftingIngredientList(int32 EntryPoint);
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void SetItemToRepresent(class UFortItem* Item);
	void Refresh();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void RefreshInventoryTracking();
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking);
	void SetItemToCompare(class UFortItem* ItemToCompare);
	void GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients);
	void HandleCraftItemFailed(EFortCraftFailCause FailCause);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCraftingIngredientList_C">();
	}
	static class UItemCraftingIngredientList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCraftingIngredientList_C>();
	}
};

}
