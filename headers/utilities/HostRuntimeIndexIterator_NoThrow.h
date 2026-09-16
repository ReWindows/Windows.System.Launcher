#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class HostRuntimeIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@HostRuntimeIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@HostRuntime_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::HostRuntime_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByPackageExtension@HostRuntimeIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByPackageExtension(::StateRepository::Cache::Manager_NoThrow &, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostRuntimeIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~HostRuntimeIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
