#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
namespace LauncherServiceProvider {
class LaunchFolderPath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PathNotValid@LaunchFolderPath@LauncherServiceProvider@@QEAAXXZ
    void PathNotValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFolderPath@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolderPath@LauncherServiceProvider@@QEAA@XZ
    ~LaunchFolderPath();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolderPath@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolderPath@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
