#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 1 member(s).
namespace StateRepository::Cache::Entity {
class PackageUser_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackageUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_J1AEA_N@Z
    static long ExistsByUserAndPackage(::StateRepository::Cache::Manager_NoThrow &, int64_t, int64_t, bool &);
};
} // namespace StateRepository::Cache::Entity
