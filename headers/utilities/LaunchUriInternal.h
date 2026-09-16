#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherDesktopProvider {
class LaunchUriInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUriInternal@LauncherDesktopProvider@@QEAAXPEBGK_N1@Z
    void StartActivity(unsigned short const *, unsigned long, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriInternal@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchUriInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUriInternal@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUriInternal@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
