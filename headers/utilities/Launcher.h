#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 117 member(s).
class Launcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Launcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Launcher@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Launcher@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Launcher@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@Launcher@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@Launcher@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Launcher@@QEAA@XZ
    Launcher();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Launcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Launcher@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@Launcher@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriHandlersAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@34@@Z
    virtual long FindAppUriHandlersAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFileHandlersAsync@Launcher@@EEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long FindFileHandlersAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriSchemeHandlersAsync@Launcher@@EEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long FindUriSchemeHandlersAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriSchemeHandlersWithLaunchUriTypeAsync@Launcher@@EEAAJPEAUHSTRING__@@W4LaunchQuerySupportType@System@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInfo@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long FindUriSchemeHandlersWithLaunchUriTypeAsync(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileAsync@Launcher@@EEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFileAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIStorageFile@Storage@4@PEAPEAU?$IAsyncOperation@W4LaunchFileStatus@System@Windows@@@Foundation@4@@Z
    virtual long LaunchFileForUserAsync(WindissectOpaque *, ::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileWithOptionsAsync@Launcher@@EEAAJPEAUIStorageFile@Storage@Windows@@PEAUILauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFileWithOptionsAsync(::Windows::Storage::IStorageFile *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFileWithOptionsForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIStorageFile@Storage@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@W4LaunchFileStatus@System@Windows@@@Foundation@4@@Z
    virtual long LaunchFileWithOptionsForUserAsync(WindissectOpaque *, ::Windows::Storage::IStorageFile *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderAsync@Launcher@@EEAAJPEAUIStorageFolder@Storage@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathAsync@Launcher@@EEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long LaunchFolderPathAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderPathForUserAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathWithOptionsAsync@Launcher@@EEAAJPEAUHSTRING__@@PEAUIFolderLauncherOptions@System@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long LaunchFolderPathWithOptionsAsync(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderPathWithOptionsForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAUIFolderLauncherOptions@34@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderPathWithOptionsForUserAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolderWithOptionsAsync@Launcher@@EEAAJPEAUIStorageFolder@Storage@Windows@@PEAUIFolderLauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long LaunchFolderWithOptionsAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@34@@Z
    virtual long LaunchUriForResultsAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithCallerWindowIdAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@KPEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@34@@Z
    virtual long LaunchUriForResultsWithCallerWindowIdAsync(WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithCallerWindowIdForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@KPEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsWithCallerWindowIdForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithDataAndCallerWindowIdAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAUIPropertySet@Collections@34@KPEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@34@@Z
    virtual long LaunchUriForResultsWithDataAndCallerWindowIdAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithDataAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAUIPropertySet@Collections@34@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@34@@Z
    virtual long LaunchUriForResultsWithDataAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForResultsWithDataForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAUIPropertySet@Collections@64@PEAPEAU?$IAsyncOperation@PEAVLaunchUriResult@System@Windows@@@64@@Z
    virtual long LaunchUriForResultsWithDataForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAUIPropertySet@Collections@34@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriWithDataAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAUIPropertySet@Collections@64@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriWithDataForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithDataInternalAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAUIPropertySet@Collections@34@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriWithDataInternalAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithOptionsAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUILauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long LaunchUriWithOptionsAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithOptionsForUserAsync@Launcher@@EEAAJPEAUIUser@System@Windows@@PEAUIUriRuntimeClass@Foundation@4@PEAUILauncherOptions@34@PEAPEAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@64@@Z
    virtual long LaunchUriWithOptionsForUserAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupportAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryAppUriSupportAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAppUriSupportWithPackageFamilyNameAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryAppUriSupportWithPackageFamilyNameAsync(WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFileSupportAsync@Launcher@@EEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@Foundation@4@@Z
    virtual long QueryFileSupportAsync(::Windows::Storage::IStorageFile *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryFileSupportWithPackageFamilyNameAsync@Launcher@@EEAAJPEAUIStorageFile@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@Foundation@4@@Z
    virtual long QueryFileSupportWithPackageFamilyNameAsync(::Windows::Storage::IStorageFile *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUriSupportAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@W4LaunchQuerySupportType@System@4@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryUriSupportAsync(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryUriSupportWithPackageFamilyNameAsync@Launcher@@EEAAJPEAUIUriRuntimeClass@Foundation@Windows@@W4LaunchQuerySupportType@System@4@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4LaunchQuerySupportStatus@System@Windows@@@34@@Z
    virtual long QueryUriSupportWithPackageFamilyNameAsync(WindissectOpaque *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileTypeSupportedForMRBrowser@Launcher@@CA_NPEAUIStorageFile@Storage@Windows@@@Z
    static bool _IsFileTypeSupportedForMRBrowser(::Windows::Storage::IStorageFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUriSchemeInMRAllowList@Launcher@@CA_NPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    static bool _IsUriSchemeInMRAllowList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUriSchemeNeededForMRBrowser@Launcher@@CA_NPEBG@Z
    static bool _IsUriSchemeNeededForMRBrowser(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchFileWithOptionsForUserAsync@Launcher@@AEAA?AV?$ComPtr@U?$IAsyncOperation@_N@Foundation@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@PEAUILauncherOptions@System@7@@Z
    WindissectOpaque _LaunchFileWithOptionsForUserAsync(::Windows::Storage::IStorageFile *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchFolderInternalAsync@Launcher@@AEAAJPEAUIStorageFolder@Storage@Windows@@PEAUIFolderLauncherOptions@System@4@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    long _LaunchFolderInternalAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque *, WindissectOpaque * *);
};
