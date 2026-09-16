#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace StateRepository::Cache::Entity {
class AppUriHandlerLauncherInfo_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndProgID@AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndProgID(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndHostNameAndPath@AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBG2W4CacheFlags@1234@P6AJPEAX1AEAV1234@@Z4@Z
    static long FindByUserOrDefaultAccountAndHostNameAndPath(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, unsigned short const *, int, long ( *)(void *, int64_t, ::StateRepository::Cache::Entity::AppUriHandlerLauncherInfo_NoThrow &), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgID@AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@QEAAJPEBG@Z
    long SetProgID(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~AppUriHandlerLauncherInfo_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndHostNameAndPath_ProcessWinner@AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@CAJ_JW4CacheFlags@1234@P6AJPEAX0AEAV1234@@Z2AEBVPackage_NoThrow@234@AEBVApplication_NoThrow@234@AEBVApplicationExtension_NoThrow@234@AEBVAppUriHandler_NoThrow@234@@Z
    static long FindByUserOrDefaultAccountAndHostNameAndPath_ProcessWinner(int64_t, int, long ( *)(void *, int64_t, ::StateRepository::Cache::Entity::AppUriHandlerLauncherInfo_NoThrow &), void *, ::StateRepository::Cache::Entity::Package_NoThrow const &, ::StateRepository::Cache::Entity::Application_NoThrow const &, ::StateRepository::Cache::Entity::ApplicationExtension_NoThrow const &, ::StateRepository::Cache::Entity::AppUriHandler_NoThrow const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDynamicByUserOrDefaultAccountAndHostNameAndPath@AppUriHandlerLauncherInfo_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JPEBG2W4CacheFlags@1234@P6AJPEAX1AEAV1234@@Z4AEAVIdList_NoThrow@34@@Z
    static long FindDynamicByUserOrDefaultAccountAndHostNameAndPath(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, unsigned short const *, int, long ( *)(void *, int64_t, ::StateRepository::Cache::Entity::AppUriHandlerLauncherInfo_NoThrow &), void *, ::StateRepository::Cache::IdList_NoThrow &);
};
} // namespace StateRepository::Cache::Entity
