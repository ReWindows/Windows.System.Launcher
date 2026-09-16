#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 13 member(s).
class AssociationLaunchExecuteCommandBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AssociationLaunchExecuteCommandBase@@QEAA@XZ
    AssociationLaunchExecuteCommandBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@AssociationLaunchExecuteCommandBase@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapability@AssociationLaunchExecuteCommandBase@@UEAAJPEAW4EXECUTE_COMMAND_HANDLER_CAPABILITIES@@@Z
    virtual long GetCapability(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@AssociationLaunchExecuteCommandBase@@UEAAJPEAW4AHE_TYPE@@@Z
    virtual long GetValue(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPublisherValid@AssociationLaunchExecuteCommandBase@@UEAAJPEBGPEAH@Z
    virtual long IsPublisherValid(unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssociationLaunchExecuteCommandBase@@UEAA@XZ
    virtual ~AssociationLaunchExecuteCommandBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeActivateParameterStrings@AssociationLaunchExecuteCommandBase@@MEAAXPEAUIPropertyBag@@@Z
    virtual void InitializeActivateParameterStrings(IPropertyBag *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationForFile@AssociationLaunchExecuteCommandBase@@AEAAJAEBU?$com_ptr@UIApplicationActivationManagerPriv@@@winrt@@AEBVHString@Wrappers@WRL@Microsoft@@_K@Z
    long ActivateApplicationForFile(WindissectOpaque const &, ::Microsoft::WRL::Wrappers::HString const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedPropertySetForActivationFromShellItemArray@AssociationLaunchExecuteCommandBase@@EEAAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long GetSerializedPropertySetForActivationFromShellItemArray(HSTRING__*, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePropertySet@AssociationLaunchExecuteCommandBase@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIBuffer@Streams@Storage@5@@Z
    long SerializePropertySet(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer * *);
};
