#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherClientProvider {
class GetAllHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAllHosts@LauncherClientProvider@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAllHosts@LauncherClientProvider@@QEAA@XZ
    ~GetAllHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAllHosts@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAllHosts@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
