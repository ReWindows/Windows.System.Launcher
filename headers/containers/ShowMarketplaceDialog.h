#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherClientProvider {
class ShowMarketplaceDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowMarketplaceDialog@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowMarketplaceDialog@LauncherClientProvider@@QEAA@XZ
    ~ShowMarketplaceDialog();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowMarketplaceDialog@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowMarketplaceDialog@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
