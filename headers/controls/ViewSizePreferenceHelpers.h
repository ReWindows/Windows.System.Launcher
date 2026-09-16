#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 8 member(s).
class ViewSizePreferenceHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z
    long GetSourceViewSizePreferenceFromPropertySet(WindissectOpaque *, int *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z
    int GetTargetViewSizePreferenceOrDefault(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long GetViewValueSetFromSite(IUnknown *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z
    int GetWindowingPolicy(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    bool IsPropertySetEmpty(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z
    long SetSourceViewSizePreference(::Windows::Internal::ShellHelpers::PropertySetHelper &, HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long SetViewValueSet(IUnknown *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z
    bool TryGetSourceViewSizePreference(IUnknown *, int &, HWND__* &);
};
