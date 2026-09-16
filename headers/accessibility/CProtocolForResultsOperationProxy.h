#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class CProtocolForResultsOperationProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockAndGetResults@CProtocolForResultsOperationProxy@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long BlockAndGetResults(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolForResultsOperationProxy@@QEAA@XZ
    CProtocolForResultsOperationProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CProtocolForResultsOperationProxy@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long ReportCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompletedPriv@CProtocolForResultsOperationProxy@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long ReportCompletedPriv(::Windows::Storage::Streams::IBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissInfo@CProtocolForResultsOperationProxy@@UEAAJPEAUIInspectable@@UEventRegistrationToken@@@Z
    virtual long SetDismissInfo(IInspectable *, EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProtocolForResultsOperationProxy@@UEAA@XZ
    virtual ~CProtocolForResultsOperationProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CProtocolForResultsOperationProxy@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
};
