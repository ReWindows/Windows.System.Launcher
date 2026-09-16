#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 8 member(s).
class UserAwareCallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@UserAwareCallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@UserAwareCallerIdentity@@YAJPEAK@Z
    long GetCallingProcessId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessUserContext@UserAwareCallerIdentity@@YAJPEA_K@Z
    long GetCallingProcessUserContext(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessHandle@UserAwareCallerIdentity@@YAJKKPEAPEAX@Z
    long GetProcessHandle(unsigned long, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessRestrictedAppContainer@UserAwareCallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessRestrictedAppContainer(void *, bool *);
};
