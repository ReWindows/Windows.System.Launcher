#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 12 member(s).
namespace LauncherClientProvider {
class LaunchUriAsync {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchUriAsync@LauncherClientProvider@@QEAA@$$QEAV01@@Z
    LaunchUriAsync(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@LaunchUriAsync@LauncherClientProvider@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUriAsync@LauncherClientProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriAsync@LauncherClientProvider@@QEAA@XZ
    ~LaunchUriAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUriAsync@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUriAsync@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
