#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class FindAppUriHandlers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindAppUriHandlers@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindAppUriHandlers@LauncherClientProvider@@QEAA@XZ
    ~FindAppUriHandlers();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindAppUriHandlers@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindAppUriHandlers@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
