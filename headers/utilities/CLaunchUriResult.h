#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
class CLaunchUriResult {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLaunchUriResult@@QEAA@XZ
    CLaunchUriResult();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Result@CLaunchUriResult@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_Result(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CLaunchUriResult@@UEAAJPEAW4LaunchUriStatus@System@Windows@@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLaunchUriResult@@UEAA@XZ
    virtual ~CLaunchUriResult();
};
