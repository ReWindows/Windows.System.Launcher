#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 15 member(s).
class CColumnList {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColumnList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendColumn@CColumnList@@UEAAJAEBU_tagpropertykey@@W4COLUMN_VISIBILITY@@@Z
    virtual long AppendColumn(_tagpropertykey const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CColumnList@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnAt@CColumnList@@UEAAJIPEAU_tagpropertykey@@PEAW4COLUMN_VISIBILITY@@@Z
    virtual long GetColumnAt(unsigned int, _tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CColumnList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CColumnList@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CColumnList@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CColumnList@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColumnList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColumnList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CColumnList@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColumnList@@AEAA@XZ
    ~CColumnList();
};
