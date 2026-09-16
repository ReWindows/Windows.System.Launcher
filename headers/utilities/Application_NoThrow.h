#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace StateRepository::Cache::Entity {
class Application_NoThrow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Application_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    Application_NoThrow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@Application_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEAVApplicationIndexIterator_NoThrow@234@@Z
    static long FindByPackage(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Entity::ApplicationIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Application_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::Application_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@Application_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserAndApplicationUserModelId(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int, ::StateRepository::Cache::Entity::Application_NoThrow &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~Application_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@Application_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::Application_NoThrow &, int, int64_t);
};
} // namespace StateRepository::Cache::Entity
