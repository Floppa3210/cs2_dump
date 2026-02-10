[CmdletBinding(SupportsShouldProcess = $true)]
param(
    [switch]$Deep,
    [switch]$PurgeRuntimeDump
)

Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

function Remove-IfExists {
    param(
        [Parameter(Mandatory = $true)][string]$Path,
        [Parameter(Mandatory = $true)][string]$Label
    )

    if (-not (Test-Path -LiteralPath $Path)) {
        Write-Host "[skip] $Label -> not found"
        return
    }

    if ($PSCmdlet.ShouldProcess($Path, "Remove $Label")) {
        Remove-Item -LiteralPath $Path -Recurse -Force
        Write-Host "[ok] removed $Label -> $Path"
    }
}

$repoRoot = Split-Path -Parent $PSScriptRoot
Write-Host "Repo root: $repoRoot"

# Always-safe cleanup: generated build trees and caches inside repo.
$safeTargets = @(
    @{ Path = (Join-Path $repoRoot "build");               Label = "build dir" },
    @{ Path = (Join-Path $repoRoot "build-ninja");         Label = "build-ninja dir" },
    @{ Path = (Join-Path $repoRoot "build_codex");         Label = "build_codex dir" },
    @{ Path = (Join-Path $repoRoot "build_codex_refactor");Label = "build_codex_refactor dir" },
    @{ Path = (Join-Path $repoRoot "CMakeCache.txt");      Label = "root CMakeCache.txt" },
    @{ Path = (Join-Path $repoRoot "CMakeFiles");          Label = "root CMakeFiles dir" },
    @{ Path = (Join-Path $repoRoot "cmake_install.cmake"); Label = "root cmake_install.cmake" },
    @{ Path = (Join-Path $repoRoot "Makefile");            Label = "root Makefile" }
)

foreach ($t in $safeTargets) {
    Remove-IfExists -Path $t.Path -Label $t.Label
}

if ($Deep) {
    Write-Host "Deep mode enabled: removing IDE/intermediate output folders."
    $deepTargets = @(
        @{ Path = (Join-Path $repoRoot ".vs");      Label = ".vs dir" },
        @{ Path = (Join-Path $repoRoot "Release");  Label = "Release dir" },
        @{ Path = (Join-Path $repoRoot "Debug");    Label = "Debug dir" },
        @{ Path = (Join-Path $repoRoot "x64");      Label = "x64 dir" },
        @{ Path = (Join-Path $repoRoot "bin");      Label = "bin dir" }
    )

    foreach ($t in $deepTargets) {
        Remove-IfExists -Path $t.Path -Label $t.Label
    }
}

if ($PurgeRuntimeDump) {
    Write-Host "PurgeRuntimeDump enabled: removing runtime dump outputs."
    Remove-IfExists -Path (Join-Path $repoRoot "Dump") -Label "repo Dump dir"

    $documents = [Environment]::GetFolderPath([Environment+SpecialFolder]::MyDocuments)
    if (-not [string]::IsNullOrWhiteSpace($documents)) {
        $runtimeDump = Join-Path $documents "CS2_Dump"
        Remove-IfExists -Path $runtimeDump -Label "Documents\\CS2_Dump"
    } else {
        Write-Host "[skip] Could not resolve MyDocuments path"
    }
}

Write-Host "Done."

