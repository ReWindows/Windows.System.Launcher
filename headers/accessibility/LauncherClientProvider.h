#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
class LauncherClientProvider {
public:
    class AppUriHandlerRegistrationManager;
    class AppUriHandlerRegistrationManagerForPackage;
    class AppUriHandlerValidation;
    class FindAppUriHandlers;
    class FindFileHandlers;
    class FindUriHandlers;
    class GetAllHosts;
    class GetAppAddedHosts;
    class LaunchAppServiceAsync;
    class LaunchFileAsync;
    class LaunchFileWithOptionsAsync;
    class LaunchFolderAsync;
    class LaunchFolderPathAsync;
    class LaunchFolderWithOptionsAsync;
    class LaunchUriAsync;
    class LaunchUriOnRemoteSystem;
    class LaunchUriWithOptionsAsync;
    class MarketplaceDialogCallback;
    class QueryAppUriSupport;
    class QueryFileSupport;
    class QueryUriSupport;
    class RemoteLaunchUriAsync;
    class SetAppAddedHosts;
    class ShowMarketplaceDialog;
    class UpdateHosts;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppUriHandlerIsDelegated@LauncherClientProvider@@SAXXZ
    static void AppUriHandlerIsDelegated();
};
