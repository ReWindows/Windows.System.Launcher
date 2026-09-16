#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
class CAssociationWarning {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShow@CAssociationWarning@@QEAAJPEAUIDisableWindow@@PEBG@Z
    long CreateAndShow(IDisableWindow *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAssociationWarning@@QEAA@XZ
    ~CAssociationWarning();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialogButtons@CAssociationWarning@@AEAAJXZ
    long _SetDialogButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDialogContent@CAssociationWarning@@AEAAXPEBG@Z
    void _SetDialogContent(unsigned short const *);
};
