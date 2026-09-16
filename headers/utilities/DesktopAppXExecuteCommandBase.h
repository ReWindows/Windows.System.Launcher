#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class DesktopAppXExecuteCommandBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopAppXExecuteCommandBase@@QEAA@XZ
    DesktopAppXExecuteCommandBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@DesktopAppXExecuteCommandBase@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@DesktopAppXExecuteCommandBase@@UEAAJPEAW4AHE_TYPE@@@Z
    virtual long GetValue(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPublisherValid@DesktopAppXExecuteCommandBase@@UEAAJPEBGPEAH@Z
    virtual long IsPublisherValid(unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopAppXExecuteCommandBase@@UEAA@XZ
    virtual ~DesktopAppXExecuteCommandBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserToken@DesktopAppXExecuteCommandBase@@IEAA_KXZ
    uint64_t GetUserToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeActivateParameterStrings@DesktopAppXExecuteCommandBase@@MEAAXPEAUIPropertyBag@@@Z
    virtual void InitializeActivateParameterStrings(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDesktopAppXActivateOptions@DesktopAppXExecuteCommandBase@@IEAAXPEAUIPropertyBag@@@Z
    void InitializeDesktopAppXActivateOptions(IPropertyBag *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTypeSpecificStrings@DesktopAppXExecuteCommandBase@@MEAAXPEAUIPropertyBag@@@Z
    virtual void InitializeTypeSpecificStrings(IPropertyBag *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPublisherIdValidFromAumid@DesktopAppXExecuteCommandBase@@IEAAHPEBG@Z
    int IsPublisherIdValidFromAumid(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDDEExecFirstTime@DesktopAppXExecuteCommandBase@@IEAA?AW4DDEContinuationState@Storage@Internal@Windows@@PEAUIShellItem@@PEBGPEAUIDDEExecHelper@345@@Z
    int TryDDEExecFirstTime(IShellItem *, unsigned short const *, ::Windows::Internal::Storage::IDDEExecHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDDEExecSecondTime@DesktopAppXExecuteCommandBase@@MEAA?AW4DDEContinuationState@Storage@Internal@Windows@@W42345@PEAUIDDEExecHelper@345@@Z
    virtual int TryDDEExecSecondTime(int, ::Windows::Internal::Storage::IDDEExecHelper *);
};
