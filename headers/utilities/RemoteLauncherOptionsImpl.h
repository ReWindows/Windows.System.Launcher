#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 22 member(s).
class RemoteLauncherOptionsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemoteLauncherOptionsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemoteLauncherOptionsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemoteLauncherOptionsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemoteLauncherOptionsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@RemoteLauncherOptionsImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@RemoteLauncherOptionsImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemoteLauncherOptionsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemoteLauncherOptionsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteLauncherOptionsImpl@@QEAA@XZ
    RemoteLauncherOptionsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RemoteLauncherOptionsImpl@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FallbackUri@RemoteLauncherOptionsImpl@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_FallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredAppIds@RemoteLauncherOptionsImpl@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_PreferredAppIds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FallbackUri@RemoteLauncherOptionsImpl@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_FallbackUri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteLauncherOptionsImpl@@UEAA@XZ
    virtual ~RemoteLauncherOptionsImpl();
};
