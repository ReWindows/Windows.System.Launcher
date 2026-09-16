#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 55 member(s).
namespace Windows::System::Internal::Launch {
class StateRepositorySource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StateRepositorySource@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSources@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long EnumSources(IEnumString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumValues@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAPEAUIEnumString@@@Z
    virtual long EnumValues(IEnumString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKey@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJKPEAPEAUHKEY__@@@Z
    virtual long GetKey(unsigned long, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@StateRepositorySource@Launch@Internal@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@StateRepositorySource@Launch@Internal@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSource@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBGPEAPEAUIQuerySource@@@Z
    virtual long OpenSource(unsigned short const *, IQuerySource * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueDirect@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBG0PEAPEAU_FLAGGED_BYTE_BLOB@@@Z
    virtual long QueryValueDirect(unsigned short const *, unsigned short const *, _FLAGGED_BYTE_BLOB * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueDword@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBG0PEAK@Z
    virtual long QueryValueDword(unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueExists@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBG0@Z
    virtual long QueryValueExists(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueGuid@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBG0PEAU_GUID@@@Z
    virtual long QueryValueGuid(unsigned short const *, unsigned short const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryValueString@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBG0PEAPEAG@Z
    virtual long QueryValueString(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StateRepositorySource@Launch@Internal@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKey@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAUHKEY__@@@Z
    virtual long SetKey(HKEY__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StateRepositorySource@Launch@Internal@System@Windows@@QEAA@XZ
    StateRepositorySource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtensionInfo@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAPEAUIExtensionInfo@2345@@Z
    virtual long get_ExtensionInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExtensionInfo@StateRepositorySource@Launch@Internal@System@Windows@@UEAAJPEAUIExtensionInfo@2345@@Z
    virtual long put_ExtensionInfo(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StateRepositorySource@Launch@Internal@System@Windows@@UEAA@XZ
    virtual ~StateRepositorySource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@StateRepositorySource@Launch@Internal@System@Windows@@AEAAJPEBGPEAPEAUIQuerySource@@@Z
    long Clone(unsigned short const *, IQuerySource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDdeExtensionProperty@StateRepositorySource@Launch@Internal@System@Windows@@CAJPEBG0000AEAVHString@Wrappers@WRL@Microsoft@@@Z
    static long SetDdeExtensionProperty(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, ::Microsoft::WRL::Wrappers::HString &);
};
} // namespace Windows::System::Internal::Launch
