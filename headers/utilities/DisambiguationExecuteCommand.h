#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 18 member(s).
class DisambiguationExecuteCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisambiguationExecuteCommand@@QEAA@XZ
    DisambiguationExecuteCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@DisambiguationExecuteCommand@@UEAAJXZ
    virtual long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@DisambiguationExecuteCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@DisambiguationExecuteCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFilePath@DisambiguationExecuteCommand@@QEAA_NAEBU?$com_ptr@UIShellItem@@@winrt@@@Z
    bool IsFilePath(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@DisambiguationExecuteCommand@@UEAAJPEAUHWND__@@PEBGW4IMMERSIVE_OPENWITH_FLAGS@@@Z
    virtual long Launch(HWND__*, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@DisambiguationExecuteCommand@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@DisambiguationExecuteCommand@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@DisambiguationExecuteCommand@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@DisambiguationExecuteCommand@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@DisambiguationExecuteCommand@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@DisambiguationExecuteCommand@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@DisambiguationExecuteCommand@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@DisambiguationExecuteCommand@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@DisambiguationExecuteCommand@@UEAAJH@Z
    virtual long SetShowWindow(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisambiguationExecuteCommand@@UEAA@XZ
    virtual ~DisambiguationExecuteCommand();
};
