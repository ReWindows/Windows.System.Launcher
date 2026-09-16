#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
namespace StateRepository::Cache::Entity {
class AppUriHandler_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEAVAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByExtension(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Entity::AppUriHandlerIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostName@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByHostName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::AppUriHandlerIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::AppUriHandlerIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByWildcardedHostName@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByWildcardedHostName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::AppUriHandlerIndexIterator_NoThrow &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatch@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEBA_NPEBG0@Z
    bool IsMatch(unsigned short const *, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathMatch@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEBA_NPEBG@Z
    bool IsPathMatch(unsigned short const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~AppUriHandler_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::AppUriHandler_NoThrow &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@AppUriHandler_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
