#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 18 member(s).
class CPendingLaunchRequest {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPendingLaunchRequest@@QEAA@XZ
    CPendingLaunchRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CPendingLaunchRequest@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long Execute(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchTarget@CPendingLaunchRequest@@UEAAJPEAUIInspectable@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long LaunchTarget(IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CPendingLaunchRequest@@QEAAJPEAUHSTRING__@@00PEBULAUNCH_PARAMETERS@@PEAUIUnknown@@AEBVCallerInformation@@_NW4PendingLaunchType@Private@System@Windows@@PEAV?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@Internal@Collections@Foundation@9@PEAUIStorageFileQueryResult@Search@Storage@9@0@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, HSTRING__*, LAUNCH_PARAMETERS const *, IUnknown *, CallerInformation const &, bool, int, WindissectOpaque *, ::Windows::Storage::Search::IStorageFileQueryResult *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileExtension@CPendingLaunchRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FileExtension(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileUri@CPendingLaunchRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FileUri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchProviders@CPendingLaunchRequest@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_LaunchProviders(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchType@CPendingLaunchRequest@@UEAAJPEAW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long get_LaunchType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewWindowId@CPendingLaunchRequest@@UEAAJPEAH@Z
    virtual long get_RequestingViewWindowId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scheme@CPendingLaunchRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Scheme(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StorageItem@CPendingLaunchRequest@@UEAAJPEAPEAUIStorageItem@Storage@Windows@@@Z
    virtual long get_StorageItem(::Windows::Storage::IStorageItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetApplicationUserModelId@CPendingLaunchRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@CPendingLaunchRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchType@CPendingLaunchRequest@@UEAAJW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long put_LaunchType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetApplicationUserModelId@CPendingLaunchRequest@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetApplicationUserModelId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPendingLaunchRequest@@UEAA@XZ
    virtual ~CPendingLaunchRequest();
};
