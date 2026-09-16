#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class FindUriHandlers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindUriHandlers@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindUriHandlers@LauncherClientProvider@@QEAA@XZ
    ~FindUriHandlers();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindUriHandlers@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindUriHandlers@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
