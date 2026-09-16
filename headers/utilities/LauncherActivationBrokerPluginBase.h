#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
class LauncherActivationBrokerPluginBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContractId@LauncherActivationBrokerPluginBase@@UEAAPEBGXZ
    virtual unsigned short const * ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEventArgs@LauncherActivationBrokerPluginBase@@UEAAJPEAUIInspectable@@PEAPEAU2@@Z
    virtual long CreateEventArgs(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEventArgs@LauncherActivationBrokerPluginBase@@UEAAJPEBGPEAPEBGKPEAPEAUIInspectable@@@Z
    virtual long CreateEventArgs(unsigned short const *, unsigned short const * *, unsigned long, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherActivationBrokerPluginBase@@QEAA@XZ
    LauncherActivationBrokerPluginBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationFlags@LauncherActivationBrokerPluginBase@@UEAAKXZ
    virtual unsigned long NavigationFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@LauncherActivationBrokerPluginBase@@UEAA?AU_GUID@@XZ
    virtual _GUID Type();
};
