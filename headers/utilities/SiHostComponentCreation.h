#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherServiceProvider {
class SiHostComponentCreation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SiHostComponentCreation@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SiHostComponentCreation@LauncherServiceProvider@@QEAA@XZ
    ~SiHostComponentCreation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SiHostComponentCreation@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SiHostComponentCreation@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
