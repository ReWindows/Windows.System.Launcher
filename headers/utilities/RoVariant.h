#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
class RoVariant {
public:
    class Accessor;
    class OutRef;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RoVariant@@QEAA@XZ
    ~RoVariant();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z
    RoVariant(IInspectable *, bool, bool);
};
