#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
class EdpHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEdpContextFromShellItemsDefaultVerbHandler@EdpHelpers@@YAJPEAUIShellItem@@PEAPEAUEDP_CONTEXT@@@Z
    long GetEdpContextFromShellItemsDefaultVerbHandler(IShellItem *, EDP_CONTEXT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseOpenWithForEdpItem@EdpHelpers@@YA_NPEAUIShellItem@@PEAW4IMMERSIVE_OPENWITH_FLAGS@@@Z
    bool ShouldUseOpenWithForEdpItem(IShellItem *, int *);
};
