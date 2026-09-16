#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class Protocol_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndProgID@Protocol_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndProgID(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@Protocol_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVProtocolIndexIterator_NoThrow@234@@Z
    static long FindByName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::ProtocolIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@Protocol_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVProtocolIndexIterator_NoThrow@234@@Z
    static long FindByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::ProtocolIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndName@Protocol_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGW4CacheFlags@1234@P6AJPEAX1AEAV1234@@Z4@Z
    static long FindByUserOrDefaultAccountAndName(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int, long ( *)(void *, int64_t, ::StateRepository::Cache::Entity::Protocol_NoThrow &), void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Protocol_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~Protocol_NoThrow();
};
} // namespace StateRepository::Cache::Entity
