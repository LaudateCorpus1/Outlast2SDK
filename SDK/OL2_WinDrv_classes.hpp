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

// Class WinDrv.FacebookWindows
// 0x0010 (0x00F8 - 0x00E8)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x00E8(0x0008) (Const, Native, NoExport)
	struct FPointer                                    ChildProcHandle;                                          // 0x00F0(0x0008) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}


	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const struct FString& Payload, int ResponseCode);
	void FacebookRequest(const struct FString& GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};


// Class WinDrv.HttpRequestWindows
// 0x0030 (0x00A8 - 0x0078)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                                  // 0x0078(0x0008) (Const, Native, Transient)
	struct FString                                     RequestVerb;                                              // 0x0080(0x0010) (Const, Native)
	struct FPointer                                    RequestURL;                                               // 0x0090(0x0008) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x0098(0x0010) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}


	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const struct FString& ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>* ContentPayload);
	class UHttpRequestInterface* SetURL(const struct FString& URL);
	class UHttpRequestInterface* SetVerb(const struct FString& Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0080 - 0x0068)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                                 // 0x0068(0x0008) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x0070(0x0010) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}


	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.PCOrbisForceFeedbackManager
// 0x0000 (0x0090 - 0x0090)
class UPCOrbisForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.PCOrbisForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.SwrveAnalyticsWindows
// 0x0048 (0x00E8 - 0x00A0)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.SwrveAnalyticsWindows");
		return ptr;
	}

};


// Class WinDrv.WindowsClient
// 0x01C8 (0x0248 - 0x0080)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x16C];                                     // 0x0080(0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x01EC(0x0008) (Config)
	unsigned char                                      UnknownData01[0x38];                                      // 0x01F4(0x0038) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x022C(0x0004) (Config)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0230(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0090 - 0x0090)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (0x00C8 - 0x00A8)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                                    // 0x00A8(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     AppSecret;                                                // 0x00B8(0x0010) (Const, Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		return ptr;
	}


	bool ProcessRequest();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
