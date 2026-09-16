#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
namespace Windows::System::Internal::Launch {
class AppUriHandlerRegistrationInfoLifetimeTraits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Construct@AppUriHandlerRegistrationInfoLifetimeTraits@Launch@Internal@System@Windows@@SAJPEAUAppUriHandlerRegistrationInfo@2345@U62345@@Z
    static long Construct(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AppUriHandlerRegistrationInfoLifetimeTraits@Launch@Internal@System@Windows@@SAXPEAUAppUriHandlerRegistrationInfo@2345@@Z
    static void Destroy(WindissectOpaque *);
};
} // namespace Windows::System::Internal::Launch
