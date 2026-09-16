#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 33 member(s).
class RemoteLauncherInteropImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemoteLauncherInteropImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemoteLauncherInteropImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemoteLauncherInteropImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemoteLauncherInteropImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLaunchUriRequest@RemoteLauncherInteropImpl@@UEAAJ_KPEAUHSTRING__@@IPEAEPEAW4RemoteLaunchUriStatus@System@Windows@@@Z
    virtual long HandleLaunchUriRequest(uint64_t, HSTRING__*, unsigned int, unsigned char *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@RemoteLauncherInteropImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@RemoteLauncherInteropImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemoteLauncherInteropImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemoteLauncherInteropImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteLauncherInteropImpl@@QEAA@XZ
    RemoteLauncherInteropImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendLaunchUriRequest@RemoteLauncherInteropImpl@@UEAAJPEAUIRemoteSystemConnectionRequest@RemoteSystems@System@Windows@@PEAUHSTRING__@@PEAUIRemoteLauncherOptions@45@PEAUIPropertySet@Collections@Foundation@5@1PEAW4RemoteLaunchUriStatus@45@@Z
    virtual long SendLaunchUriRequest(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque *, HSTRING__*, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchCorrelationId@RemoteLauncherInteropImpl@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    ::Microsoft::WRL::Wrappers::HString FetchCorrelationId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchFallbackUri@RemoteLauncherInteropImpl@@AEAA?AV?$ComPtr@UIUriRuntimeClass@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    WindissectOpaque FetchFallbackUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchInputData@RemoteLauncherInteropImpl@@AEAA?AV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    WindissectOpaque FetchInputData(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchLauncherOptionsAndInputData@RemoteLauncherInteropImpl@@AEAAXPEAUIUriRuntimeClass@Foundation@Windows@@PEAUIPropertySet@Collections@34@PEAPEAUILauncherOptions@System@4@PEAPEAU5634@@Z
    void FetchLauncherOptionsAndInputData(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FetchPreferredAppIds@RemoteLauncherInteropImpl@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAPEAPEAUHSTRING__@@PEAI@Z
    void FetchPreferredAppIds(WindissectOpaque *, HSTRING__* * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtocolSupported@RemoteLauncherInteropImpl@@AEAA_NPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@@Z
    bool IsProtocolSupported(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateCorrelationId@RemoteLauncherInteropImpl@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUHSTRING__@@@Z
    void PopulateCorrelationId(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFallbackUri@RemoteLauncherInteropImpl@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIUriRuntimeClass@45@@Z
    void PopulateFallbackUri(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateInputData@RemoteLauncherInteropImpl@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIPropertySet@345@@Z
    void PopulateInputData(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateOptionsAndInputData@RemoteLauncherInteropImpl@@AEAA?AV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAUIRemoteLauncherOptions@System@Windows@@PEAUIPropertySet@Collections@Foundation@7@PEAUHSTRING__@@@Z
    WindissectOpaque PopulateOptionsAndInputData(WindissectOpaque *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePreferredAppIds@RemoteLauncherInteropImpl@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAU?$IVector@PEAUHSTRING__@@@345@@Z
    void PopulatePreferredAppIds(WindissectOpaque *, WindissectOpaque *);
};
