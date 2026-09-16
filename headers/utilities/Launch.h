#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 1 member(s).
namespace Windows::System::Internal {
class Launch {
public:
    class AppServiceExtensionInfoEqualityPredicate;
    class AppServiceExtensionInfoLifetimeTraits;
    class AppUriHandlerRegistrationInfoEqualityPredicate;
    class AppUriHandlerRegistrationInfoLifetimeTraits;
    class ExtensionInfo;
    class ExtensionProperties;
    class FileActivatedEventArgs;
    class LauncherQueryInfo;
    class ProtocolActivatedEventArgs;
    class ProtocolForResultsActivatedEventArgs;
    class StateRepositorySource;
    class StoreLauncher;
    class StoreLauncherFactory;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceString@Launch@Internal@System@Windows@@YAJIPEAPEAUHSTRING__@@@Z
    long GetResourceString(unsigned int, HSTRING__* *);
};
} // namespace Windows::System::Internal
