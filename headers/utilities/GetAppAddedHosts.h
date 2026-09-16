#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherClientProvider {
class GetAppAddedHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAppAddedHosts@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAppAddedHosts@LauncherClientProvider@@QEAA@XZ
    ~GetAppAddedHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAppAddedHosts@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAppAddedHosts@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
