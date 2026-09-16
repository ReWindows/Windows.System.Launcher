#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherServiceProvider {
class UpdateAppUriHandlerHosts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateAppUriHandlerHosts@LauncherServiceProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateAppUriHandlerHosts@LauncherServiceProvider@@QEAA@XZ
    ~UpdateAppUriHandlerHosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateAppUriHandlerHosts@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateAppUriHandlerHosts@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
