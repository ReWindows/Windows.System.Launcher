#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
class ActivateAppParams {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ActivateAppParams@@QEAAJPEAUHSTRING__@@000U_GUID@@PEAUIBuffer@Streams@Storage@Windows@@PEAUIProtocolForResultsOperation@System@7@PEAUIApplicationActivationProperties@Private@Activation@ApplicationModel@7@VCallerInformation@@_NPEAUIStorageFile@67@@Z
    long Initialize(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, _GUID, ::Windows::Storage::Streams::IBuffer *, WindissectOpaque *, ::Windows::ApplicationModel::Activation::Private::IApplicationActivationProperties *, CallerInformation, bool, ::Windows::Storage::IStorageFile *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateAppParams@@QEAA@XZ
    ~ActivateAppParams();
};
