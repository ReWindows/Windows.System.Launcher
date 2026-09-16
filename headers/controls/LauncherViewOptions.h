#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
class LauncherViewOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@LauncherViewOptions@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredRemainingView@LauncherViewOptions@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z
    virtual long get_DesiredRemainingView(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserContextToken@LauncherViewOptions@@UEAAJPEA_K@Z
    virtual long get_UserContextToken(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredRemainingView@LauncherViewOptions@@UEAAJW4ViewSizePreference@ViewManagement@UI@Windows@@@Z
    virtual long put_DesiredRemainingView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UserContextToken@LauncherViewOptions@@UEAAJ_K@Z
    virtual long put_UserContextToken(uint64_t);
};
