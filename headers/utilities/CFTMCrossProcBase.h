#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 11 member(s).
class CFTMCrossProcBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFTMCrossProcBase@@QEAA@XZ
    CFTMCrossProcBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CFTMCrossProcBase@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long _GetFTM(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasCustomMarshaler@CFTMCrossProcBase@@IEAA_NXZ
    bool _HasCustomMarshaler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CFTMCrossProcBase@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CFTMCrossProcBase@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
};
