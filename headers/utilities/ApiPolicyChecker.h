#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
namespace CallerIdentity {
class ApiPolicyChecker {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z
    bool DoesAppMeetLaunchRequirement(int, unsigned short const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z
    long IsAppBeingDebugged(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z
    long IsApplicationInteractive(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z
    long IsComponentUiHostWindowForeground(HWND__*);
};
} // namespace CallerIdentity
