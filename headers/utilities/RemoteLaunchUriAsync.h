#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class RemoteLaunchUriAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RemoteLaunchUriAsync@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteLaunchUriAsync@LauncherClientProvider@@QEAA@XZ
    ~RemoteLaunchUriAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RemoteLaunchUriAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RemoteLaunchUriAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
