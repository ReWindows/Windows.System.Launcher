#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 20 member(s).
class LaunchExecuteCommandBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@LaunchExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@LaunchExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LaunchExecuteCommandBase@@UEAAJPEBGPEAUIPropertyBag@@@Z
    virtual long Initialize(unsigned short const *, IPropertyBag *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchExecuteCommandBase@@QEAA@XZ
    LaunchExecuteCommandBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@LaunchExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@LaunchExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@LaunchExecuteCommandBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@LaunchExecuteCommandBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@LaunchExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@LaunchExecuteCommandBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@LaunchExecuteCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@LaunchExecuteCommandBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchExecuteCommandBase@@UEAA@XZ
    virtual ~LaunchExecuteCommandBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoListInitOnNonSearchFolderAndView@LaunchExecuteCommandBase@@IEAAXPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIFolderView2@@PEAUAUTOLISTINIT@@@Z
    void GetAutoListInitOnNonSearchFolderAndView(_ITEMIDLIST_ABSOLUTE const *, IFolderView2*, AUTOLISTINIT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerPackageFamilyName@LaunchExecuteCommandBase@@IEAA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetCallerPackageFamilyName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSite@LaunchExecuteCommandBase@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ
    WindissectOpaque GetSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateViewItemsArray@LaunchExecuteCommandBase@@IEAA_NPEAPEAUIShellItemArray@@@Z
    bool TryCreateViewItemsArray(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReadStringWithSizeLimit@LaunchExecuteCommandBase@@IEAA_NPEAUIPropertyBag@@PEBG_KAEAVHString@Wrappers@WRL@Microsoft@@@Z
    bool TryReadStringWithSizeLimit(IPropertyBag *, unsigned short const *, uint64_t, ::Microsoft::WRL::Wrappers::HString &);
};
