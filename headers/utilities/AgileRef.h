#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace Microsoft::WRL {
class AgileRef {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AgileRef@WRL@Microsoft@@QEAA@XZ
    AgileRef();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AgileRef@WRL@Microsoft@@QEAA@XZ
    ~AgileRef();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z
    long InternalResolve(_GUID const &, void * *) const;
};
} // namespace Microsoft::WRL
