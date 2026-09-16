#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
class COpenWithTypeOverride {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpenWithTypeOverride@@QEAA@XZ
    COpenWithTypeOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenWithTypeOverride@COpenWithTypeOverride@@UEAAJPEAPEAG@Z
    virtual long GetOpenWithTypeOverride(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@COpenWithTypeOverride@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpenWithTypeOverride@@UEAA@XZ
    virtual ~COpenWithTypeOverride();
};
