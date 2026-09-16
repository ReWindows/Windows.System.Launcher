#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
namespace Windows::Internal::System {
class AppServiceLauncher {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriSchemeHandledByAnAppService@AppServiceLauncher@System@Internal@Windows@@SA_NPEAUIUriRuntimeClass@Foundation@4@@Z
    static bool IsUriSchemeHandledByAnAppService(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAppServiceAsync@AppServiceLauncher@System@Internal@Windows@@UEAAJPEAUIUriRuntimeClass@Foundation@4@PEAUIPropertySet@Collections@64@PEAPEAU?$IAsyncOperation@_N@64@@Z
    virtual long LaunchAppServiceAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAppServiceAndSendMessageAsync@AppServiceLauncher@System@Internal@Windows@@AEAAJPEBG0PEAUIPropertySet@Collections@Foundation@4@PEAUIUriRuntimeClass@74@PEAPEAU?$IAsyncOperation@_N@74@@Z
    long OpenAppServiceAndSendMessageAsync(unsigned short const *, unsigned short const *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
};
} // namespace Windows::Internal::System
