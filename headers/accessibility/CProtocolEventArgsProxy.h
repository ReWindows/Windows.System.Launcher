#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 20 member(s).
class CProtocolEventArgsProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProtocolEventArgsProxy@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z
    virtual long Initialize(uint64_t, HSTRING__*, int, unsigned char, unsigned char, uint64_t, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewDependent@CProtocolEventArgsProxy@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z
    virtual long InitializeViewDependent(int, int, ::Windows::ApplicationModel::Activation::ISplashScreen *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationManagerActivityId@CProtocolEventArgsProxy@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivationManagerActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationManagerId@CProtocolEventArgsProxy@@UEAAJPEA_K@Z
    virtual long get_ActivationManagerId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationValueSetReference@CProtocolEventArgsProxy@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ActivationValueSetReference(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationViewSwitcher@CProtocolEventArgsProxy@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long get_ActivationViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentlyShownApplicationViewId@CProtocolEventArgsProxy@@UEAAJPEAH@Z
    virtual long get_CurrentlyShownApplicationViewId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsForegroundActivation@CProtocolEventArgsProxy@@UEAAJPEAE@Z
    virtual long get_IsForegroundActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHolographic@CProtocolEventArgsProxy@@UEAAJPEAE@Z
    virtual long get_IsHolographic(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CProtocolEventArgsProxy@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousExecutionState@CProtocolEventArgsProxy@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z
    virtual long get_PreviousExecutionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CProtocolEventArgsProxy@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Properties(::Windows::ApplicationModel::Activation::MultiviewActivationProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@CProtocolEventArgsProxy@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CProtocolEventArgsProxy@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserContext@CProtocolEventArgsProxy@@UEAAJPEA_K@Z
    virtual long get_UserContext(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewSwitcher@CProtocolEventArgsProxy@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long get_ViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivationValueSetReference@CProtocolEventArgsProxy@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ActivationValueSetReference(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivationViewSwitcher@CProtocolEventArgsProxy@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long put_ActivationViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Properties@CProtocolEventArgsProxy@@UEAAJUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z
    virtual long put_Properties(::Windows::ApplicationModel::Activation::MultiviewActivationProperties);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UserContext@CProtocolEventArgsProxy@@UEAAJ_K@Z
    virtual long put_UserContext(uint64_t);
};
