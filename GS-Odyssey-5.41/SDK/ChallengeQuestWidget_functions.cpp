#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeQuestWidget

#include "Basic.hpp"

#include "ChallengeQuestWidget_classes.hpp"
#include "ChallengeQuestWidget_parameters.hpp"


namespace SDK
{

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   Param_Quest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*         Param_QuestDefinition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*         Bundle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::SetQuestItem(class UFortQuestItem* Param_Quest, class UFortQuestItemDefinition* Param_QuestDefinition, class UFortChallengeBundleInfo* Bundle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "SetQuestItem");

	Params::ChallengeQuestWidget_C_SetQuestItem Parms{};

	Parms.Param_Quest = Param_Quest;
	Parms.Param_QuestDefinition = Param_QuestDefinition;
	Parms.Bundle = Bundle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsIncomplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsIncomplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::UpdateProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuestState                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EFortQuestState UChallengeQuestWidget_C::GetQuestState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "GetQuestState");

	Params::ChallengeQuestWidget_C_GetQuestState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutTotalAchievedCount                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutTotalRequiredCount                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "GetAchievedCount");

	Params::ChallengeQuestWidget_C_GetAchievedCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTotalAchievedCount != nullptr)
		*OutTotalAchievedCount = Parms.OutTotalAchievedCount;

	if (OutTotalRequiredCount != nullptr)
		*OutTotalRequiredCount = Parms.OutTotalRequiredCount;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::UpdateName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsInvalid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsInvalid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             LockedText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeQuestWidget_C::StyleAsLocked(const class FText& LockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsLocked");

	Params::ChallengeQuestWidget_C_StyleAsLocked Parms{};

	Parms.LockedText = std::move(LockedText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLinearChain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ChainLength                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_ChainIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::StyleAsLinearChain(int32 Param_ChainLength, int32 Param_ChainIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsLinearChain");

	Params::ChallengeQuestWidget_C_StyleAsLinearChain Parms{};

	Parms.Param_ChainLength = Param_ChainLength;
	Parms.Param_ChainIndex = Param_ChainIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}
