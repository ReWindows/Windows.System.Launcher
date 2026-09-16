#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherDesktopProvider {
class LaunchFilesInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFilesInternal@LauncherDesktopProvider@@QEAAXPEBG_N1@Z
    void StartActivity(unsigned short const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFilesInternal@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchFilesInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFilesInternal@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFilesInternal@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
