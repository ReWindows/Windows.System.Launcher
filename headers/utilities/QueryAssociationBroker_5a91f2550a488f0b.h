#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 33 member(s).
class QueryAssociationBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@QueryAssociationBroker@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryAssociationBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriAssociations@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindAppUriAssociations(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriRegistrations@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@UAppUriHandlerRegistrationInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindAppUriRegistrations(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFileAssociations@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindFileAssociations(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProgIdAssociation@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAPEAUIExtensionInfo@Launch@Internal@System@Windows@@@Z
    virtual long FindProgIdAssociation(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriAssociations@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long FindUriAssociations(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationInfoForAumIdAndContract@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@00EPEAPEAU2@1@Z
    virtual long GetActivationInfoForAumIdAndContract(HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUriHandlerHosts@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAUIUser@System@Windows@@W4AppUriHandlerHostTypeOptions@Launch@Internal@45@PEAPEAU?$IVector@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@5@@Z
    virtual long GetAppUriHandlerHosts(HSTRING__*, HSTRING__*, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@QueryAssociationBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatchingAppServiceExtensions@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@00EPEAPEAU?$IVectorView@UAppServiceExtensionInfo@Launch@Internal@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetMatchingAppServiceExtensions(HSTRING__*, HSTRING__*, HSTRING__*, unsigned char, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@QueryAssociationBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@QueryAssociationBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserChoiceForUrl@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAPEAU2@@Z
    virtual long GetUserChoiceForUrl(HSTRING__*, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@QueryAssociationBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@QueryAssociationBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageValidatedAppUriHandler@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsPackageValidatedAppUriHandler(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProgIdValidatedAppUriHandler@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long IsProgIdValidatedAppUriHandler(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QueryAssociationBroker@@QEAA@XZ
    QueryAssociationBroker();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryAssociationBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryAssociationBroker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppUriHandlerHosts@QueryAssociationBroker@@UEAAJPEAUHSTRING__@@PEAU?$IIterable@PEAVAppUriHandlerHost@System@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long UpdateAppUriHandlerHosts(HSTRING__*, WindissectOpaque *);
};
