#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherClientProvider {
class AppUriHandlerValidation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppUriHandlerValidation@LauncherClientProvider@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AppUriHandlerValidation@LauncherClientProvider@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerValidation@LauncherClientProvider@@QEAA@XZ
    ~AppUriHandlerValidation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppUriHandlerValidation@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppUriHandlerValidation@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
