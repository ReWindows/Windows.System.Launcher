#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class FolderLaunchItemsToSelect {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FolderLaunchItemsToSelect@@QEAA@PEAUIShellItem@@IPEBQEFBU_ITEMID_CHILD@@@Z
    FolderLaunchItemsToSelect(IShellItem *, unsigned int, _ITEMID_CHILD & volatile * const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@FolderLaunchItemsToSelect@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@FolderLaunchItemsToSelect@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@FolderLaunchItemsToSelect@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsToSelect@FolderLaunchItemsToSelect@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long get_ItemsToSelect(IShellItemArray * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FolderLaunchItemsToSelect@@UEAA@XZ
    virtual ~FolderLaunchItemsToSelect();
};
