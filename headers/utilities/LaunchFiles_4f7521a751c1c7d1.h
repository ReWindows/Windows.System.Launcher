#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherServiceProvider {
class LaunchFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFiles@LauncherServiceProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFiles@LauncherServiceProvider@@QEAA@XZ
    ~LaunchFiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFiles@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFiles@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
