#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class CMessageDialogHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddButton@CMessageDialogHelper@@QEAAJIPEBGW4MessageDialogButtonOptions@@@Z
    long AddButton(unsigned int, unsigned short const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageDialogHelper@@QEAA@XZ
    CMessageDialogHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMessageDialogHelper@@QEAAJPEAUHWND__@@W4ActivationType@1@_N2@Z
    long RuntimeClassInitialize(HWND__*, int, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CMessageDialogHelper@@QEAAJPEBG@Z
    long SetTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMessageDialogAndWait@CMessageDialogHelper@@QEAAJW4tagCOWAIT_FLAGS@@@Z
    long ShowMessageDialogAndWait(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMessageDialogHelper@@UEAA@XZ
    virtual ~CMessageDialogHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateButton@CMessageDialogHelper@@AEAAJIPEBGPEAPEAUIUICommand@Popups@UI@Windows@@@Z
    long _CreateButton(unsigned int, unsigned short const *, ::Windows::UI::Popups::IUICommand * *);
};
