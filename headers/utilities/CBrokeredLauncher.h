#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 89 member(s).
class CBrokeredLauncher {
public:
    class CLaunchHelper;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBrokeredLauncher@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrokeredLauncher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBrokeredLauncher@@QEAA@XZ
    CBrokeredLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriHandlersAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@34@@Z
    virtual long FindAppUriHandlersAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBrokeredLauncher@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBrokeredLauncher@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBrokeredLauncher@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CBrokeredLauncher@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CBrokeredLauncher@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileAsync@CBrokeredLauncher@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFileAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIStorageFile@Storage@4@PEAPEAU?$IAsyncOperation@W4LaunchFileStatus@System@Windows@@@Foundation@4@@Z
    virtual long LaunchFileForUserAsync(WindissectOpaque *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileWithOptionsAsync@CBrokeredLauncher@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAUILauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFileWithOptionsAsync(::Windows::Storage::IStorageFile *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileWithOptionsForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIStorageFile@Storage@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@W4LaunchFileStatus@System@Windows@@@Foundation@4@@Z
    virtual long LaunchFileWithOptionsForUserAsync(WindissectOpaque *, ::Windows::Storage::IStorageFile *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderAsync@CBrokeredLauncher@@UEAAJPEAUIStorageFolder@Storage@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathAsync@CBrokeredLauncher@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long LaunchFolderPathAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderPathForUserAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathWithOptionsAsync@CBrokeredLauncher@@UEAAJPEAUHSTRING__@@PEAUIFolderLauncherOptions@System@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long LaunchFolderPathWithOptionsAsync(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathWithOptionsForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAUIFolderLauncherOptions@34@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderPathWithOptionsForUserAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderWithOptionsAsync@CBrokeredLauncher@@UEAAJPEAUIStorageFolder@Storage@Windows@@PEAUIFolderLauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderWithOptionsAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFromCachedUriLaunchRequest@CBrokeredLauncher@@SAJAEAVCCachedLaunchUriRequest@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    static long LaunchFromCachedUriLaunchRequest(CCachedLaunchUriRequest &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithCallerWindowIdForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@KPEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsWithCallerWindowIdForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithDataForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAUIPropertySet@Collections@64@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsWithDataForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAUIPropertySet@Collections@64@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriWithDataForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataInternalAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAUIPropertySet@Collections@34@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriWithDataInternalAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithOptionsAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriWithOptionsAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithOptionsForUserAsync@CBrokeredLauncher@@UEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriWithOptionsForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateUserContext@CBrokeredLauncher@@QEAAXPEAUILauncherOptions@System@Windows@@PEAUIUser@34@@Z
    void PopulateUserContext(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupportAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryAppUriSupportAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupportWithPackageFamilyNameAsync@CBrokeredLauncher@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryAppUriSupportWithPackageFamilyNameAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrokeredLauncher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrokeredLauncher@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallingProcessHasUserChoiceCapability@CBrokeredLauncher@@CA_NPEAUILauncherStatics@System@Windows@@@Z
    static bool CallingProcessHasUserChoiceCapability(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderFromPath@CBrokeredLauncher@@CAJPEAUHSTRING__@@PEAPEAUIStorageFolder@Storage@Windows@@@Z
    static long GetFolderFromPath(HSTRING__*, ::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessLowRights@CBrokeredLauncher@@CA_NPEAUILauncherStatics@System@Windows@@@Z
    static bool IsCallingProcessLowRights(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFolderInRestrictedNamespace@CBrokeredLauncher@@CA_NPEAUIStorageFolder@Storage@Windows@@@Z
    static bool IsFolderInRestrictedNamespace(::Windows::Storage::IStorageFolder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveCallerUIContextAppIdImpersonationTokenPFNAndWindowModel@CBrokeredLauncher@@CAXPEAUILauncherStatics@System@Windows@@PEAW4PROCESS_UICONTEXT@@PEAPEAGPEAPEAX2PEA_N@Z
    static void RetrieveCallerUIContextAppIdImpersonationTokenPFNAndWindowModel(WindissectOpaque *, int *, unsigned short * *, void * *, unsigned short * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetWindowIdOfCallerViaCoreWindow@CBrokeredLauncher@@CAKXZ
    static unsigned long TryGetWindowIdOfCallerViaCoreWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOrGetQuirkEnabledCallerWindow@CBrokeredLauncher@@CAXPEAUILauncherStatics@System@Windows@@PEA_NPEAPEAUHWND__@@@Z
    static void ValidateOrGetQuirkEnabledCallerWindow(WindissectOpaque *, bool *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchFolderAsync@CBrokeredLauncher@@CA?AV?$ComPtr@U?$IAsyncOperation@_N@Foundation@Windows@@@WRL@Microsoft@@PEAUILauncherStatics@System@Windows@@PEAUIStorageFolder@Storage@7@PEAUHSTRING__@@PEAUIFolderLauncherOptions@67@PEAUITelemetryCorrelationVector@@@Z
    static WindissectOpaque _LaunchFolderAsync(WindissectOpaque *, ::Windows::Storage::IStorageFolder *, HSTRING__*, WindissectOpaque *, ITelemetryCorrelationVector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateOptionsAndSeterror@CBrokeredLauncher@@CAXPEAUILauncherOptions@System@Windows@@_N@Z
    static void _ValidateOptionsAndSeterror(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidatePointerAndSetError@CBrokeredLauncher@@CAXPEAX@Z
    static void _ValidatePointerAndSetError(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateStorageFileAndBrokerUser@CBrokeredLauncher@@CAXPEAUIStorageFile@Storage@Windows@@@Z
    static void _ValidateStorageFileAndBrokerUser(::Windows::Storage::IStorageFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateUserAndSetError@CBrokeredLauncher@@CAXPEAUILauncherStatics@System@Windows@@PEAUIUser@34@@Z
    static void _ValidateUserAndSetError(WindissectOpaque *, WindissectOpaque *);
};
