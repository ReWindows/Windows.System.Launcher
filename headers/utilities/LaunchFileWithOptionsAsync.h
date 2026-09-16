#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherClientProvider {
class LaunchFileWithOptionsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchFileWithOptionsAsync@LauncherClientProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFileWithOptionsAsync@LauncherClientProvider@@QEAA@XZ
    ~LaunchFileWithOptionsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFileWithOptionsAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFileWithOptionsAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
