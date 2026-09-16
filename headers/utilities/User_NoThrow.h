#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace StateRepository::Cache::Entity {
class User_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::User_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByToken@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEAXAEA_J@Z
    static long GetByToken(::StateRepository::Cache::Manager_NoThrow &, void *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEAXAEA_J@Z
    static long GetByUserSid(::StateRepository::Cache::Manager_NoThrow &, void *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSidAsString@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z
    static long GetByUserSidAsString(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAccount@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@AEA_J@Z
    static long GetDefaultAccount(::StateRepository::Cache::Manager_NoThrow &, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAccount@User_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@W4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetDefaultAccount(::StateRepository::Cache::Manager_NoThrow &, int, ::StateRepository::Cache::Entity::User_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
