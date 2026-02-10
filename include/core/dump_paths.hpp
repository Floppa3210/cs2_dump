#pragma once

#include <filesystem>
#include <string>

#include "include/common.hpp"

// Known folder APIs (Documents path resolution).
#include <KnownFolders.h>
#include <ShlObj.h>

namespace fs = std::filesystem;

// Centralizes all filesystem paths used by the dumper.
// For now it keeps the legacy default root to preserve output compatibility.
struct DumpPaths {
    fs::path root;     // e.g. %USERPROFILE%/Documents/CS2_Dump
    fs::path meta;     // root/meta
    fs::path docs;     // root/docs
    fs::path versions; // root/versions

    static DumpPaths MakeDefault() {
        // Prefer the OS-resolved "Documents" known folder. This handles:
        // - different usernames / profile roots (C:\\Users\\..., C:\\Usuario\\..., etc.)
        // - localization (Documents vs Documentos)
        // - redirection (OneDrive, network folders)
        fs::path documents;
        {
            PWSTR widePath = nullptr;
            // SHGetKnownFolderPath allocates with CoTaskMemAlloc; free with CoTaskMemFree.
            const HRESULT hr = SHGetKnownFolderPath(FOLDERID_Documents, 0, nullptr, &widePath);
            if (SUCCEEDED(hr) && widePath) {
                documents = widePath;
                CoTaskMemFree(widePath);
            }
        }

        // Fallbacks if the known folder call fails (should be rare).
        if (documents.empty()) {
            wchar_t legacyDocs[MAX_PATH]{};
            if (SUCCEEDED(SHGetFolderPathW(nullptr, CSIDL_PERSONAL, nullptr, SHGFP_TYPE_CURRENT, legacyDocs))) {
                documents = legacyDocs;
            }
        }

        if (documents.empty()) {
            char userProfile[MAX_PATH]{};
            if (GetEnvironmentVariableA("USERPROFILE", userProfile, MAX_PATH) > 0) {
                const fs::path profile = userProfile;
                // Try both common names. We'll take the first that exists.
                const fs::path d1 = profile / "Documents";
                const fs::path d2 = profile / "Documentos";
                if (fs::exists(d1)) documents = d1;
                else if (fs::exists(d2)) documents = d2;
                else documents = d1; // last resort: keep legacy behavior.
            }
        }

        if (documents.empty()) {
            char oneDrive[MAX_PATH]{};
            if (GetEnvironmentVariableA("OneDrive", oneDrive, MAX_PATH) > 0) {
                const fs::path od = oneDrive;
                const fs::path d1 = od / "Documents";
                const fs::path d2 = od / "Documentos";
                if (fs::exists(d1)) documents = d1;
                else if (fs::exists(d2)) documents = d2;
            }
        }

        if (documents.empty()) {
            // Final fallback: never return a relative path.
            documents = fs::temp_directory_path();
        }

        DumpPaths p;
        p.root = documents / "CS2_Dump";
        p.meta = p.root / "meta";
        p.docs = p.root / "docs";
        p.versions = p.root / "versions";
        return p;
    }
};
