#pragma once

// Outlast2 (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00AC - 0x00A4)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                             // 0x00A4(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x000C (0x025C - 0x0250)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                            // 0x0250(0x0004) (Edit)
	unsigned long                                      bStopPending : 1;                                         // 0x0250(0x0004)
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                             // 0x0250(0x0004) (Edit)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0250(0x0004) (Transient)
	class UAkEvent*                                    PlayEvent;                                                // 0x0254(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAudioDevice
// 0x0038 (0x00A8 - 0x0070)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0070(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0017 (0x00A4 - 0x008D)
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0090(0x0008) (Edit)
	class UAkEvent*                                    AutoPlayEvent;                                            // 0x0098(0x0008)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                              // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.Interface_AkEventHandler
// 0x0000 (0x0068 - 0x0068)
class UInterface_AkEventHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.Interface_AkEventHandler");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x001C (0x00E4 - 0x00C8)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit)
	TEnumAsByte<EPlayingDirectionConditional>          ConditionalSide;                                          // 0x00D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                 // 0x00D4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00F0 - 0x00E0)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x00E0(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x006C - 0x0068)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0068 - 0x0068)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0184 - 0x0174)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                                // 0x0174(0x0004) (Edit)
	unsigned long                                      bWaitingCallback : 1;                                     // 0x0174(0x0004) (Transient)
	class UAkBank*                                     Bank;                                                     // 0x0178(0x0008) (Edit)
	int                                                Signal;                                                   // 0x0180(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x0018 (0x018C - 0x0174)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	struct FName                                       BoneName;                                                 // 0x0174(0x0008) (Edit)
	unsigned long                                      bIgnoreVOSystem : 1;                                      // 0x017C(0x0004) (Edit)
	int                                                Signal;                                                   // 0x0180(0x0004) (Transient)
	class UAkEvent*                                    Event;                                                    // 0x0184(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0018 (0x0170 - 0x0158)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FName                                       BoneName;                                                 // 0x0158(0x0008) (Edit)
	struct FString                                     Trigger;                                                  // 0x0160(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x018C - 0x0174)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                                    // 0x0174(0x0010) (Edit, NeedCtorLink)
	float                                              Value;                                                    // 0x0184(0x0004) (Edit)
	unsigned long                                      Running : 1;                                              // 0x0188(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                               // 0x0158(0x0010) (Edit, NeedCtorLink)
	struct FString                                     State;                                                    // 0x0168(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0178 - 0x0158)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                              // 0x0158(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Switch;                                                   // 0x0168(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
