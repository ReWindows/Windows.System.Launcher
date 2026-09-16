#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 13 member(s).
class CServiceHostComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CServiceHostComponent@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CServiceHostComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CServiceHostComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterServiceInformation@CServiceHostComponent@@QEAAJPEBUISC_SERVICE@1@I@Z
    long RegisterServiceInformation(WindissectOpaque const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CServiceHostComponent@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CServiceHostComponent@@UEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long SubscribeToServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CServiceHostComponent@@UEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CServiceHostComponent@@UEAA@XZ
    virtual ~CServiceHostComponent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PublishServices@CServiceHostComponent@@MEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long v_PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_QueryService@CServiceHostComponent@@MEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long v_QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CServiceHostComponent@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
};
