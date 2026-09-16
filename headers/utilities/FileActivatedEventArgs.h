#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 96 member(s).
namespace Windows::System::Internal::Launch {
class FileActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileActivatedEventArgs@Launch@Internal@System@Windows@@QEAA@XZ
    FileActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FileActivatedEventArgs@Launch@Internal@System@Windows@@QEAAJPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@5@PEAUIStorageFileQueryResult@Search@Storage@5@PEBG2@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Storage::Search::IStorageFileQueryResult *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FileActivatedEventArgs@Launch@Internal@System@Windows@@QEAAJPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@5@PEAUIStorageFolder@Storage@5@PEBG2@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Storage::IStorageFolder *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FileActivatedEventArgs@Launch@Internal@System@Windows@@QEAAJPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@5@PEBG1@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Files@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Files(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Folder@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@5@@Z
    virtual long get_Folder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeighboringFilesQuery@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUIStorageFileQueryResult@Search@Storage@5@@Z
    virtual long get_NeighboringFilesQuery(::Windows::Storage::Search::IStorageFileQueryResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItems@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@5@@Z
    virtual long get_SelectedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileActivatedEventArgs@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~FileActivatedEventArgs();
};
} // namespace Windows::System::Internal::Launch
