#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchStatusTextPlayer

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C
// 0x00F0 (0x02F8 - 0x0208)
class UAthenaMatchStatusTextPlayer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       TopPlayerDead;                                     // 0x0210(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewTopPlayer;                                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LensFlare1;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LensFlare2;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LensFlare3;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LensFlare4;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Strikethrough;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x0250(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                            Color;                                             // 0x02A8(0x0028)(Edit, BlueprintVisible)
	bool                                          ShowMaterialHighlight;                             // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3040[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      HighlightMaterial;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TextToDisplay;                                     // 0x02E0(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_AthenaMatchStatusTextPlayer(int32 EntryPoint);
	void ApplyNewText();
	void HighlightMaterialOff();
	void HighlightMaterialOn();
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& InText, bool ApplyImmediately);
	void ApplyText();
	void GetFont(struct FSlateFontInfo* Output);
	void HighlightMaterialControl();
	void SetFont(const struct FSlateFontInfo& FontIn);
	void SetOpacityAndColor(const struct FSlateColor& ColorIn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchStatusTextPlayer_C">();
	}
	static class UAthenaMatchStatusTextPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchStatusTextPlayer_C>();
	}
};

}
