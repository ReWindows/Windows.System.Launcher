#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherClientProvider {
class SetAppAddedHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetAppAddedHosts@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetAppAddedHosts@LauncherClientProvider@@QEAA@XZ
    ~SetAppAddedHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetAppAddedHosts@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetAppAddedHosts@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
