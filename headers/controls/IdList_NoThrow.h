#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache {
class IdList_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnique@IdList_NoThrow@Cache@StateRepository@@QEAAJ_J@Z
    long AddUnique(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@IdList_NoThrow@Cache@StateRepository@@QEAA_N_J@Z
    bool Contains(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IdList_NoThrow@Cache@StateRepository@@QEAA@XZ
    ~IdList_NoThrow();
};
} // namespace StateRepository::Cache
