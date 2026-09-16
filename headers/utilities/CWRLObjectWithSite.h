#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
class CWRLObjectWithSite {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@CWRLObjectWithSite@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
};
