#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 29 member(s).
namespace Windows::System {
class AppUriHandlerHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerHost@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerHost@System@Windows@@QEAA@PEAUHSTRING__@@E@Z
    AppUriHandlerHost(HSTRING__*, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerHost@System@Windows@@QEAA@XZ
    AppUriHandlerHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerHost@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerHost@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerHost@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppUriHandlerHost@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppUriHandlerHost@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerHost@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerHost@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@AppUriHandlerHost@System@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@AppUriHandlerHost@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsEnabled@AppUriHandlerHost@System@Windows@@UEAAJE@Z
    virtual long put_IsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@AppUriHandlerHost@System@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerHost@System@Windows@@UEAA@XZ
    virtual ~AppUriHandlerHost();
};
} // namespace Windows::System
