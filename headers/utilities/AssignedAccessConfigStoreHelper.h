#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
namespace Windows::Internal::AssignedAccess {
class AssignedAccessConfigStoreHelper {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ
    unsigned long GetStoreVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ
    bool Initialize();
};
} // namespace Windows::Internal::AssignedAccess
