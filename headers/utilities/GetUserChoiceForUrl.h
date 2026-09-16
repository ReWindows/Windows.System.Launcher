#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherServiceProvider {
class GetUserChoiceForUrl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetUserChoiceForUrl@LauncherServiceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetUserChoiceForUrl@LauncherServiceProvider@@QEAA@XZ
    ~GetUserChoiceForUrl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetUserChoiceForUrl@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetUserChoiceForUrl@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
