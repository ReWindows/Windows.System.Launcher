#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class AppUriHandlerIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@AppUriHandler_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::AppUriHandler_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@AppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@@Z
    long Open(::StateRepository::Cache::Manager_NoThrow &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~AppUriHandlerIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
