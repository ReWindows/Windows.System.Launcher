#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 24 member(s).
namespace Windows::System {
class AppUriHandlerRegistrationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerRegistrationManager@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerRegistrationManager@System@Windows@@QEAA@PEAUIUser@12@PEAUHSTRING__@@@Z
    AppUriHandlerRegistrationManager(WindissectOpaque *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppUriHandlerRegistrationManager@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppUriHandlerRegistrationManager@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerRegistrationManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerRegistrationManager@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRegistration@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppUriHandlerRegistration@23@@Z
    virtual long TryGetRegistration(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@AppUriHandlerRegistrationManager@System@Windows@@UEAAJPEAPEAUIUser@23@@Z
    virtual long get_User(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerRegistrationManager@System@Windows@@UEAA@XZ
    virtual ~AppUriHandlerRegistrationManager();
};
} // namespace Windows::System
