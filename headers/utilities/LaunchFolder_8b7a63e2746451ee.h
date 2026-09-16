#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherServiceProvider {
class LaunchFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFolder@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolder@LauncherServiceProvider@@QEAA@XZ
    ~LaunchFolder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolder@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolder@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
