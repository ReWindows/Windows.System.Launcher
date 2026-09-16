#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 5 member(s).
class CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase@@QEAA@XZ
    CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_Data(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase@@QEAA@XZ
    ~CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProtocolActivatedEventArgsWithCallerPackageFamilyNameAndDataBase@@IEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@Windows@@H@Z
    long Initialize(HSTRING__*, ::Windows::Storage::Streams::IBuffer *, int);
};
