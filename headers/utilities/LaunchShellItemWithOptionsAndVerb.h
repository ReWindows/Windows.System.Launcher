#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace LauncherDesktopProvider {
class LaunchShellItemWithOptionsAndVerb {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchShellItemWithOptionsAndVerb@LauncherDesktopProvider@@QEAAXPEBG00@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchShellItemWithOptionsAndVerb@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchShellItemWithOptionsAndVerb();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchShellItemWithOptionsAndVerb@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchShellItemWithOptionsAndVerb@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
