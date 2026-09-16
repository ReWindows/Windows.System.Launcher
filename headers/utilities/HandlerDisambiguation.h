#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherDesktopProvider {
class HandlerDisambiguation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandlerDisambiguation@LauncherDesktopProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandlerDisambiguation@LauncherDesktopProvider@@QEAA@XZ
    ~HandlerDisambiguation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandlerDisambiguation@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandlerDisambiguation@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
