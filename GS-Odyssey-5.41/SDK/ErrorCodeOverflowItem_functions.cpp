#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorCodeOverflowItem

#include "Basic.hpp"

#include "ErrorCodeOverflowItem_classes.hpp"
#include "ErrorCodeOverflowItem_parameters.hpp"


namespace SDK
{

// Function ErrorCodeOverflowItem.ErrorCodeOverflowItem_C.SetErrorCodeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UErrorCodeOverflowItem_C::SetErrorCodeDisplay(const class FString& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorCodeOverflowItem_C", "SetErrorCodeDisplay");

	Params::ErrorCodeOverflowItem_C_SetErrorCodeDisplay Parms{};

	Parms.ErrorCode = std::move(ErrorCode);

	UObject::ProcessEvent(Func, &Parms);
}

}
