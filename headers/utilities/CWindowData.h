#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 10 member(s).
namespace Windows::Internal::AsyncWindowOperation {
class CWindowData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowData@AsyncWindowOperation@Internal@Windows@@QEAA@PEAUHWND__@@W4AsyncWindowOptions@23@AEBVWeakRef@WRL@Microsoft@@@Z
    CWindowData(HWND__*, int, ::Microsoft::WRL::WeakRef const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CWindowData@AsyncWindowOperation@Internal@Windows@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CWindowData@AsyncWindowOperation@Internal@Windows@@UEAAJXZ
    virtual long Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CWindowData@AsyncWindowOperation@Internal@Windows@@UEAAJXZ
    virtual long Enable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CWindowData@AsyncWindowOperation@Internal@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWindowData@AsyncWindowOperation@Internal@Windows@@UEAAJPEAUIInspectable@@0@Z
    virtual long Invoke(IInspectable *, IInspectable *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMDAWindow@CWindowData@AsyncWindowOperation@Internal@Windows@@CA_NPEAUHWND__@@@Z
    static bool _IsMDAWindow(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowData@AsyncWindowOperation@Internal@Windows@@EEAA@XZ
    virtual ~CWindowData();
};
} // namespace Windows::Internal::AsyncWindowOperation
