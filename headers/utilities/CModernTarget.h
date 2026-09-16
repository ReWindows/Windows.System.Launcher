#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
class CModernTarget {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CModernTarget@@QEAA@XZ
    CModernTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@CModernTarget@@UEAAJAEBVCallerInformation@@W4InternalLauncherOptions@0Internal@System@Windows@@PEAUILauncherUIOptions@56@PEAUHSTRING__@@@Z
    virtual long Launch(CallerInformation const &, int, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CModernTarget@@QEAAJPEBULAUNCH_PARAMETERS@@PEAUIUnknown@@PEAUIStorageFileQueryResult@Search@Storage@Windows@@PEAUHSTRING__@@PEAUIExtensionInfo@Launch@Internal@System@7@W4PendingLaunchType@Private@System@7@@Z
    long RuntimeClassInitialize(LAUNCH_PARAMETERS const *, IUnknown *, ::Windows::Storage::Search::IStorageFileQueryResult *, HSTRING__*, WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModernTarget@@UEAA@XZ
    virtual ~CModernTarget();
};
