#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 11 member(s).
namespace LauncherDesktopProvider {
class Execute {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Execute@LauncherDesktopProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Execute@LauncherDesktopProvider@@QEAA@XZ
    ~Execute();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Execute@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Execute@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
