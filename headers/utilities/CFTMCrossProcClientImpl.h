#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 10 member(s).
class CFTMCrossProcClientImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z
    virtual long Query(IUnknown *, int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@_K@Z
    virtual long Set(IUnknown *, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFTMCrossProcClientImpl@@QEAA@XZ
    ~CFTMCrossProcClientImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetRemoteIdentity(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CFTMCrossProcClientImpl@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CFTMCrossProcClientImpl@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalOrReleaseAdditionalData@CFTMCrossProcClientImpl@@MEAAJW4UnmarshalAction@@PEAUIStream@@@Z
    virtual long v_UnmarshalOrReleaseAdditionalData(int, IStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z
    long _UnwrapStream(int, IStream *);
};
