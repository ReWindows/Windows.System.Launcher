#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class ApplicationIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@Application_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::Application_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByPackage@ApplicationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByPackage(::StateRepository::Cache::Manager_NoThrow &, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~ApplicationIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
