#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseHistoryScreen

#include "Basic.hpp"

#include "PurchaseHistoryScreen_classes.hpp"
#include "PurchaseHistoryScreen_parameters.hpp"


namespace SDK
{

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::ExecuteUbergraph_PurchaseHistoryScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "ExecuteUbergraph_PurchaseHistoryScreen");

	Params::PurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.InitializeTickets
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NumTicketsAvailableToUse                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::InitializeTickets(int32 NumTicketsAvailableToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "InitializeTickets");

	Params::PurchaseHistoryScreen_C_InitializeTickets Parms{};

	Parms.NumTicketsAvailableToUse = NumTicketsAvailableToUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MtxRefunded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              ReturnedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TicketIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnEndRefundSubmission");

	Params::PurchaseHistoryScreen_C_OnEndRefundSubmission Parms{};

	Parms.bSuccess = bSuccess;
	Parms.MtxRefunded = MtxRefunded;
	Parms.ReturnedItem = ReturnedItem;
	Parms.TicketIndex = TicketIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnBeginRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnBeginRefundSubmission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	Params::PurchaseHistoryScreen_C_BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	Params::PurchaseHistoryScreen_C_BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::PurchaseHistoryScreen_C_BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnNoPurchasesAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnNoPurchasesAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPurchaseReturnStep                     CurrentStep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::OnPopulateView(EPurchaseReturnStep CurrentStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnPopulateView");

	Params::PurchaseHistoryScreen_C_OnPopulateView Parms{};

	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMtxPurchaseHistory              PurchaseHistory                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPurchaseHistoryScreen_C::OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "OnItemRefresh");

	Params::PurchaseHistoryScreen_C_OnItemRefresh Parms{};

	Parms.PurchaseHistory = std::move(PurchaseHistory);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPurchaseHistoryScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseHistoryScreen_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::PurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passthrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryScreen_C::HandleBack(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "HandleBack");

	Params::PurchaseHistoryScreen_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryScreen_C::ToggleBackAction(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseHistoryScreen_C", "ToggleBackAction");

	Params::PurchaseHistoryScreen_C_ToggleBackAction Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

}
