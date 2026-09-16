#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 8 member(s).
namespace LauncherDesktopProvider {
class LaunchFiles {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@LaunchFiles@LauncherDesktopProvider@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@LaunchFiles@LauncherDesktopProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFiles@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchFiles();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFiles@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFiles@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
