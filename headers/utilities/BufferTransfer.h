#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace LauncherServiceProvider {
class BufferTransfer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BufferTransfer@LauncherServiceProvider@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferTransfer@LauncherServiceProvider@@QEAA@XZ
    ~BufferTransfer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BufferTransfer@LauncherServiceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BufferTransfer@LauncherServiceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace LauncherServiceProvider
