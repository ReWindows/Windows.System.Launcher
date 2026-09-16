#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 84 member(s).
namespace Windows::System::Internal::Launch {
class ProtocolActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@QEAA@XZ
    ProtocolActivatedEventArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@QEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUIBuffer@Streams@Storage@5@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~ProtocolActivatedEventArgs();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemoteIdentity@ProtocolActivatedEventArgs@Launch@Internal@System@Windows@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetRemoteIdentity(_GUID const &, void * *);
};
} // namespace Windows::System::Internal::Launch
