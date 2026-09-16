#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace StateRepository::Cache::Entity {
class PackageIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEA_J@Z
    long Get(int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@Package_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByPackageFamily@PackageIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByPackageFamily(::StateRepository::Cache::Manager_NoThrow &, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~PackageIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
