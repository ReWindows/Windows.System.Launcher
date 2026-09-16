#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
namespace LauncherServiceProvider {
class ActivateApp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateApp@LauncherServiceProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateApp@LauncherServiceProvider@@QEAA@XZ
    ~ActivateApp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateApp@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateApp@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
