#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 28 member(s).
class CEnumerableObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFromArray@CEnumerableObjectCollection@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumerableObjectCollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CEnumerableObjectCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z
    virtual long Clone(IEnumObjects * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long Clone(IEnumUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CEnumerableObjectCollection@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumerableObjectCollection@@UEAAJKAEBU_GUID@@PEAPEAXPEAK@Z
    virtual long Next(unsigned long, _GUID const &, void * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumerableObjectCollection@@UEAAJKPEAPEAUIUnknown@@PEAK@Z
    virtual long Next(unsigned long, IUnknown * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumerableObjectCollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumerableObjectCollection@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumerableObjectCollection@@UEAAJK@Z
    virtual long Skip(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long Clone(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z
    long InitializeClone(CEnumerableObjectCollection *);
};
