#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 8 member(s).
namespace LauncherDesktopProvider {
class LaunchFolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructFolderFailure@LaunchFolder@LauncherDesktopProvider@@QEAAXXZ
    void ConstructFolderFailure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FolderIsRestrictedNamespace@LaunchFolder@LauncherDesktopProvider@@QEAAXXZ
    void FolderIsRestrictedNamespace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@LaunchFolder@LauncherDesktopProvider@@QEAAXPEBD@Z
    void StartActivityWithCorrelationVector(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchFolder@LauncherDesktopProvider@@QEAA@XZ
    ~LaunchFolder();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchFolder@LauncherDesktopProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchFolder@LauncherDesktopProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherDesktopProvider
