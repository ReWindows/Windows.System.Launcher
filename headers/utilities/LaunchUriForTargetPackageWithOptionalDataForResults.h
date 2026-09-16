#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherServiceProvider {
class LaunchUriForTargetPackageWithOptionalDataForResults {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchUriForTargetPackageWithOptionalDataForResults@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriForTargetPackageWithOptionalDataForResults@LauncherServiceProvider@@QEAA@XZ
    ~LaunchUriForTargetPackageWithOptionalDataForResults();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUriForTargetPackageWithOptionalDataForResults@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUriForTargetPackageWithOptionalDataForResults@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
