#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace StateRepository::Cache {
class Key_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long Append(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJ_K@Z
    long Append(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJG@Z
    long Append(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
};
} // namespace StateRepository::Cache
