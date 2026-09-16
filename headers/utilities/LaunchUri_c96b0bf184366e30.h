#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherServiceProvider {
class LaunchUri {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUri@LauncherServiceProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUri@LauncherServiceProvider@@QEAA@XZ
    ~LaunchUri();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUri@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUri@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
