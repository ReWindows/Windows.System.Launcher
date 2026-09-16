#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class LaunchUriOnRemoteSystem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUriOnRemoteSystem@LauncherClientProvider@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriOnRemoteSystem@LauncherClientProvider@@QEAA@XZ
    ~LaunchUriOnRemoteSystem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUriOnRemoteSystem@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUriOnRemoteSystem@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
