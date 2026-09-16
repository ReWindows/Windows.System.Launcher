#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 37 member(s).
namespace Windows::System::Internal::Launch {
class ExtensionInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ExtensionInfo@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExtensionInfo@Launch@Internal@System@Windows@@QEAA@XZ
    ExtensionInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ExtensionInfo@Launch@Internal@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ExtensionInfo@Launch@Internal@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ExtensionInfo@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ExtensionInfo@Launch@Internal@System@Windows@@QEAAJPEAUIApplication@StateRepository@35@PEAUIApplicationExtension@735@PEAUHSTRING__@@AEBVExtensionProperties@2345@@Z
    long RuntimeClassInitialize(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppType@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAW4AppType@2345@@Z
    virtual long get_AppType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationDescription@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationDescription(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationDisplayName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIcon@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationIcon(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContractId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredView@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAI@Z
    virtual long get_DesiredView(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveSupportedUsers@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAW4SupportedUsers@StateRepository@35@@Z
    virtual long get_EffectiveSupportedUsers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExecutableIsNonPackaged@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAE@Z
    virtual long get_ExecutableIsNonPackaged(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Logo@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgId@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherDisplayName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUniversal@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUniversal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SerializedProperties@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z
    virtual long get_SerializedProperties(::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriSchemeOrFileExtensionOrHostName@ExtensionInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UriSchemeOrFileExtensionOrHostName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtensionInfo@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~ExtensionInfo();
};
} // namespace Windows::System::Internal::Launch
