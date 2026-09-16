#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace StateRepository::Cache::Entity {
class DynamicAppUriHandlerIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@DynamicAppUriHandler_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::DynamicAppUriHandler_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByDynamicAppUriHandlerGroup@DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByDynamicAppUriHandlerGroup(::StateRepository::Cache::Manager_NoThrow &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByHostName@DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByHostName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByProgID@DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByWildcardedHostName@DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByWildcardedHostName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandlerIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
