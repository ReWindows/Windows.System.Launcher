#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
class CProtocolActivatedEventArgsProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolActivatedEventArgsProxy@@QEAA@XZ
    CProtocolActivatedEventArgsProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CProtocolActivatedEventArgsProxy@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CProtocolActivatedEventArgsProxy@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemoteIdentity@CProtocolActivatedEventArgsProxy@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetRemoteIdentity(_GUID const &, void * *);
};
