#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace StateRepository::Cache::Entity {
class FileTypeAssociationIndexIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@FileTypeAssociationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@FileTypeAssociation_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, ::StateRepository::Cache::Entity::FileTypeAssociation_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@FileTypeAssociationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@FileTypeAssociation_NoThrow@234@AEAV6234@AEA_N@Z
    long GetNext(int, ::StateRepository::Cache::Entity::FileTypeAssociation_NoThrow &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenByProgID@FileTypeAssociationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@PEBG@Z
    long OpenByProgID(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociationIndexIterator_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~FileTypeAssociationIndexIterator_NoThrow();
};
} // namespace StateRepository::Cache::Entity
