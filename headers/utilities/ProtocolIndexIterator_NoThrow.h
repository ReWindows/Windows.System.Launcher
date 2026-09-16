#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class ProtocolIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ProtocolIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@Protocol_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::Protocol_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByProgID@ProtocolIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~ProtocolIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
