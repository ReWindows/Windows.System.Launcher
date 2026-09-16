#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 9 member(s).
class TraceLoggingCorrelationVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z
    static TraceLoggingCorrelationVector * Extend(char const *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z
    TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV1_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TraceLoggingCorrelationVector@@QEAA@XZ
    TraceLoggingCorrelationVector();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z
    TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV2_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ
    uint64_t IncrementImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z
    bool ToStringImpl(uint64_t, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z
    static int ValidateImpl(char const *, bool);
};
