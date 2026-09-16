#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 12 member(s).
class CProtocolForResultsOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockAndGetResults@CProtocolForResultsOperation@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long BlockAndGetResults(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolForResultsOperation@@QEAA@XZ
    CProtocolForResultsOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationCompletedEventHandle@CProtocolForResultsOperation@@UEAAJPEAPEAUIEventHandle@Internal@Handles@Foundation@Windows@@@Z
    virtual long GetOperationCompletedEventHandle(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationResultBuffer@CProtocolForResultsOperation@@UEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long GetOperationResultBuffer(::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetApplicationCreated@CProtocolForResultsOperation@@QEAAJK@Z
    long OnTargetApplicationCreated(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CProtocolForResultsOperation@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long ReportCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompletedPriv@CProtocolForResultsOperation@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long ReportCompletedPriv(::Windows::Storage::Streams::IBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDismissInfo@CProtocolForResultsOperation@@UEAAJPEAUIInspectable@@UEventRegistrationToken@@@Z
    virtual long SetDismissInfo(IInspectable *, EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProtocolForResultsOperation@@UEAA@XZ
    virtual ~CProtocolForResultsOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CProtocolForResultsOperation@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
};
