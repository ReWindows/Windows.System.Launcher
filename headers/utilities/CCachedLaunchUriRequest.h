#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class CCachedLaunchUriRequest {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedLaunchUriRequest@@QEAA@XZ
    CCachedLaunchUriRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CCachedLaunchUriRequest@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long Execute(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCachedLaunchUriRequest@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@UPendingLaunchConfiguration@@$$QEAV?$CAutoHandle@PEAX@@PEAUILauncherOptions@System@4@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, PendingLaunchConfiguration, WindissectOpaque &&, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentWindow@CCachedLaunchUriRequest@@UEAAJ_K@Z
    virtual long SetParentWindow(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchType@CCachedLaunchUriRequest@@UEAAJPEAW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long get_LaunchType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewWindowId@CCachedLaunchUriRequest@@UEAAJPEAH@Z
    virtual long get_RequestingViewWindowId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scheme@CCachedLaunchUriRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Scheme(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetApplicationUserModelId@CCachedLaunchUriRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CCachedLaunchUriRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchType@CCachedLaunchUriRequest@@UEAAJW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long put_LaunchType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetApplicationUserModelId@CCachedLaunchUriRequest@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetApplicationUserModelId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedLaunchUriRequest@@UEAA@XZ
    virtual ~CCachedLaunchUriRequest();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentLifetime@CCachedLaunchUriRequest@@AEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ
    WindissectOpaque GetParentLifetime();
};
