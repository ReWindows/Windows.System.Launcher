#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 11 member(s).
class LauncherDesktopProvider {
public:
    class AssociationWarningPrompt;
    class CallerVisibilityAndContext;
    class DoLaunchOrFallback;
    class Execute;
    class HandlerDisambiguation;
    class LaunchFiles;
    class LaunchFilesInternal;
    class LaunchFolder;
    class LaunchFolderInternal;
    class LaunchShellItemWithOptionsAndVerb;
    class LaunchUri;
    class LaunchUriInternal;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssocIsDangerous@LauncherDesktopProvider@@SAXXZ
    static void AssocIsDangerous();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MissingFileExtension@LauncherDesktopProvider@@SAXXZ
    static void MissingFileExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedirectedEdgePfnLaunch@LauncherDesktopProvider@@SAXXZ
    static void RedirectedEdgePfnLaunch();
};
