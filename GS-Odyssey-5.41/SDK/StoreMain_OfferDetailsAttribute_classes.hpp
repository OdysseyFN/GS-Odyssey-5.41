#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_OfferDetailsAttribute

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C
// 0x0050 (0x0260 - 0x0210)
class UStoreMain_OfferDetailsAttribute_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Name_StoreMain_OfferDetailsAttribute_C;            // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Value;                                             // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   AttributeDescription;                              // 0x0230(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   AttributeValue;                                    // 0x0248(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetailsAttribute_C">();
	}
	static class UStoreMain_OfferDetailsAttribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetailsAttribute_C>();
	}
};

}
