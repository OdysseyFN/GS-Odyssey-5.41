#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectAlterationModScreen

#include "Basic.hpp"

#include "ItemInspectAlterationModScreen_classes.hpp"
#include "ItemInspectAlterationModScreen_parameters.hpp"


namespace SDK
{

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::ExecuteUbergraph_ItemInspectAlterationModScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "ExecuteUbergraph_ItemInspectAlterationModScreen");

	Params::ItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationOptionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationOption*            CurrentAlterationOption                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationOptionChanged");

	Params::ItemInspectAlterationModScreen_C_OnAlterationOptionChanged Parms{};

	Parms.CurrentAlterationOption = CurrentAlterationOption;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnItemSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    SelectedSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::OnItemSlotChanged(bool SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnItemSlotChanged");

	Params::ItemInspectAlterationModScreen_C_OnItemSlotChanged Parms{};

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectAlterationModScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_45_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectAlterationModScreen_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_28_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectAlterationModScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectAlterationModScreen_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::RefreshItemAndAlterationsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "RefreshItemAndAlterationsBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::OnAlterationModificationCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationModificationCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::SetupHeaderColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupHeaderColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::SetupTriangles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupTriangles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::UpdateColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::UpdatePurchaseButtons(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseButtons");

	Params::ItemInspectAlterationModScreen_C_UpdatePurchaseButtons Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SelectedSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModScreen_C::UpdatePurchaseDetails(bool SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseDetails");

	Params::ItemInspectAlterationModScreen_C_UpdatePurchaseDetails Parms{};

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateShowPurchaseOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::UpdateShowPurchaseOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateShowPurchaseOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseIngredients
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>    Ingredients                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectAlterationModScreen_C::UpdatePurchaseIngredients(TArray<struct FFortItemQuantityPair>& Ingredients)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdatePurchaseIngredients");

	Params::ItemInspectAlterationModScreen_C_UpdatePurchaseIngredients Parms{};

	Parms.Ingredients = std::move(Ingredients);

	UObject::ProcessEvent(Func, &Parms);

	Ingredients = std::move(Parms.Ingredients);
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.HasOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemInspectAlterationModScreen_C::HasOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "HasOptions");

	Params::ItemInspectAlterationModScreen_C_HasOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
