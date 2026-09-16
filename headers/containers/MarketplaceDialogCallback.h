#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherClientProvider {
class MarketplaceDialogCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MarketplaceDialogCallback@LauncherClientProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MarketplaceDialogCallback@LauncherClientProvider@@QEAA@XZ
    ~MarketplaceDialogCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MarketplaceDialogCallback@LauncherClientProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MarketplaceDialogCallback@LauncherClientProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherClientProvider
