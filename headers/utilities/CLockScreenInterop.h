#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
class CLockScreenInterop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheLaunchRequest@CLockScreenInterop@@QEAAJPEAUIUnknown@@@Z
    long CacheLaunchRequest(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTargetRunAboveLock@CLockScreenInterop@@QEAAJPEBGPEA_N@Z
    long CanTargetRunAboveLock(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLockScreenInterop@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallerRunningOnLock@CLockScreenInterop@@QEAAJPEBG_KPEA_N@Z
    long IsCallerRunningOnLock(unsigned short const *, uint64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchTargetAboveLock@CLockScreenInterop@@QEAAJPEBG0U_GUID@@PEAUIInspectable@@2PEAK@Z
    long LaunchTargetAboveLock(unsigned short const *, unsigned short const *, _GUID, IInspectable *, IInspectable *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenInterop@@QEAA@XZ
    ~CLockScreenInterop();
};
