#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 44 member(s).
namespace CBrokeredLauncher {
class CLaunchHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLaunchHelper@CBrokeredLauncher@@QEAA@PEAUITelemetryCorrelationVector@@KPEBGW4PROCESS_UICONTEXT@@_NPEAXPEAUIDisableWindow@@PEAUILauncherOptions@System@Windows@@PEAUIFolderLauncherOptions@67@33W4LaunchHelperOptions@@3PEAUHWND__@@@Z
    CLaunchHelper(ITelemetryCorrelationVector *, unsigned long, unsigned short const *, int, bool, void *, IDisableWindow *, WindissectOpaque *, WindissectOpaque *, bool, bool, int, bool, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFile@CLaunchHelper@CBrokeredLauncher@@QEAAJPEAUIStorageFile@Storage@Windows@@PEBG1@Z
    long LaunchFile(::Windows::Storage::IStorageFile *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFolder@CLaunchHelper@CBrokeredLauncher@@QEAAJPEAUIStorageFolder@Storage@Windows@@PEBG_N@Z
    long LaunchFolder(::Windows::Storage::IStorageFolder *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUri@CLaunchHelper@CBrokeredLauncher@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long LaunchUri(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLaunchHelper@CBrokeredLauncher@@QEAA@XZ
    ~CLaunchHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItemForDefaultBrowserForUrl@CLaunchHelper@CBrokeredLauncher@@AEAA?AV?$ComPtr@UIShellItem@@@WRL@Microsoft@@PEBG0@Z
    WindissectOpaque GetShellItemForDefaultBrowserForUrl(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreAppUriHandlers@CLaunchHelper@CBrokeredLauncher@@AEAA_NXZ
    bool IgnoreAppUriHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAumIdForPackageFamily@CLaunchHelper@CBrokeredLauncher@@AEAA_NPEBG0_N@Z
    bool IsAumIdForPackageFamily(unsigned short const *, unsigned short const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualizedLaunch@CLaunchHelper@CBrokeredLauncher@@AEAA_NPEBG@Z
    bool IsVirtualizedLaunch(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LimitPickerToCurrentAppAndAppUriHandlers@CLaunchHelper@CBrokeredLauncher@@AEAA_NXZ
    bool LimitPickerToCurrentAppAndAppUriHandlers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIgnoreAppUriHandlers@CLaunchHelper@CBrokeredLauncher@@AEAAJ_N@Z
    long SetIgnoreAppUriHandlers(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRedirectLegacyBrowserRequest@CLaunchHelper@CBrokeredLauncher@@AEAA_NPEAUHSTRING__@@@Z
    bool ShouldRedirectLegacyBrowserRequest(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckCallerVisibilityAndContext@CLaunchHelper@CBrokeredLauncher@@AEAAJXZ
    long _CheckCallerVisibilityAndContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckElevatedLaunchAllowed@CLaunchHelper@CBrokeredLauncher@@AEAAJ_N@Z
    long _CheckElevatedLaunchAllowed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckFileTypeSafeForElevation@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIAssociationArray@@PEBG_N2@Z
    long _CheckFileTypeSafeForElevation(IAssociationArray *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRequirementsAndGetIShellItemForUri@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@PEBGPEAPEAUIShellItem@@@Z
    long _CheckRequirementsAndGetIShellItemForUri(WindissectOpaque *, unsigned short const *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRequirementsAndLaunchFile@CLaunchHelper@CBrokeredLauncher@@AEAAXPEAUIStorageFile@Storage@Windows@@PEBG1@Z
    void _CheckRequirementsAndLaunchFile(::Windows::Storage::IStorageFile *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckRequirementsAndLaunchFolder@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIStorageFolder@Storage@Windows@@PEBG_N@Z
    long _CheckRequirementsAndLaunchFolder(::Windows::Storage::IStorageFolder *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckSpecificPolicy@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUHKEY__@@_N@Z
    long _CheckSpecificPolicy(HKEY__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateRoundTrippableShellItemArrayFromShellItem@CLaunchHelper@CBrokeredLauncher@@CAJPEAUIShellItem@@PEAPEAUIShellItemArray@@@Z
    static long _CreateRoundTrippableShellItemArrayFromShellItem(IShellItem *, IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoDirectInvokeLaunch@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIShellItem@@PEBG@Z
    long _DoDirectInvokeLaunch(IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoFallbackLaunch@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long _DoFallbackLaunch(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoLaunch@CLaunchHelper@CBrokeredLauncher@@AEAAJ_NPEAUIShellItem@@W4AssocStatus@12@@Z
    long _DoLaunch(bool, IShellItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoLaunchOrFallback@CLaunchHelper@CBrokeredLauncher@@AEAAJ_NPEAUIShellItem@@PEBG@Z
    long _DoLaunchOrFallback(bool, IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesNetworkIsolationCheckApply@CLaunchHelper@CBrokeredLauncher@@CA_NPEBG@Z
    static bool _DoesNetworkIsolationCheckApply(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteItem@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIShellItem@@@Z
    long _ExecuteItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindProgIdForPackageFamilyName@CLaunchHelper@CBrokeredLauncher@@AEAA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUIShellItem@@PEAUHSTRING__@@PEAW4AssocStatus@12@@Z
    WindissectOpaque _FindProgIdForPackageFamilyName(IShellItem *, HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileExtensionForContentType@CLaunchHelper@CBrokeredLauncher@@CAJPEBGPEAPEAG@Z
    static long _GetFileExtensionForContentType(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProperties@CLaunchHelper@CBrokeredLauncher@@AEAAXXZ
    void _GetProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTargetPackageFamilyName@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAPEAUHSTRING__@@@Z
    long _GetTargetPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileLaunchAllowed@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIShellItem@@PEBG_N2@Z
    long _IsFileLaunchAllowed(IShellItem *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileOwnedByTrustedInstaller@CLaunchHelper@CBrokeredLauncher@@CA_NPEBG@Z
    static bool _IsFileOwnedByTrustedInstaller(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsProtocolExempt@CLaunchHelper@CBrokeredLauncher@@CA_NPEBG@Z
    static bool _IsProtocolExempt(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTargetOpenWith@CLaunchHelper@CBrokeredLauncher@@CA_NPEAUIAssociationArray@@@Z
    static bool _IsTargetOpenWith(IAssociationArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUriLaunchAllowed@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIShellItem@@PEBG11@Z
    long _IsUriLaunchAllowed(IShellItem *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchPicker@CLaunchHelper@CBrokeredLauncher@@AEAAJ_NPEAUIShellItem@@@Z
    long _LaunchPicker(bool, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchShellItemWithOptionsAndVerb@CLaunchHelper@CBrokeredLauncher@@AEAAJPEAUIShellItem@@PEAUIUnknown@@PEBG22@Z
    long _LaunchShellItemWithOptionsAndVerb(IShellItem *, IUnknown *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchWithWarning@CLaunchHelper@CBrokeredLauncher@@AEAAJ_NPEAUIShellItem@@@Z
    long _LaunchWithWarning(bool, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSourceViewOptions@CLaunchHelper@CBrokeredLauncher@@AEAAXXZ
    void _SetSourceViewOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StringEquals@CLaunchHelper@CBrokeredLauncher@@CA_NPEBG0@Z
    static bool _StringEquals(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TriggerStreamedFileWriterIfNecessary@CLaunchHelper@CBrokeredLauncher@@CAJPEAUIStorageItem@Storage@Windows@@PEBG@Z
    static long _TriggerStreamedFileWriterIfNecessary(::Windows::Storage::IStorageItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAndGetAssocStatus@CLaunchHelper@CBrokeredLauncher@@AEAA?AV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@_NPEBGPEAW4AssocStatus@12@@Z
    WindissectOpaque _ValidateAndGetAssocStatus(bool, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAndGetAssocStatus@CLaunchHelper@CBrokeredLauncher@@AEAA?AW4AssocStatus@12@_NPEAUIAssociationArray@@PEBGPEAUIShellItem@@PEAPEAG@Z
    int _ValidateAndGetAssocStatus(bool, IAssociationArray *, unsigned short const *, IShellItem *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAndGetAssocStatus@CLaunchHelper@CBrokeredLauncher@@AEAA?AW4AssocStatus@12@_NPEAUIShellItem@@PEBG@Z
    int _ValidateAndGetAssocStatus(bool, IShellItem *, unsigned short const *);
};
} // namespace CBrokeredLauncher
