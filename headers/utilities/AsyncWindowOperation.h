#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
namespace Windows::Internal {
class AsyncWindowOperation {
public:
    class CWindowData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncWindowOperation@Internal@Windows@@QEAA@AEBV012@@Z
    AsyncWindowOperation(::Windows::Internal::AsyncWindowOperation const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@AsyncWindowOperation@Internal@Windows@@QEAAJPEAPEAUHWND__@@@Z
    long GetOwner(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@AsyncWindowOperation@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetWindowData(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManageStage@AsyncWindowOperation@Internal@Windows@@QEAAJW4AsyncStage@23@JAEBVCResultBase@23@@Z
    long ManageStage(int, long, ::Windows::Internal::CResultBase const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncWindowOperation@Internal@Windows@@QEAA@XZ
    ~AsyncWindowOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowData@AsyncWindowOperation@Internal@Windows@@AEAAJXZ
    long EnsureWindowData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCallerOwnerWindow@AsyncWindowOperation@Internal@Windows@@CAJ_NPEAPEAUHWND__@@@Z
    static long s_GetCallerOwnerWindow(bool, HWND__* *);
};
} // namespace Windows::Internal
