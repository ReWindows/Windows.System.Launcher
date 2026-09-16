#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class AppUriHandlerRegistrationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUriHandlerRegistrationManager@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerRegistrationManager@LauncherClientProvider@@QEAA@XZ
    ~AppUriHandlerRegistrationManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUriHandlerRegistrationManager@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUriHandlerRegistrationManager@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
