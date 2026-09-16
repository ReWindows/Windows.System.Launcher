#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 17 member(s).
namespace Execution {
class ExecutionServices {
public:
    class WorkerThreadItem;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExecutionServices@Execution@@QEAA@W4ComApartment@01@@Z
    ExecutionServices(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueCoreUIWorkItem@ExecutionServices@Execution@@UEAAJPEAUIExecutionServicesCoreUIWorkCallback@2@PEAX@Z
    virtual long QueueCoreUIWorkItem(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEvent@ExecutionServices@Execution@@QEAAJPEAXPEAUIExecutionServicesEventCallback@2@0PEA_K@Z
    long RegisterEvent(void *, WindissectOpaque *, void *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ExecutionServices@Execution@@UEAAJXZ
    virtual long Stop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeliverCallback@ExecutionServices@Execution@@IEAAJW4CallbackType@12@PEAVWorkerThreadItem@12@@Z
    long DeliverCallback(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@ExecutionServices@Execution@@IEAA?AV?$_DlistIt@U?$_DlistNode@V?$ComPtr@VWorkerThreadItem@ExecutionServices@Execution@@@WRL@Microsoft@@@utl@@V?$ComPtr@VWorkerThreadItem@ExecutionServices@Execution@@@WRL@Microsoft@@@utl@@PEAV?$list@V?$ComPtr@VWorkerThreadItem@ExecutionServices@Execution@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWorkerThreadItem@ExecutionServices@Execution@@@WRL@Microsoft@@@utl@@@4@PEAVWorkerThreadItem@12@@Z
    WindissectOpaque FindItem(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ExecutionServices@Execution@@IEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterItem@ExecutionServices@Execution@@IEAAJ_KW4ServicesAction@12@@Z
    long UnregisterItem(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkerThread@ExecutionServices@Execution@@IEAAJXZ
    long WorkerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoUserEventWorkCallback@ExecutionServices@Execution@@KAJPEAXK0@Z
    static long _DoUserEventWorkCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoUserTimerCallback@ExecutionServices@Execution@@KAJPEAX@Z
    static long _DoUserTimerCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWorkCallback@ExecutionServices@Execution@@KAJPEAXK0@Z
    static long _DoWorkCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TerminateCallback@ExecutionServices@Execution@@KAJPEAXK0@Z
    static long _TerminateCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WorkerThread@ExecutionServices@Execution@@KAKPEAX@Z
    static unsigned long _WorkerThread(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExecutionServices@Execution@@MEAA@XZ
    virtual ~ExecutionServices();
};
} // namespace Execution
