#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionBuildSquadWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C
// 0x02B8 (0x0610 - 0x0358)
class UBP_FortExpeditionBuildSquadWidget_C final : public UFortExpeditionBuildSquadWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                   BasicRatingWidget;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           BonusSet;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*      BP_FortExpeditionExpiresWidget;                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    ChangeVehicleActionDisplay;                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_5;                                    // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_18;                                   // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CostSlots;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionDescription;                             // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionDuration;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionName;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InfoAction;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBuffArrow_Chance;                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBuffArrow_Rating;                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RarityBorder;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RequirementsSlots;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RewardsSet;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                   SquadRating;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                SuccessChance;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxBonuses;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VehicleImage;                                      // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       VehicleName;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UViewInfoButton_NoText_C*               ViewInfoButton_NoText;                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackInputAction;                                   // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    ChangeVehicleActon;                                // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SlotItemAction;                                    // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CloseAction;                                       // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    StartExpeditionAction;                             // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FHomebaseSquad                         Current_Squad_Info;                                // 0x0470(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            NoVehicleBrush;                                    // 0x04F8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 Expedition_Pick_Vehicle_Class;                     // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CancelInputActionName;                             // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedSlot;                                      // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4385[0x4];                                     // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInfoWindow_C*                          RewardInfoWindow;                                  // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle  WaitingForDialogHandle;                            // 0x05A0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                           BuffColor;                                         // 0x05A4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DebuffColor;                                       // 0x05B4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4386[0x4];                                     // 0x05C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    PurchaseSlotAction;                                // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InspectAction;                                     // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortItem*                              InspectItem;                                       // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ExpeditionSquadSlotsView_C*         CachedExpeditionSquadSlotsView;                    // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadSlotItemPicker_C*                 CachedExpeditionSquadSlotPicker;                   // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SortPickerAction;                                  // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget(int32 EntryPoint);
	void OnRequestClosePicker();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void SetData(class UFortExpeditionItem* InItem);
	void Construct();
	void OnStartExpeditionCompleted();
	void OnGamepadStateChanged(bool bUsingGamepad);
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature();
	void OnStartExpedition();
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnRefreshBuildSquadWidget();
	void HACK_Select_Item_in_Picker();
	void OnActivated();
	void Destruct();
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature(class UFortItem* SelectedItem);
	void HandleVechicleSelected(class FName SquadId);
	void DialogResult_B738291040F33B805332A7B633B3ACBD(EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Handle_Back(bool* Passthrough);
	void Setup_Input_Action_Handlers();
	void Set_Name(class UFortItem* Param_Item);
	void Set_Description(class UFortItem* Param_Item);
	void Set_Rating(class UFortExpeditionItem* Param_Item);
	void Refresh_Item_Data();
	void Get_Expedition_Item_Definition(class UFortExpeditionItem* Param_Item, class UFortExpeditionItemDefinition** ItemDef);
	void Set_Duration(class UFortExpeditionItemDefinition* ItemDef);
	void Set_Rarity(class UFortItem* Param_Item);
	void Set_Rewards(class UFortExpeditionItemDefinition* ItemDef);
	void Handle_Change_Vehicle(bool* Passthrough);
	void Refresh_Squad_Widgets();
	void Set_Vehicle_Name(struct FHomebaseSquad& HomebaseSquad);
	void Clear_Vehicle_Widgets();
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Param_Item);
	void Set_Requirements(class UFortExpeditionItemDefinition* ItemDef);
	void Set_Expedition_Costs(class UFortExpeditionItemDefinition* ItemDef);
	void Update_Squad_Slot_Pickers(int32 SelectedSquadIndex);
	void Update_Expedition_Power();
	void Set_Bonus_Criteria(class UFortExpeditionItem* Param_Item, TArray<class UFortItem*>& SlottedItems);
	void HACK_SetCursorToSquadSlotSlotted();
	void Get_Picker_List_View(class UFortItemTileView** PickerTileView);
	class UObject* Get_Selected_Item();
	void Try_to_Auto_Select_First_Vehicle();
	void Handle_Expedition_Expired();
	void Update_Start_Expedition_Widget_State();
	void Handle_Slot_Item_Action(bool* Passthrough);
	void Handle_Close_Picker_Action(bool* Passthrough);
	void Handle_Selected_Item_Committed();
	void Handle_Squad_Slot_Selected();
	void Handle_Squad_Picker_Closed();
	void Handle_Start_Expedition(bool* Passthrough);
	void Handle_Open_Picker(bool* Passthrough);
	void Update_Vehicle_Selected(class FName Param_CurrentSquadId);
	EInputActionState Get_Slot_Item_State();
	void Handle_Back_with_Squad_Clear(bool* Passthrough);
	void Update_For_Preview(class UFortItem* Param_Item);
	void Determine_Preview_State(float Preview, float Current, EFortBuffState* State);
	void Update_Power_and_Rating_for_Preview(class UFortItem* Param_Item, TArray<class UFortItem*>* SlottedItems1);
	class UClass* Determine_Text_Style_from_Preview_State(EFortBuffState Param_Index);
	ESlateVisibility Determine_Buff_Arrow_Visiblity_From_Preview_State(EFortBuffState Param_Index);
	void Update_Rating_Buff_Arrow_for_Preview(EFortBuffState Param_Index);
	void Update_Chance_Buff_Arrow_for_Preview(EFortBuffState Param_Index);
	struct FLinearColor Determine_Buff_Arrow_Color_for_Preview_State(EFortBuffState Param_Index);
	float Determine_Buff_Arrow_Angle_for_Preview_State(EFortBuffState Param_Index);
	void Handle_Purchase_Slot(bool* Passthrough);
	EInputActionState Get_Purchase_Slot_State();
	int32 Get_Selected_Slot__SAFE_();
	void Handle_Inspect(bool* Passthrough);
	void Determine_Inspect_Item_for_Squad_Slot();
	void HACK_SetCursorToSquadPicker();
	class UFortItem* Get_Item_In_Selected_Squad_Slot();
	void Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor);
	class UWidget* GetSquadRatingTooltipWidget();
	class UWidget* GetSuccessChanceTooltipWidget();
	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow);
	void Handle_Sort_Picker_Action(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionBuildSquadWidget_C">();
	}
	static class UBP_FortExpeditionBuildSquadWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionBuildSquadWidget_C>();
	}
};

}
