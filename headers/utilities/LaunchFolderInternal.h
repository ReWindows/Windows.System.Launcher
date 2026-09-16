#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherDesktopProvider {
class LaunchFolderInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFolderInternal@LauncherDesktopProvider@@QEAAXPEBG_N1@Z
    void StartActivity(unsigned short const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolderInternal@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchFolderInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolderInternal@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolderInternal@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
