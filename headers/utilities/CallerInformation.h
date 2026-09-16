#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 11 member(s).
class CallerInformation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CallerInformation@@QEAA@AEBV0@@Z
    CallerInformation(CallerInformation const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CallerInformation@@QEAA@$$QEAV0@@Z
    CallerInformation(CallerInformation &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Capture@CallerInformation@@SA?AV1@_K0@Z
    static CallerInformation Capture(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginatingApplicationUserModelId@CallerInformation@@QEBA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetOriginatingApplicationUserModelId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginatingPackageFamilyName@CallerInformation@@QEBA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetOriginatingPackageFamilyName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOriginatingApplicationUserModelId@CallerInformation@@QEAAXPEAUHSTRING__@@@Z
    void SetOriginatingApplicationUserModelId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Swap@CallerInformation@@QEAAXAEAV1@@Z
    void Swap(CallerInformation &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CallerInformation@@QEAA@XZ
    ~CallerInformation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerAumid@CallerInformation@@CAJPEAPEAUHSTRING__@@@Z
    static long GetCallerAumid(HSTRING__* *);
};
