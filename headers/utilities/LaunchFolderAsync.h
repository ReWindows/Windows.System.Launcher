#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class LaunchFolderAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFolderAsync@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolderAsync@LauncherClientProvider@@QEAA@XZ
    ~LaunchFolderAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolderAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolderAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
