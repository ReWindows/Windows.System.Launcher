#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace StateRepository::Cache::Entity {
class PackageExtensionIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@PackageExtension_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::PackageExtension_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByPackageAndCategory@PackageExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@_JPEBG@Z
    long OpenByPackageAndCategory(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~PackageExtensionIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
