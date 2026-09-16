#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 47 member(s).
class CLauncherUIOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLauncherUIOptions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLauncherUIOptions@@QEAA@XZ
    CLauncherUIOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CLauncherUIOptions@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CLauncherUIOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CLauncherUIOptions@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRect@CLauncherUIOptions@@UEAAJPEAUtagRECT@@@Z
    virtual long GetWindowRect(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLauncherUIOptions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLauncherUIOptions@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowRect@CLauncherUIOptions@@UEAAJPEBUtagRECT@@@Z
    virtual long SetWindowRect(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowTransparentBackground@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_AllowTransparentBackground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayMode@CLauncherUIOptions@@UEAAJPEAW4LauncherUIDisplayMode@Private@System@Windows@@@Z
    virtual long get_DisplayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IgnoreSuppressSystemDialogs@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_IgnoreSuppressSystemDialogs(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvocationPoint@CLauncherUIOptions@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_InvocationPoint(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchFullScreen@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_LaunchFullScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchMaximized@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_LaunchMaximized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightDismiss@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_LightDismiss(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredPlacement@CLauncherUIOptions@@UEAAJPEAW4Placement@Popups@UI@Windows@@@Z
    virtual long get_PreferredPlacement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionRect@CLauncherUIOptions@@UEAAJPEAPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_SelectionRect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSplashscreen@CLauncherUIOptions@@UEAAJPEAE@Z
    virtual long get_SuppressSplashscreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowTransparentBackground@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_AllowTransparentBackground(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayMode@CLauncherUIOptions@@UEAAJW4LauncherUIDisplayMode@Private@System@Windows@@@Z
    virtual long put_DisplayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IgnoreSuppressSystemDialogs@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_IgnoreSuppressSystemDialogs(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InvocationPoint@CLauncherUIOptions@@UEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_InvocationPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchFullScreen@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_LaunchFullScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchMaximized@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_LaunchMaximized(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightDismiss@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_LightDismiss(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredPlacement@CLauncherUIOptions@@UEAAJW4Placement@Popups@UI@Windows@@@Z
    virtual long put_PreferredPlacement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionRect@CLauncherUIOptions@@UEAAJPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_SelectionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSplashscreen@CLauncherUIOptions@@UEAAJE@Z
    virtual long put_SuppressSplashscreen(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLauncherUIOptions@@UEAA@XZ
    virtual ~CLauncherUIOptions();
};
