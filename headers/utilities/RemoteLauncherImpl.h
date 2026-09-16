#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 25 member(s).
class RemoteLauncherImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@RemoteLauncherImpl@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RemoteLauncherImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RemoteLauncherImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RemoteLauncherImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RemoteLauncherImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@RemoteLauncherImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@RemoteLauncherImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@RemoteLauncherImpl@@UEAAJPEAUIRemoteSystemConnectionRequest@RemoteSystems@System@Windows@@PEAUIUriRuntimeClass@Foundation@5@PEAPEAU?$IAsyncOperation@W4RemoteLaunchUriStatus@System@Windows@@@75@@Z
    virtual long LaunchUriAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataAsync@RemoteLauncherImpl@@UEAAJPEAUIRemoteSystemConnectionRequest@RemoteSystems@System@Windows@@PEAUIUriRuntimeClass@Foundation@5@PEAUIRemoteLauncherOptions@45@PEAUIPropertySet@Collections@75@PEAPEAU?$IAsyncOperation@W4RemoteLaunchUriStatus@System@Windows@@@75@@Z
    virtual long LaunchUriWithDataAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithOptionsAsync@RemoteLauncherImpl@@UEAAJPEAUIRemoteSystemConnectionRequest@RemoteSystems@System@Windows@@PEAUIUriRuntimeClass@Foundation@5@PEAUIRemoteLauncherOptions@45@PEAPEAU?$IAsyncOperation@W4RemoteLaunchUriStatus@System@Windows@@@75@@Z
    virtual long LaunchUriWithOptionsAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RemoteLauncherImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RemoteLauncherImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteLauncherImpl@@QEAA@XZ
    RemoteLauncherImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchUriInternalAsync@RemoteLauncherImpl@@AEAAJPEAUIRemoteSystemConnectionRequest@RemoteSystems@System@Windows@@PEAUIUriRuntimeClass@Foundation@5@PEAUIRemoteLauncherOptions@45@PEAUIPropertySet@Collections@75@PEAPEAU?$IAsyncOperation@W4RemoteLaunchUriStatus@System@Windows@@@75@@Z
    long _LaunchUriInternalAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
};
