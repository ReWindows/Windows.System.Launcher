#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
class CDesktopAppXFileTypeExecuteCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopAppXFileTypeExecuteCommand@@QEAA@XZ
    CDesktopAppXFileTypeExecuteCommand();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopAppXFileTypeExecuteCommand@@UEAA@XZ
    virtual ~CDesktopAppXFileTypeExecuteCommand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CDesktopAppXFileTypeExecuteCommand@@MEAAXPEAUIDesktopAppXActivator@@@Z
    virtual void ActivateApplication(IDesktopAppXActivator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTypeSpecificStrings@CDesktopAppXFileTypeExecuteCommand@@MEAAXPEAUIPropertyBag@@@Z
    virtual void InitializeTypeSpecificStrings(IPropertyBag *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CDesktopAppXFileTypeExecuteCommand@@MEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
};
