#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherClientProvider {
class UpdateHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateHosts@LauncherClientProvider@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateHosts@LauncherClientProvider@@QEAA@XZ
    ~UpdateHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateHosts@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateHosts@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
