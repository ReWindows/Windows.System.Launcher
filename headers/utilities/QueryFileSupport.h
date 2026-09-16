#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherClientProvider {
class QueryFileSupport {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryFileSupport@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryFileSupport@LauncherClientProvider@@QEAA@XZ
    ~QueryFileSupport();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryFileSupport@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryFileSupport@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
