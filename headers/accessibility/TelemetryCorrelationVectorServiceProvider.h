#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 7 member(s).
class TelemetryCorrelationVectorServiceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@TelemetryCorrelationVectorServiceProvider@@UEAAJPEAPEAD@Z
    virtual long Increment(char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSeed@TelemetryCorrelationVectorServiceProvider@@SA?AV?$ComPtr@VTelemetryCorrelationVectorServiceProvider@@@WRL@Microsoft@@XZ
    static WindissectOpaque MakeSeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@TelemetryCorrelationVectorServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@TelemetryCorrelationVectorServiceProvider@@UEAAJPEAPEAD@Z
    virtual long ToString(char * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TelemetryCorrelationVectorServiceProvider@@UEAA@XZ
    virtual ~TelemetryCorrelationVectorServiceProvider();
};
