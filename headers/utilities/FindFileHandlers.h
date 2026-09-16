#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class FindFileHandlers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindFileHandlers@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindFileHandlers@LauncherClientProvider@@QEAA@XZ
    ~FindFileHandlers();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindFileHandlers@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindFileHandlers@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
