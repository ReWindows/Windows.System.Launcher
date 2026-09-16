#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace DynamicProgIdHelpers::Details {
class DynamicProgIdManagerWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppEnabledForType@DynamicProgIdManagerWrapper@Details@DynamicProgIdHelpers@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsAppEnabledForType(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProgIdEnabled@DynamicProgIdManagerWrapper@Details@DynamicProgIdHelpers@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsProgIdEnabled(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDynamicProgIdQuerySource@DynamicProgIdManagerWrapper@Details@DynamicProgIdHelpers@@UEAAJPEAUHSTRING__@@0PEAPEAUIAssociationQuerySource@FileAssociations@Shell@Internal@Windows@@@Z
    virtual long TryGetDynamicProgIdQuerySource(HSTRING__*, HSTRING__*, ::Windows::Internal::Shell::FileAssociations::IAssociationQuerySource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicProgIdManagerWrapper@Details@DynamicProgIdHelpers@@UEAA@XZ
    virtual ~DynamicProgIdManagerWrapper();
};
} // namespace DynamicProgIdHelpers::Details
