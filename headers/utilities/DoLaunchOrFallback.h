#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherDesktopProvider {
class DoLaunchOrFallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DoLaunchOrFallback@LauncherDesktopProvider@@QEAAX_NPEBG@Z
    void StartActivity(bool, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DoLaunchOrFallback@LauncherDesktopProvider@@QEAA@XZ
    ~DoLaunchOrFallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DoLaunchOrFallback@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DoLaunchOrFallback@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
