#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 98 member(s).
class CFileActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileActivatedEventArgs@@QEAA@XZ
    CFileActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CFileActivatedEventArgs@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileActivatedEventArgs@@QEAAJAEAV?$CMarshalInterfaceOnce@UIShellItemArray@@@@AEAV?$CMarshalInterfaceOnce@UIStorageFileQueryResult@Search@Storage@Windows@@@@PEBG22@Z
    long RuntimeClassInitialize(WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileActivatedEventArgs@@QEAAJAEAV?$CMarshalInterfaceOnce@UIShellItemArray@@@@AEAV?$CMarshalInterfaceOnce@UIStorageFolder@Storage@Windows@@@@AEAV?$CMarshalInterfaceOnce@UIStorageFileQueryResult@Search@Storage@Windows@@@@PEBG33@Z
    long RuntimeClassInitialize(WindissectOpaque &, WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileActivatedEventArgs@@QEAAJAEAV?$CMarshalInterfaceOnce@UIShellItemArray@@@@PEBG11@Z
    long RuntimeClassInitialize(WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileActivatedEventArgs@@QEAAJPEAUIShellItemArray@@PEBG1@Z
    long RuntimeClassInitialize(IShellItemArray *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@CFileActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Files@CFileActivatedEventArgs@@UEAAJPEAPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Files(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Folder@CFileActivatedEventArgs@@UEAAJPEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long get_Folder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeighboringFilesQuery@CFileActivatedEventArgs@@UEAAJPEAPEAUIStorageFileQueryResult@Search@Storage@Windows@@@Z
    virtual long get_NeighboringFilesQuery(::Windows::Storage::Search::IStorageFileQueryResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItems@CFileActivatedEventArgs@@UEAAJPEAPEAU?$IVectorView@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CFileActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileActivatedEventArgs@@EEAA@XZ
    virtual ~CFileActivatedEventArgs();
};
