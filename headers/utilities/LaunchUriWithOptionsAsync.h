#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherClientProvider {
class LaunchUriWithOptionsAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUriWithOptionsAsync@LauncherClientProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriWithOptionsAsync@LauncherClientProvider@@QEAA@XZ
    ~LaunchUriWithOptionsAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUriWithOptionsAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUriWithOptionsAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
