#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class QueryUriSupport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryUriSupport@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryUriSupport@LauncherClientProvider@@QEAA@XZ
    ~QueryUriSupport();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryUriSupport@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryUriSupport@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
