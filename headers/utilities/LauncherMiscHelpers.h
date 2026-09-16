#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 10 member(s).
class LauncherMiscHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorrelationVector@LauncherMiscHelpers@@YAJPEAPEAUHSTRING__@@@Z
    long CreateCorrelationVector(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializePropertySet@LauncherMiscHelpers@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z
    long DeserializePropertySet(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerAumidOrProcessName@LauncherMiscHelpers@@YAJPEAPEAUHSTRING__@@@Z
    long GetCallerAumidOrProcessName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRepositoryQueryHelper@LauncherMiscHelpers@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetStateRepositoryQueryHelper(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubstituteFileExplorerAumidFromTestHooks@LauncherMiscHelpers@@YAJPEAPEAUHSTRING__@@@Z
    long GetSubstituteFileExplorerAumidFromTestHooks(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessMua@LauncherMiscHelpers@@YAJAEA_N@Z
    long IsCallingProcessMua(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHttpUrl@LauncherMiscHelpers@@YA_NPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    bool IsHttpUrl(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePropertySet@LauncherMiscHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAUIBuffer@Streams@Storage@5@@Z
    long SerializePropertySet(WindissectOpaque *, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForceLauncherService@LauncherMiscHelpers@@YA_NXZ
    bool ShouldForceLauncherService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBufferSize@LauncherMiscHelpers@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAW4BufferValidationResult@@@Z
    long ValidateBufferSize(::Windows::Storage::Streams::IBuffer *, int *);
};
