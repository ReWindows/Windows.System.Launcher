#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class ApplicationExtensionIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEA_J@Z
    long Get(int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@ApplicationExtension_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::ApplicationExtension_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByApplication@ApplicationExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_J@Z
    long OpenByApplication(::StateRepository::Cache::Manager_NoThrow &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByApplicationAndCategory@ApplicationExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_JPEBG@Z
    long OpenByApplicationAndCategory(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~ApplicationExtensionIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
