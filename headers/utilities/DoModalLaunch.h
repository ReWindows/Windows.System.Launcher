#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherServiceProvider {
class DoModalLaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DoModalLaunch@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DoModalLaunch@LauncherServiceProvider@@QEAA@XZ
    ~DoModalLaunch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DoModalLaunch@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DoModalLaunch@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
