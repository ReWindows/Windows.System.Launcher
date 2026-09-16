#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace StateRepository::Cache::Entity {
class DynamicAppUriHandlerIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DynamicAppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DynamicAppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@DynamicAppUriHandler_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::DynamicAppUriHandler_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@DynamicAppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@@Z
    long Open(::StateRepository::Cache::Manager_NoThrow &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandlerIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
