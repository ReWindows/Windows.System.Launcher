#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class DynamicAppUriHandlerGroupIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DynamicAppUriHandlerGroupIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@DynamicAppUriHandlerGroup_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::DynamicAppUriHandlerGroup_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@DynamicAppUriHandlerGroupIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@@Z
    long Open(::StateRepository::Cache::Manager_NoThrow &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerGroupIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandlerGroupIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
