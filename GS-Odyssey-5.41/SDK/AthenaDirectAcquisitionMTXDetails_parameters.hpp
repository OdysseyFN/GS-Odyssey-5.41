#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionMTXDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails
// 0x01B8 (0x01B8 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_ExecuteUbergraph_AthenaDirectAcquisitionMTXDetails final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSeasonNumber_ReturnValue;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B8C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0050(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetOfferId_ReturnValue;                   // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B8D[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue2;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8E[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue3;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate2;             // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetOfferId_ReturnValue1;                  // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8F[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue1;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue4;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B90[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOfferId_ReturnValue2;                  // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_CanPurchaseOffer_ReturnValue;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B91[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue4;                  // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_PurchaseOffer_ReturnValue;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HandleBack_Passthrough;                   // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B92[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B93[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue5;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGiftable_ReturnValue;                   // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B94[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOfferId_ReturnValue3;                  // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue5;                  // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_CanGiftOffer_ReturnValue;                 // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B95[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B96[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue6;                  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGiftingScreen_C*                       CallFunc_Create_ReturnValue;                       // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B97[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue6;                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__GiftButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_BndEvt__GiftButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandlePurchaseComplete
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_HandlePurchaseComplete final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.Init
// 0x0268 (0x0268 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_Init final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B98[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue1;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBonusQuantity_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B99[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         CallFunc_GetBaseQuantity_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBonusQuantity_ReturnValue1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0058(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortMtxStoreOfferType                        CallFunc_GetFortStoreOfferType_ReturnValue;        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9A[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue2;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9B[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortMtxDetailsAttribute>       CallFunc_GetDetailsAttributes_ReturnValue;         // 0x0088(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9C[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortMtxDetailsAttribute               CallFunc_Array_Get_Item;                           // 0x00A0(0x0030)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9D[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9E[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue3;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetSalePrice_SalePrice;                   // 0x00E8(0x0018)()
	bool                                          CallFunc_GetSalePrice_ReturnValue;                 // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9F[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetNormalPrice_ReturnValue;               // 0x0108(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA0[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetName_ReturnValue;                      // 0x0128(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA1[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0148(0x0018)()
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA2[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue4;                // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBackground_ReturnValue;                // 0x0170(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMtxGradient                       CallFunc_GetGradient_ReturnValue;                  // 0x0180(0x0020)(NoDestructor)
	struct FSlateBrush                            CallFunc_GetDetailsImage_ReturnValue;              // 0x01A0(0x0088)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA3[0x2];                                     // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA4[0x1];                                     // 0x0237(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     CallFunc_Create_ReturnValue;                       // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable5;                               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA5[0x5];                                     // 0x025B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue1;          // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.PopDetails
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_PopDetails final
{
public:
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDirectAcquisitionMTXDetails.AthenaDirectAcquisitionMTXDetails_C.InitPurchaseButton
// 0x0038 (0x0038 - 0x0000)
struct AthenaDirectAcquisitionMTXDetails_C_InitPurchaseButton final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA6[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortDirectAcquisitionOfferInfo*        CallFunc_GetOfferInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPriceInMTX_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BA7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetOfferId_ReturnValue;                   // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EOfferPurchaseError                           CallFunc_CanPurchaseOffer_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

