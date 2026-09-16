#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class LauncherCachedUriLaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LauncherCachedUriLaunch@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long Execute(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteWithDetailedResultAsync@LauncherCachedUriLaunch@@UEAAJPEAPEAU?$IAsyncOperation@W4PendingLaunchResult@Private@System@Windows@@@Foundation@Windows@@@Z
    virtual long ExecuteWithDetailedResultAsync(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherCachedUriLaunch@@QEAA@XZ
    LauncherCachedUriLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LauncherCachedUriLaunch@@QEAAJAEBVCallerInformation@@PEAUHSTRING__@@11W4InternalLauncherOptions@Launch@Internal@System@Windows@@11PEBULAUNCH_PARAMETERS@@PEAUILauncherTarget@@1@Z
    long RuntimeClassInitialize(CallerInformation const &, HSTRING__*, HSTRING__*, HSTRING__*, int, HSTRING__*, HSTRING__*, LAUNCH_PARAMETERS const *, ILauncherTarget *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentWindow@LauncherCachedUriLaunch@@UEAAJ_K@Z
    virtual long SetParentWindow(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchType@LauncherCachedUriLaunch@@UEAAJPEAW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long get_LaunchType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewWindowId@LauncherCachedUriLaunch@@UEAAJPEAH@Z
    virtual long get_RequestingViewWindowId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scheme@LauncherCachedUriLaunch@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Scheme(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetApplicationUserModelId@LauncherCachedUriLaunch@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@LauncherCachedUriLaunch@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchType@LauncherCachedUriLaunch@@UEAAJW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long put_LaunchType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetApplicationUserModelId@LauncherCachedUriLaunch@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetApplicationUserModelId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherCachedUriLaunch@@UEAA@XZ
    virtual ~LauncherCachedUriLaunch();
};
