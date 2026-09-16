#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class ApplicationUser_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@ApplicationUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_J1AEA_N@Z
    static long ExistsByUserAndApplication(::StateRepository::Cache::Manager_NoThrow &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::ApplicationUser_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@ApplicationUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGAEA_J@Z
    static long GetByUserAndApplicationUserModelId(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@ApplicationUser_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserAndApplicationUserModelId(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int, ::StateRepository::Cache::Entity::ApplicationUser_NoThrow &, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@ApplicationUser_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
