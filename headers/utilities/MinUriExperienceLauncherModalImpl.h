#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 4 member(s).
class MinUriExperienceLauncherModalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissExperience@MinUriExperienceLauncherModalImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long DismissExperience(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAsync@MinUriExperienceLauncherModalImpl@@UEAAJPEAUHSTRING__@@0000U_GUID@@PEAUIInspectable@@2UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAUILauncherUIOptions@System@9@_K@Z
    virtual long LaunchAsync(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, _GUID, IInspectable *, IInspectable *, ::Windows::Internal::ApplicationModel::WindowManagement::WindowId, WindissectOpaque *, uint64_t);
};
