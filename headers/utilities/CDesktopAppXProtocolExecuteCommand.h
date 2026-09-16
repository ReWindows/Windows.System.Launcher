#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
class CDesktopAppXProtocolExecuteCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopAppXProtocolExecuteCommand@@QEAA@XZ
    CDesktopAppXProtocolExecuteCommand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CDesktopAppXProtocolExecuteCommand@@MEAAXPEAUIDesktopAppXActivator@@@Z
    virtual void ActivateApplication(IDesktopAppXActivator *);
};
