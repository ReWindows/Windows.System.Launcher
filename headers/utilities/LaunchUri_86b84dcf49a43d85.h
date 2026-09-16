#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
namespace LauncherDesktopProvider {
class LaunchUri {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@LaunchUri@LauncherDesktopProvider@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@LaunchUri@LauncherDesktopProvider@@QEAAXPEBDPEBG@Z
    void StartActivityWithCorrelationVector(char const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUri@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchUri();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchUri@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchUri@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
