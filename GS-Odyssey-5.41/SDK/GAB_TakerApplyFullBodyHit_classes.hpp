#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_TakerApplyFullBodyHit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_GenericApplyFullBodyHit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
// 0x0008 (0x0958 - 0x0950)
class UGAB_TakerApplyFullBodyHit_C final : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_TakerApplyFullBodyHit_C;        // 0x0950(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int32 EntryPoint);
	void PickFullBodyHitMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_TakerApplyFullBodyHit_C">();
	}
	static class UGAB_TakerApplyFullBodyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_TakerApplyFullBodyHit_C>();
	}
};

}
