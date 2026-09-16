#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.System.Launcher.dll by Windissect. 2 member(s).
namespace winrt::Windows::Storage {
class StorageFile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileFromPathAsync@StorageFile@Storage@Windows@winrt@@SA@AEBUhstring@param@4@@Z
    static GetFileFromPathAsync(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StorageFile@Storage@Windows@winrt@@QEAA@XZ
    ~StorageFile();
};
} // namespace winrt::Windows::Storage
