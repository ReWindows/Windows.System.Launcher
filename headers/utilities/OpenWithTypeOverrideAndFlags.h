#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
class OpenWithTypeOverrideAndFlags {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenWithTypeOverride@OpenWithTypeOverrideAndFlags@@UEAAJPEAPEAG@Z
    virtual long GetOpenWithTypeOverride(unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OpenWithTypeOverrideAndFlags@@QEAA@XZ
    OpenWithTypeOverrideAndFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@OpenWithTypeOverrideAndFlags@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@OpenWithTypeOverrideAndFlags@@UEAAJPEAW4IMMERSIVE_OPENWITH_FLAGS@@@Z
    virtual long get_Flags(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OpenWithTypeOverrideAndFlags@@UEAA@XZ
    virtual ~OpenWithTypeOverrideAndFlags();
};
