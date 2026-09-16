#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 26 member(s).
namespace Windows::System {
class AppUriHandlerRegistration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerRegistration@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerRegistration@System@Windows@@QEAA@PEAUHSTRING__@@PEAUIUser@12@0@Z
    AppUriHandlerRegistration(HSTRING__*, WindissectOpaque *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllHosts@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAU?$IVector@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@3@@Z
    virtual long GetAllHosts(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppAddedHostsAsync@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@Windows@@@Foundation@3@@Z
    virtual long GetAppAddedHostsAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerRegistration@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerRegistration@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerRegistration@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerRegistration@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppAddedHostsAsync@AppUriHandlerRegistration@System@Windows@@UEAAJPEAU?$IIterable@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@3@PEAPEAUIAsyncAction@63@@Z
    virtual long SetAppAddedHostsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHosts@AppUriHandlerRegistration@System@Windows@@UEAAJPEAU?$IIterable@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@3@@Z
    virtual long UpdateHosts(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@AppUriHandlerRegistration@System@Windows@@UEAAJPEAPEAUIUser@23@@Z
    virtual long get_User(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerRegistration@System@Windows@@UEAA@XZ
    virtual ~AppUriHandlerRegistration();
};
} // namespace Windows::System
