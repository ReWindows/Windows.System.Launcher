#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherDesktopProvider {
class AssociationWarningPrompt {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@AssociationWarningPrompt@LauncherDesktopProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AssociationWarningPrompt@LauncherDesktopProvider@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssociationWarningPrompt@LauncherDesktopProvider@@QEAA@XZ
    ~AssociationWarningPrompt();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AssociationWarningPrompt@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AssociationWarningPrompt@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
