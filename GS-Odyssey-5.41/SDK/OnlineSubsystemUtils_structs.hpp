#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemUtils

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemUtils.EBeaconConnectionState
// NumValues: 0x0005
enum class EBeaconConnectionState : uint8
{
	Invalid                                  = 0,
	Closed                                   = 1,
	Pending                                  = 2,
	Open                                     = 3,
	EBeaconConnectionState_MAX               = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
// NumValues: 0x0007
enum class EClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	EClientRequestType_MAX                   = 6,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
// NumValues: 0x0011
enum class EPartyReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	PartyLimitReached                        = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX              = 16,
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050 (0x0050 - 0x0000)
struct FPlayerReservation final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationStr;                                     // 0x0028(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Platform;                                          // 0x0038(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowCrossplay;                                   // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EA3[0x3];                                      // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x004C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0040 (0x0040 - 0x0000)
struct FPartyReservation final
{
public:
	int32                                         TeamNum;                                           // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EA4[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PartyLeader;                                       // 0x0008(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             PartyMembers;                                      // 0x0030(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8 (0x00B8 - 0x0000)
struct alignas(0x08) FBlueprintSessionResult final
{
public:
	uint8                                         Pad_EA5[0xB8];                                     // 0x0000(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040 (0x0040 - 0x0000)
struct FPIELoginSettingsInternal final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Token;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 TokenBytes;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}
