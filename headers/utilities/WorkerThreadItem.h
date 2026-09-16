#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 6 member(s).
namespace Execution::ExecutionServices {
class WorkerThreadItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WorkerThreadItem@ExecutionServices@Execution@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WorkerThreadItem@ExecutionServices@Execution@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WorkerThreadItem@ExecutionServices@Execution@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WorkerThreadItem@ExecutionServices@Execution@@UEAA@XZ
    virtual ~WorkerThreadItem();
};
} // namespace Execution::ExecutionServices
