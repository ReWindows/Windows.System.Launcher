#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
namespace winrt::Windows::System::Internal::Launch {
class StoreLauncher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@StoreLauncher@Launch@Internal@System@Windows@winrt@@SA@_K0@Z
    static Create(uint64_t, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreLauncher@Launch@Internal@System@Windows@winrt@@QEAA@XZ
    ~StoreLauncher();
};
} // namespace winrt::Windows::System::Internal::Launch
