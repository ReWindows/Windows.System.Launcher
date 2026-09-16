#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherServiceProvider {
class GetAppUriHandlerHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAppUriHandlerHosts@LauncherServiceProvider@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAppUriHandlerHosts@LauncherServiceProvider@@QEAA@XZ
    ~GetAppUriHandlerHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAppUriHandlerHosts@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAppUriHandlerHosts@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
