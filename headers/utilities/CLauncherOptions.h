#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 86 member(s).
class CLauncherOptions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLauncherOptions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLauncherOptions@@QEAA@XZ
    CLauncherOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CLauncherOptions@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CLauncherOptions@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLauncherOptions@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CLauncherOptions@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CLauncherOptions@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLauncherOptions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLauncherOptions@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CLauncherOptions@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentType@CLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayApplicationPicker@CLauncherOptions@@UEAAJPEAE@Z
    virtual long get_DisplayApplicationPicker(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FallbackUri@CLauncherOptions@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_FallbackUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IgnoreAppUriHandlers@CLauncherOptions@@UEAAJPEAE@Z
    virtual long get_IgnoreAppUriHandlers(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LimitPickerToCurrentAppAndAppUriHandlers@CLauncherOptions@@UEAAJPEAE@Z
    virtual long get_LimitPickerToCurrentAppAndAppUriHandlers(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeighboringFilesQuery@CLauncherOptions@@UEAAJPEAPEAUIStorageFileQueryResult@Search@Storage@Windows@@@Z
    virtual long get_NeighboringFilesQuery(::Windows::Storage::Search::IStorageFileQueryResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OwnerWindowId@CLauncherOptions@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_OwnerWindowId(::Windows::Internal::ApplicationModel::WindowManagement::WindowId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredApplicationDisplayName@CLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PreferredApplicationDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredApplicationPackageFamilyName@CLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PreferredApplicationPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetApplicationPackageFamilyName@CLauncherOptions@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetApplicationPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TreatAsUntrusted@CLauncherOptions@@UEAAJPEAE@Z
    virtual long get_TreatAsUntrusted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UI@CLauncherOptions@@UEAAJPEAPEAUILauncherUIOptions@System@Windows@@@Z
    virtual long get_UI(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentType@CLauncherOptions@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ContentType(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisplayApplicationPicker@CLauncherOptions@@UEAAJE@Z
    virtual long put_DisplayApplicationPicker(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FallbackUri@CLauncherOptions@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_FallbackUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IgnoreAppUriHandlers@CLauncherOptions@@UEAAJE@Z
    virtual long put_IgnoreAppUriHandlers(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LimitPickerToCurrentAppAndAppUriHandlers@CLauncherOptions@@UEAAJE@Z
    virtual long put_LimitPickerToCurrentAppAndAppUriHandlers(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NeighboringFilesQuery@CLauncherOptions@@UEAAJPEAUIStorageFileQueryResult@Search@Storage@Windows@@@Z
    virtual long put_NeighboringFilesQuery(::Windows::Storage::Search::IStorageFileQueryResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredApplicationDisplayName@CLauncherOptions@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PreferredApplicationDisplayName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredApplicationPackageFamilyName@CLauncherOptions@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PreferredApplicationPackageFamilyName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetApplicationPackageFamilyName@CLauncherOptions@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetApplicationPackageFamilyName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TreatAsUntrusted@CLauncherOptions@@UEAAJE@Z
    virtual long put_TreatAsUntrusted(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLauncherOptions@@UEAA@XZ
    virtual ~CLauncherOptions();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStringWithLengthLimitNoNulls@CLauncherOptions@@AEAAJPEAUHSTRING__@@IPEAVString@Internal@Windows@@@Z
    long _SetStringWithLengthLimitNoNulls(HSTRING__*, unsigned int, ::Windows::Internal::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StringEquals@CLauncherOptions@@AEAA_NPEBG0@Z
    bool _StringEquals(unsigned short const *, unsigned short const *);
};
