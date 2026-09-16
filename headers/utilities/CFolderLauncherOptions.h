#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 45 member(s).
class CFolderLauncherOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFolderLauncherOptions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFolderLauncherOptions@@QEAA@XZ
    CFolderLauncherOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFolderLauncherOptions@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFolderLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFolderLauncherOptions@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFolderLauncherOptions@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CFolderLauncherOptions@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CFolderLauncherOptions@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFolderLauncherOptions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFolderLauncherOptions@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemsToSelect@CFolderLauncherOptions@@UEAAJPEAPEAU?$IVector@PEAUIStorageItem@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ItemsToSelect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OwnerWindowId@CFolderLauncherOptions@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_OwnerWindowId(::Windows::Internal::ApplicationModel::WindowManagement::WindowId *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFolderLauncherOptions@@UEAA@XZ
    virtual ~CFolderLauncherOptions();
};
