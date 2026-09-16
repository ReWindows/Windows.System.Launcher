#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
class CLaunchToMonitor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLaunchToMonitor@@QEAA@XZ
    CLaunchToMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CLaunchToMonitor@@UEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetMonitor(HMONITOR__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
};
