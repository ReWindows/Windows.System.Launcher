#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 3 member(s).
namespace winrt::Windows::System::Internal::Launch {
class QueryAssociationBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAppUriAssociations@QueryAssociationBroker@Launch@Internal@System@Windows@winrt@@SA@AEBUhstring@param@6@00@Z
    static FindAppUriAssociations(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFileAssociations@QueryAssociationBroker@Launch@Internal@System@Windows@winrt@@SA@AEBUhstring@param@6@0@Z
    static FindFileAssociations(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindUriAssociations@QueryAssociationBroker@Launch@Internal@System@Windows@winrt@@SA@AEBUhstring@param@6@0@Z
    static FindUriAssociations(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::System::Internal::Launch
