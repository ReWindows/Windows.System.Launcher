#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 92 member(s).
namespace Windows::System::Internal::Launch {
class ProtocolForResultsActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@QEAA@XZ
    ProtocolForResultsActivatedEventArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@QEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUIBuffer@Streams@Storage@5@PEAUHSTRING__@@PEAUIProtocolForResultsOperation@45@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProtocolForResultsOperation@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUIProtocolForResultsOperation@45@@Z
    virtual long get_ProtocolForResultsOperation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@5@@Z
    virtual long get_Uri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetActivationKind@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@5@@Z
    virtual long v_GetActivationKind(HSTRING__*, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~ProtocolForResultsActivatedEventArgs();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemoteIdentity@ProtocolForResultsActivatedEventArgs@Launch@Internal@System@Windows@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetRemoteIdentity(_GUID const &, void * *);
};
} // namespace Windows::System::Internal::Launch
