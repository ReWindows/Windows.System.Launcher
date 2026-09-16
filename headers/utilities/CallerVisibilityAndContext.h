#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace LauncherDesktopProvider {
class CallerVisibilityAndContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallerUIContextNotAllowed@CallerVisibilityAndContext@LauncherDesktopProvider@@QEAAXXZ
    void CallerUIContextNotAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CallerVisibilityAndContext@LauncherDesktopProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CallerVisibilityAndContext@LauncherDesktopProvider@@QEAA@XZ
    ~CallerVisibilityAndContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CallerVisibilityAndContext@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CallerVisibilityAndContext@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
