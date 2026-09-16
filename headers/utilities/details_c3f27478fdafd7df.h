#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
namespace DirectLaunch {
class details {
public:
    class DirectLaunchTelemetry;
    class _tip_DirectLaunchInvocationTest;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectLaunchService@details@DirectLaunch@@YA?AUIDirectLaunchService@2Shell@Internal@Windows@winrt@@XZ
    WindissectOpaque GetDirectLaunchService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentProcessGreaterThanMediumIntegrityLevel@details@DirectLaunch@@YA_NXZ
    bool IsCurrentProcessGreaterThanMediumIntegrityLevel();
};
} // namespace DirectLaunch
