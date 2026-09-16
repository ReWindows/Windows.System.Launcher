#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class PendingLaunchRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@PendingLaunchRequest@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ
    WindissectOpaque Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@PendingLaunchRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSite(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchItems@PendingLaunchRequest@@QEAAXAEBUIUnknown@Foundation@Windows@winrt@@@Z
    void LaunchItems(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchProviders@PendingLaunchRequest@@QEAAXAEBU?$IVectorView@UExtensionInfo@Launch@Internal@System@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z
    void LaunchProviders(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PendingLaunchRequest@@QEAA@XZ
    PendingLaunchRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@PendingLaunchRequest@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scheme@PendingLaunchRequest@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Scheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SchemeOrExtension@PendingLaunchRequest@@QEAAXUhstring@winrt@@@Z
    void SchemeOrExtension(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@PendingLaunchRequest@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorageItem@PendingLaunchRequest@@QEAA?AUIStorageItem@Storage@Windows@winrt@@XZ
    WindissectOpaque StorageItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PendingLaunchRequest@@UEAA@XZ
    virtual ~PendingLaunchRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchExtensionAsync@PendingLaunchRequest@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@U?$agile_ref@UIExtensionInfo@Launch@Internal@System@Windows@winrt@@@5@@Z
    WindissectOpaque LaunchExtensionAsync(WindissectOpaque);
};
