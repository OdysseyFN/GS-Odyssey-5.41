#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Inspect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// 0x0010 (0x0890 - 0x0880)
class AFrontendCamera_Inspect_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendCamera_Inspect(int32 EntryPoint);
	void OnActivated();
	void OnDeactivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Inspect_C">();
	}
	static class AFrontendCamera_Inspect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Inspect_C>();
	}
};

}
