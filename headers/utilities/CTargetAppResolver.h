#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class CTargetAppResolver {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTargetAppResolver@@QEAA@XZ
    CTargetAppResolver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CTargetAppResolver@@UEAAJPEAUHSTRING__@@0PEAPEAUILauncherTarget@@@Z
    virtual long Resolve(HSTRING__*, HSTRING__*, ILauncherTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTargetAppResolver@@QEAAJPEBULAUNCH_PARAMETERS@@PEAUIUnknown@@PEAUIStorageFileQueryResult@Search@Storage@Windows@@PEAUHSTRING__@@3AEBVCallerInformation@@_N3@Z
    long RuntimeClassInitialize(LAUNCH_PARAMETERS const *, IUnknown *, ::Windows::Storage::Search::IStorageFileQueryResult *, HSTRING__*, HSTRING__*, CallerInformation const &, bool, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDisambiguationUI@CTargetAppResolver@@UEAAJPEAUHSTRING__@@@Z
    virtual long ShowDisambiguationUI(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTargetAppResolver@@UEAA@XZ
    virtual ~CTargetAppResolver();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendToLaunchProviders@CTargetAppResolver@@AEAAJPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    long AppendToLaunchProviders(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSystemShowDisambiguationUI@CTargetAppResolver@@AEAA_NXZ
    bool CanSystemShowDisambiguationUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionInfoFromStateRepository@CTargetAppResolver@@AEAAJ_NPEAUHSTRING__@@1PEAW4ResolutionStatus@1@PEAPEAUIExtensionInfo@Launch@Internal@System@Windows@@@Z
    long GetExtensionInfoFromStateRepository(bool, HSTRING__*, HSTRING__*, int *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionInfoFromStateRepositoryForAppUriHandler@CTargetAppResolver@@AEAAJPEAUHSTRING__@@0PEAW4ResolutionStatus@1@PEAPEAUIExtensionInfo@Launch@Internal@System@Windows@@@Z
    long GetExtensionInfoFromStateRepositoryForAppUriHandler(HSTRING__*, HSTRING__*, int *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherTargetFromStateRepository@CTargetAppResolver@@AEAAJPEAUHSTRING__@@0PEAW4ResolutionStatus@1@PEAPEAUILauncherTarget@@@Z
    long GetLauncherTargetFromStateRepository(HSTRING__*, HSTRING__*, int *, ILauncherTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedTarget@CTargetAppResolver@@AEAAJPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@_NPEAW4ResolutionStatus@1@PEAPEAUIExtensionInfo@Launch@Internal@System@5@@Z
    long GetResolvedTarget(WindissectOpaque *, bool, int *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemDefaultTarget@CTargetAppResolver@@AEAAJ_NPEAUHSTRING__@@PEAPEAU2@@Z
    long GetSystemDefaultTarget(bool, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPackageInstalled@CTargetAppResolver@@AEAAJPEAUHSTRING__@@@Z
    long VerifyPackageInstalled(HSTRING__*);
};
