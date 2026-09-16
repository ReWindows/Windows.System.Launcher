#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherClientProvider {
class QueryAppUriSupport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryAppUriSupport@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryAppUriSupport@LauncherClientProvider@@QEAA@XZ
    ~QueryAppUriSupport();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryAppUriSupport@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryAppUriSupport@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
