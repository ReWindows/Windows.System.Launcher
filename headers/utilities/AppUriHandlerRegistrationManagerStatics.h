#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 30 member(s).
namespace Windows::System {
class AppUriHandlerRegistrationManagerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerRegistrationManagerStatics@System@Windows@@QEAA@XZ
    AppUriHandlerRegistrationManagerStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAPEAUIAppUriHandlerRegistrationManager@23@@Z
    virtual long GetDefault(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForPackage@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppUriHandlerRegistrationManager@23@@Z
    virtual long GetForPackage(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForPackageForUser@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAUHSTRING__@@PEAUIUser@23@PEAPEAUIAppUriHandlerRegistrationManager@23@@Z
    virtual long GetForPackageForUser(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAUIUser@23@PEAPEAUIAppUriHandlerRegistrationManager@23@@Z
    virtual long GetForUser(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AppUriHandlerRegistrationManagerStatics@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AppUriHandlerRegistrationManagerStatics@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerRegistrationManagerStatics@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::System
