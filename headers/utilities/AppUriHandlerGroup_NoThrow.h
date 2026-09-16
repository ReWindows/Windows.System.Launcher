#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class AppUriHandlerGroup_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppUriHandlerGroup_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::AppUriHandlerGroup_NoThrow &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerGroup_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~AppUriHandlerGroup_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@AppUriHandlerGroup_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
