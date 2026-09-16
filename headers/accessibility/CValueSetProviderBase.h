#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 10 member(s).
class CValueSetProviderBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Buffer@CValueSetProviderBase@@UEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long get_Buffer(::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueSet@CValueSetProviderBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_ValueSet(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CValueSetProviderBase@@QEAA@XZ
    ~CValueSetProviderBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeserializePropertySet@CValueSetProviderBase@@AEAAJXZ
    long _DeserializePropertySet();
};
