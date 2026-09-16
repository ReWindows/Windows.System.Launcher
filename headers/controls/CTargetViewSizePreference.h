#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
class CTargetViewSizePreference {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTargetViewSizePreference@@QEAA@XZ
    CTargetViewSizePreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewSizePreference@CTargetViewSizePreference@@UEAAJPEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z
    virtual long GetTargetViewSizePreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CTargetViewSizePreference@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
};
