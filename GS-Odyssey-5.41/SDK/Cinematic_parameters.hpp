#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CinematicLanuageToTrackStruct_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// 0x0108 (0x0108 - 0x0000)
struct Cinematic_C_ExecuteUbergraph_Cinematic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5233[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleClientEvent_EventSource;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent;              // 0x0018(0x0020)(ConstParm, NoDestructor)
	class UObject*                                K2Node_HandleClientEvent_EventSource1;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_HandleClientEvent_EventFocus1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       K2Node_HandleClientEvent_ClientEvent1;             // 0x0048(0x0020)(ConstParm, NoDestructor)
	class UFortMediaSubtitlesPlayer*              K2Node_DynamicCast_AsFort_Media_Subtitles_Player;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5234[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           K2Node_DynamicCast_AsMedia_Source;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5235[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Event_Widget;                               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      K2Node_Event_State;                                // 0x0090(0x0003)(NoDestructor)
	uint8                                         Pad_5236[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	EFortUIState                                  K2Node_Event_PreviousUIState;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIState                                  K2Node_Event_NextUIState;                          // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5237[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue1;         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5238[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPreparing_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5239[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue1;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523A[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue2;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAudioTrackIndex_AudioTrack;            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectTrack_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.OnExitState
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_OnExitState final
{
public:
	EFortUIState                                  NextUIState;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic.Cinematic_C.OnEnterState
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_OnEnterState final
{
public:
	EFortUIState                                  PreviousUIState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic.Cinematic_C.PushContentWidgetInternal
// 0x0010 (0x0010 - 0x0000)
struct Cinematic_C_PushContentWidgetInternal final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContentPushState                      State;                                             // 0x0008(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_HandleClientEvent_SkipCinematic final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_HandleClientEvent_QueueCinematic final
{
public:
	class UObject*                                EventSource;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                EventFocus;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                       ClientEvent;                                       // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function Cinematic.Cinematic_C.ShowMovie
// 0x0040 (0x0040 - 0x0000)
struct Cinematic_C_ShowMovie final
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             Param_MovieSlot;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieWidget_C*                         Param_MovieWidget;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieWidget_C*                         CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic.Cinematic_C.SkipMovie
// 0x0010 (0x0010 - 0x0000)
struct Cinematic_C_SkipMovie final
{
public:
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Pause_ReturnValue;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.PopContentWidgetInternal
// 0x0018 (0x0018 - 0x0000)
struct Cinematic_C_PopContentWidgetInternal final
{
public:
	struct FContentPushState                      State;                                             // 0x0000(0x0003)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_523B[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_PopWidget_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic.Cinematic_C.ClearMovieSlot
// 0x0008 (0x0008 - 0x0000)
struct Cinematic_C_ClearMovieSlot final
{
public:
	class UPanelWidget*                           MovieSlotToClear;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Cinematic.Cinematic_C.ClearMovieWidget
// 0x0030 (0x0030 - 0x0000)
struct Cinematic_C_ClearMovieWidget final
{
public:
	class UFortMovieWidget*                       MovieWidgetToClear;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.SetMoviePlaying
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_SetMoviePlaying final
{
public:
	bool                                          MoviePlaying;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
// 0x0050 (0x0050 - 0x0000)
struct Cinematic_C_ClearOldSubtitlesIfNecessary final
{
public:
	bool                                          NewSubtitlesExist;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMediaSubtitlesPlayer*              NewSubtitles;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable1;                             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.StopAndClearSubtitles
// 0x0001 (0x0001 - 0x0000)
struct Cinematic_C_StopAndClearSubtitles final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
// 0x0088 (0x0088 - 0x0000)
struct Cinematic_C_GetAudioTrackIndex final
{
public:
	int32                                         AudioTrack;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_523F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetPreferredLanguages_ReturnValue;        // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item1;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCinematicLanuageToTrackStruct         CallFunc_GetDataTableRowFromName_OutRow;           // 0x005C(0x0004)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5240[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5241[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
