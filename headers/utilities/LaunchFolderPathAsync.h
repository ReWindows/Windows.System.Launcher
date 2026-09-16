#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class LaunchFolderPathAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFolderPathAsync@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolderPathAsync@LauncherClientProvider@@QEAA@XZ
    ~LaunchFolderPathAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolderPathAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolderPathAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
