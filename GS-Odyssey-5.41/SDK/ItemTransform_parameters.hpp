#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransform

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
// 0x0090 (0x0090 - 0x0000)
struct ItemTransform_C_ExecuteUbergraph_ItemTransform final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E53[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FText& ErrorMessage)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                K2Node_ComponentBoundEvent_ActiveWidget;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HandleSelect_PassThrough;                 // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_TransformActive;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E54[0x2];                                      // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E55[0x3];                                      // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_ComponentBoundEvent_Key;                    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FFortItemInstanceQuantityPair>& TransmoggedItems, TArray<struct FFortItemInstanceQuantityPair>& RecycledItems)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HandleClosePicker_PassThrough;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E56[0x3];                                      // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue1;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature final
{
public:
	class UFortItem*                              Key;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature final
{
public:
	bool                                          TransformActive;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature final
{
public:
	class UWidget*                                ActiveWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveWidgetIndex;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemTransform.ItemTransform_C.OpenItemTransform
// 0x0008 (0x0008 - 0x0000)
struct ItemTransform_C_OpenItemTransform final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemTransform.ItemTransform_C.SetupActionHandlers
// 0x0060 (0x0060 - 0x0000)
struct alignas(0x08) ItemTransform_C_SetupActionHandlers final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate4;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate5;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.HandleBack
// 0x0018 (0x0018 - 0x0000)
struct ItemTransform_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E57[0x7];                                      // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.HandleSelect
// 0x000C (0x000C - 0x0000)
struct ItemTransform_C_HandleSelect final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E58[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.OpenConfirmation
// 0x0060 (0x0060 - 0x0000)
struct ItemTransform_C_OpenConfirmation final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UItemTransformConfirmationModal_C*      CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_Get_Transform_Data_SelectedKey;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      CallFunc_Get_Transform_Data_SacrificeItems;        // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Get_Transform_Data_CurrentSacrificePoints; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Transform_Data_CurrentTier;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E59[0x7];                                      // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
// 0x0040 (0x0040 - 0x0000)
struct ItemTransform_C_HandleTransformConfirm final
{
public:
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_Get_Transform_Data_SelectedKey;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      CallFunc_Get_Transform_Data_SacrificeItems;        // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Get_Transform_Data_CurrentSacrificePoints; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Transform_Data_CurrentTier;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortConversionControlItemDefinition*   K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.OpenResult
// 0x0050 (0x0050 - 0x0000)
struct ItemTransform_C_OpenResult final
{
public:
	TArray<struct FFortItemInstanceQuantityPair>  RewardItems;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>  SacrificeItems;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemTransformResultModal_C*            K2Node_DynamicCast_AsItem_Transform_Result_Modal;  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
// 0x0020 (0x0020 - 0x0000)
struct ItemTransform_C_HandleTransformSucceeded final
{
public:
	TArray<struct FFortItemInstanceQuantityPair>  RewardedItems;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>  SacrificedItems;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemTransform.ItemTransform_C.HandleTransformFailed
// 0x0018 (0x0018 - 0x0000)
struct ItemTransform_C_HandleTransformFailed final
{
public:
	class FText                                   ErrorMessage;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemTransform.ItemTransform_C.HandleTransformAction
// 0x0001 (0x0001 - 0x0000)
struct ItemTransform_C_HandleTransformAction final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
// 0x0002 (0x0002 - 0x0000)
struct ItemTransform_C_HandleSelectKeyAction final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleSelect_PassThrough;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.Handle Key Screen Activated
// 0x0010 (0x0010 - 0x0000)
struct ItemTransform_C_Handle_Key_Screen_Activated final
{
public:
	class UFortItem*                              CallFunc_Get_Selected_Item_SelectedKey;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.Handle Slot Screen Activated
// 0x0008 (0x0008 - 0x0000)
struct ItemTransform_C_Handle_Slot_Screen_Activated final
{
public:
	class UFortItem*                              CallFunc_Get_Selected_Item_SelectedKey;            // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemTransform.ItemTransform_C.UpdateTransformAction
// 0x0001 (0x0001 - 0x0000)
struct ItemTransform_C_UpdateTransformAction final
{
public:
	bool                                          TransformActive;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.HandleClosePicker
// 0x0001 (0x0001 - 0x0000)
struct ItemTransform_C_HandleClosePicker final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.Handle SubScreen Activated
// 0x0008 (0x0008 - 0x0000)
struct ItemTransform_C_Handle_SubScreen_Activated final
{
public:
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemTransform.ItemTransform_C.SetAndLogSelectedKey
// 0x0008 (0x0008 - 0x0000)
struct ItemTransform_C_SetAndLogSelectedKey final
{
public:
	class UFortItem*                              SelectedItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
