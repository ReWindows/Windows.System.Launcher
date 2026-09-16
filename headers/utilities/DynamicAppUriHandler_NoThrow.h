#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
namespace StateRepository::Cache::Entity {
class DynamicAppUriHandler_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDynamicAppUriHandlerGroup@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JAEAVDynamicAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByDynamicAppUriHandlerGroup(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Entity::DynamicAppUriHandlerIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVDynamicAppUriHandlerIndexIterator_NoThrow@234@@Z
    static long FindByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::DynamicAppUriHandlerIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::DynamicAppUriHandler_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostNameMatch@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEBA_NPEBG@Z
    bool IsHostNameMatch(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatch@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEBA_NPEBG0@Z
    bool IsMatch(unsigned short const *, unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathMatch@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEBA_NPEBG@Z
    bool IsPathMatch(unsigned short const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandler_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::DynamicAppUriHandler_NoThrow &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@DynamicAppUriHandler_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity
