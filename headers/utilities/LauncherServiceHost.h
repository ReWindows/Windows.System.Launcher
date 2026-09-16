#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class LauncherServiceHost {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBroker@LauncherServiceHost@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetBroker(_GUID const &, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherServiceHost@@QEAA@XZ
    LauncherServiceHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LauncherServiceHost@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherServiceHost@@UEAA@XZ
    virtual ~LauncherServiceHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@LauncherServiceHost@@MEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long SubscribeToServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@LauncherServiceHost@@MEAAJPEAUIServiceProvider@@PEAUIServiceHostBrokerRegistrar@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *, IServiceHostBrokerRegistrar *);
};
