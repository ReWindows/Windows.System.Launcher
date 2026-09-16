#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 27 member(s).
namespace Windows::System::Internal::Launch {
class StoreLauncher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StoreLauncher@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StoreLauncher@Launch@Internal@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StoreLauncher@Launch@Internal@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StoreLauncher@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StoreLauncher@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProductDisplayPage@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ShowProductDisplayPage(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProductResultsForSchemeOrExtension@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAUHSTRING__@@E@Z
    virtual long ShowProductResultsForSchemeOrExtension(HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProductResultsForStorageFile@StoreLauncher@Launch@Internal@System@Windows@@UEAAJPEAUIStorageFile@Storage@5@@Z
    virtual long ShowProductResultsForStorageFile(::Windows::Storage::IStorageFile *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StoreLauncher@Launch@Internal@System@Windows@@QEAA@XZ
    StoreLauncher();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreLauncher@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~StoreLauncher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUri@StoreLauncher@Launch@Internal@System@Windows@@AEAAJPEAUHSTRING__@@@Z
    long LaunchUri(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateButtonCommand@StoreLauncher@Launch@Internal@System@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAUIUICommand@Popups@UI@5@@Z
    long _CreateButtonCommand(HSTRING__*, unsigned int, ::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePropertyValue@StoreLauncher@Launch@Internal@System@Windows@@AEAAJIPEAPEAUIPropertyValue@Foundation@5@@Z
    long _CreatePropertyValue(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStoreNavigationURI@StoreLauncher@Launch@Internal@System@Windows@@CAJPEAUHSTRING__@@W4MarketPlaceDialogType@2345@PEAPEAU6@@Z
    static long _GetStoreNavigationURI(HSTRING__*, int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MarketplaceDialogCallback@StoreLauncher@Launch@Internal@System@Windows@@AEAAJPEAUIUICommand@Popups@UI@5@@Z
    long _MarketplaceDialogCallback(::Windows::UI::Popups::IUICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowMarketplaceDialog@StoreLauncher@Launch@Internal@System@Windows@@AEAAJXZ
    long _ShowMarketplaceDialog();
};
} // namespace Windows::System::Internal::Launch
