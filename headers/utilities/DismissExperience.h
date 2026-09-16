#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherServiceProvider {
class DismissExperience {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DismissExperience@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DismissExperience@LauncherServiceProvider@@QEAA@XZ
    ~DismissExperience();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DismissExperience@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DismissExperience@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
