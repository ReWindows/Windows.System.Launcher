#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class OpenWithOptionsServiceProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumId@OpenWithOptionsServiceProvider@@UEAAJPEAPEAG@Z
    virtual long GetAumId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPid@OpenWithOptionsServiceProvider@@UEAAJPEAK@Z
    virtual long GetPid(unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OpenWithOptionsServiceProvider@@QEAA@XZ
    OpenWithOptionsServiceProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@OpenWithOptionsServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@OpenWithOptionsServiceProvider@@QEAAJW4IMMERSIVE_OPENWITH_FLAGS@@PEAUIUnknown@@PEBGK@Z
    long RuntimeClassInitialize(int, IUnknown *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@OpenWithOptionsServiceProvider@@UEAAJPEAW4IMMERSIVE_OPENWITH_FLAGS@@@Z
    virtual long get_Flags(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OpenWithOptionsServiceProvider@@UEAA@XZ
    virtual ~OpenWithOptionsServiceProvider();
};
