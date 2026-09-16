#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherServiceProvider {
class TargetAppResolver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TargetAppResolver@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetAppResolver@LauncherServiceProvider@@QEAA@XZ
    ~TargetAppResolver();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TargetAppResolver@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TargetAppResolver@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
