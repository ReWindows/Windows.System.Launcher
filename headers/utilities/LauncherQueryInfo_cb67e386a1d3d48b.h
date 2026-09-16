#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 41 member(s).
namespace Windows::System::Internal::Launch {
class LauncherQueryInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@LauncherQueryInfo@Launch@Internal@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@LauncherQueryInfo@Launch@Internal@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherQueryInfo@Launch@Internal@System@Windows@@QEAA@XZ
    LauncherQueryInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LauncherQueryInfo@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociationExistsByProgId@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@PEAE@Z
    virtual long AssociationExistsByProgId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppServices@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long FindAppServices(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriAssociations@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@75@@Z
    virtual long FindAppUriAssociations(WindissectOpaque *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriHandlers@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@75@@Z
    virtual long FindAppUriHandlers(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriRegistrations@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUHSTRING__@@PEAPEAU?$IVectorView@UAppUriHandlerRegistrationInfo@Launch@Internal@System@Windows@@@Collections@75@@Z
    virtual long FindAppUriRegistrations(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAssociationProgIds@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJW4AssociationType@2345@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z
    virtual long FindAssociationProgIds(int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFileAssociations@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@5@@Z
    virtual long FindFileAssociations(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFileHandlers@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long FindFileHandlers(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProgIdAssociation@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@0PEAPEAUIExtensionInfo@2345@@Z
    virtual long FindProgIdAssociation(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriAssociations@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@75@@Z
    virtual long FindUriAssociations(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriSchemeHandlersWithLaunchUriType@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUHSTRING__@@W4LaunchQuerySupportType@45@PEAPEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long FindUriSchemeHandlersWithLaunchUriType(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupport@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@PEAUHSTRING__@@1PEAW4LaunchQuerySupportStatus@45@@Z
    virtual long QueryAppUriSupport(WindissectOpaque *, HSTRING__*, HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFileSupport@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAW4LaunchQuerySupportStatus@45@@Z
    virtual long QueryFileSupport(::Windows::Storage::IStorageFile *, HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUriSupport@LauncherQueryInfo@Launch@Internal@System@Windows@@EEAAJPEAUIUriRuntimeClass@Foundation@5@W4LaunchQuerySupportType@45@PEAUHSTRING__@@PEAW4LaunchQuerySupportStatus@45@@Z
    virtual long QueryUriSupport(WindissectOpaque *, int, HSTRING__*, int *);
};
} // namespace Windows::System::Internal::Launch
