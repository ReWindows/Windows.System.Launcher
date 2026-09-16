#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 8 member(s).
class CProtocolForResultsActivatedEventArgsProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolForResultsActivatedEventArgsProxy@@QEAA@XZ
    CProtocolForResultsActivatedEventArgsProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProtocolForResultsOperation@CProtocolForResultsActivatedEventArgsProxy@@UEAAJPEAPEAUIProtocolForResultsOperation@System@Windows@@@Z
    virtual long get_ProtocolForResultsOperation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CProtocolForResultsActivatedEventArgsProxy@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Uri(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CProtocolForResultsActivatedEventArgsProxy@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRemoteIdentity@CProtocolForResultsActivatedEventArgsProxy@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetRemoteIdentity(_GUID const &, void * *);
};
