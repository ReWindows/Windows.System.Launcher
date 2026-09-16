#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace StateRepository::Cache::Entity {
class FileTypeAssociation_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndProgID@FileTypeAssociation_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndProgID(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByFileType@FileTypeAssociation_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVFileTypeAssociationIndexIterator_NoThrow@234@@Z
    static long FindByFileType(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::FileTypeAssociationIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@FileTypeAssociation_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEAVFileTypeAssociationIndexIterator_NoThrow@234@@Z
    static long FindByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, ::StateRepository::Cache::Entity::FileTypeAssociationIndexIterator_NoThrow &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndFileType@FileTypeAssociation_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGW4CacheFlags@1234@P6AJPEAX1AEAV1234@@Z4@Z
    static long FindByUserOrDefaultAccountAndFileType(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int, long ( *)(void *, int64_t, ::StateRepository::Cache::Entity::FileTypeAssociation_NoThrow &), void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociation_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~FileTypeAssociation_NoThrow();
};
} // namespace StateRepository::Cache::Entity
