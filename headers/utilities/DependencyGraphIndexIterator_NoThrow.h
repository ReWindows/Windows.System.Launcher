#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class DependencyGraphIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DependencyGraphIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@DependencyGraph_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::DependencyGraph_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByUserAndDependentPackageAndDependencyType@DependencyGraphIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J1W4DependencyGraphType@34@@Z
    long OpenByUserAndDependentPackageAndDependencyType(::StateRepository::Cache::Manager_NoThrow &, int64_t, int64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyGraphIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~DependencyGraphIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
