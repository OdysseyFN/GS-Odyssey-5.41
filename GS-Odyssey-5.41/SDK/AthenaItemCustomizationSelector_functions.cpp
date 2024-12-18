#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaItemCustomizationSelector

#include "Basic.hpp"

#include "AthenaItemCustomizationSelector_classes.hpp"
#include "AthenaItemCustomizationSelector_parameters.hpp"


namespace SDK
{

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ExecuteUbergraph_AthenaItemCustomizationSelector");

	Params::AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                        SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::OnCurrentItemChanged(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnCurrentItemChanged");

	Params::AthenaItemCustomizationSelector_C_OnCurrentItemChanged Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bShowingVariants                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::OnTabSelectionChanged(bool bShowingVariants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnTabSelectionChanged");

	Params::AthenaItemCustomizationSelector_C_OnTabSelectionChanged Parms{};

	Parms.bShowingVariants = bShowingVariants;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag                     VariantChannel                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     VariantTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOwned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature");

	Params::AthenaItemCustomizationSelector_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature Parms{};

	Parms.VariantChannel = std::move(VariantChannel);
	Parms.VariantTag = std::move(VariantTag);
	Parms.IsOwned = IsOwned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted
// (Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnSavingItemStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnSavingItemStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave
// (Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnFinsihedItemSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnFinsihedItemSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature");

	Params::AthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::HandleBack(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleBack");

	Params::AthenaItemCustomizationSelector_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaItemCustomizationSelector_C::ToggleFavorite(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ToggleFavorite");

	Params::AthenaItemCustomizationSelector_C_ToggleFavorite Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaItemCustomizationSelector_C::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetWidgetForFramingViewedItem");

	Params::AthenaItemCustomizationSelector_C_GetWidgetForFramingViewedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::ShowSavingModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ShowSavingModal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCosmeticItemDefinition*    Cosmetic_Item_Definition                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetCurrentItemCosmeticDefinition");

	Params::AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cosmetic_Item_Definition != nullptr)
		*Cosmetic_Item_Definition = Parms.Cosmetic_Item_Definition;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemCustomizationSelector_C::UpdateToggleFavoriteVisibility(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "UpdateToggleFavoriteVisibility");

	Params::AthenaItemCustomizationSelector_C_UpdateToggleFavoriteVisibility Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

}

