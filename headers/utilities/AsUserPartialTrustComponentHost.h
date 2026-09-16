#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
class AsUserPartialTrustComponentHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsUserPartialTrustComponentHost@@QEAA@XZ
    AsUserPartialTrustComponentHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AsUserPartialTrustComponentHost@@QEAAJPEBG_N_K@Z
    long RuntimeClassInitialize(unsigned short const *, bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostedInstance@AsUserPartialTrustComponentHost@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_HostedInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserContextToken@AsUserPartialTrustComponentHost@@UEAAJPEA_K@Z
    virtual long get_UserContextToken(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsUserPartialTrustComponentHost@@UEAA@XZ
    virtual ~AsUserPartialTrustComponentHost();
};
