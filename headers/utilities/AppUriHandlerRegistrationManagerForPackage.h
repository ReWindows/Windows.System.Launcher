#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
namespace LauncherClientProvider {
class AppUriHandlerRegistrationManagerForPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUriHandlerRegistrationManagerForPackage@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerRegistrationManagerForPackage@LauncherClientProvider@@QEAA@XZ
    ~AppUriHandlerRegistrationManagerForPackage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUriHandlerRegistrationManagerForPackage@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUriHandlerRegistrationManagerForPackage@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
