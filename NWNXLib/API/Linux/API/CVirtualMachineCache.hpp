#pragma once

#include <cstdint>

#include "CExoArrayListTemplatedCVirtualMachineFilePtr.hpp"

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CExoString;

struct CVirtualMachineCache
{
    CExoArrayListTemplatedCVirtualMachineFilePtr m_aFiles;

    // The below are auto generated stubs.
    CVirtualMachineCache() = default;
    CVirtualMachineCache(const CVirtualMachineCache&) = default;
    CVirtualMachineCache& operator=(const CVirtualMachineCache&) = default;

    ~CVirtualMachineCache();
    void ClearAllFiles();
    void PrecacheFile(const CExoString&);
};

void CVirtualMachineCache__CVirtualMachineCacheDtor(CVirtualMachineCache* thisPtr);
void CVirtualMachineCache__ClearAllFiles(CVirtualMachineCache* thisPtr);
void CVirtualMachineCache__PrecacheFile(CVirtualMachineCache* thisPtr, const CExoString&);

}

}
