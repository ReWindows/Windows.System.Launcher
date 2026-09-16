#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 1 member(s).
namespace Windows::Internal::Shell {
class Holographic {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z
    long GetWindowDisplayContext(HWND__*, int, int *);
};
} // namespace Windows::Internal::Shell
