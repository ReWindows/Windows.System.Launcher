#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherServiceProvider {
class VerifyHostedAppUri {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VerifyHostedAppUri@LauncherServiceProvider@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VerifyHostedAppUri@LauncherServiceProvider@@QEAA@XZ
    ~VerifyHostedAppUri();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VerifyHostedAppUri@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VerifyHostedAppUri@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
