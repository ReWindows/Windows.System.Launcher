#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 19 member(s).
namespace Windows::System::Internal::Launch {
class StoreLauncherFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAJ_K0PEAPEAUIStoreLauncher@2345@@Z
    virtual long Create(uint64_t, uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StoreLauncherFactory@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StoreLauncherFactory@Launch@Internal@System@Windows@@QEAA@XZ
    StoreLauncherFactory();
};
} // namespace Windows::System::Internal::Launch
