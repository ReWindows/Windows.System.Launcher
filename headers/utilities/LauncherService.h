#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 29 member(s).
class LauncherService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@LauncherService@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LauncherService@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LauncherService@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LauncherService@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LauncherService@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@LauncherService@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@LauncherService@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFiles@LauncherService@@UEAAJ_KPEAUIInspectable@@1_KPEAUHSTRING__@@@Z
    virtual long LaunchFiles(uint64_t, IInspectable *, IInspectable *, uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFilesForTargetPFN@LauncherService@@UEAAJ_KPEAUIInspectable@@1PEAUHSTRING__@@_K2@Z
    virtual long LaunchFilesForTargetPFN(uint64_t, IInspectable *, IInspectable *, HSTRING__*, uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolder@LauncherService@@UEAAJ_KPEAUIInspectable@@1@Z
    virtual long LaunchFolder(uint64_t, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPath@LauncherService@@UEAAJ_KPEAUHSTRING__@@@Z
    virtual long LaunchFolderPath(uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUri@LauncherService@@UEAAJ_KPEAUHSTRING__@@_KW4InternalLauncherOptions@Launch@Internal@System@Windows@@1@Z
    virtual long LaunchUri(uint64_t, HSTRING__*, uint64_t, int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForTargetPackageWithOptionalData@LauncherService@@UEAAJ_KPEAUHSTRING__@@1W4LaunchType@Launch@Internal@System@Windows@@PEAUIInspectable@@_K1@Z
    virtual long LaunchUriForTargetPackageWithOptionalData(uint64_t, HSTRING__*, HSTRING__*, int, IInspectable *, uint64_t, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForTargetPackageWithOptionalDataForResults@LauncherService@@UEAAJ_KPEAUHSTRING__@@1W4LaunchType@Launch@Internal@System@Windows@@PEAUILauncherUIOptions@67@PEAUIInspectable@@4_KW4InternalLauncherOptions@4567@1PEAPEAU9@@Z
    virtual long LaunchUriForTargetPackageWithOptionalDataForResults(uint64_t, HSTRING__*, HSTRING__*, int, WindissectOpaque *, IInspectable *, IInspectable *, uint64_t, int, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithParameters@LauncherService@@SAJAEBVCallerInformation@@PEAUHSTRING__@@11W4InternalLauncherOptions@Launch@Internal@System@Windows@@PEAUILauncherUIOptions@78@PEBULAUNCH_PARAMETERS@@PEAUILauncherTarget@@H1@Z
    static long LaunchUriWithParameters(CallerInformation const &, HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque *, LAUNCH_PARAMETERS const *, ILauncherTarget *, int, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherService@@QEAA@XZ
    LauncherService();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LauncherService@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LauncherService@@UEAAKXZ
    virtual unsigned long Release();
};
