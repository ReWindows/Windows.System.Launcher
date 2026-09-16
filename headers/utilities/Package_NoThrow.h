#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 10 member(s).
namespace StateRepository::Cache::Entity {
class Package_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEA_N@Z
    static long ExistsByPackageFamily(::StateRepository::Cache::Manager_NoThrow &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEAVPackageIndexIterator_NoThrow@234@@Z
    static long FindByPackageFamily(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Entity::PackageIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z
    static long GetByPackageFullName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByPackageFullName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEffectiveSupportedUsersMultiple@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_N@Z
    static long GetIsEffectiveSupportedUsersMultiple(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSupportedUsersMultiple@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_N2@Z
    static long GetIsSupportedUsersMultiple(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, bool &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    Package_NoThrow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~Package_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::Package_NoThrow &, int, int64_t);
};
} // namespace StateRepository::Cache::Entity
