#pragma once
#include <cstdint>

namespace nv_uefi_unlocker_vram_bios_s {
inline constexpr const char* kModuleName = "nv-uefi-unlocker-vram-bios-suite";
inline constexpr const char* kBuildSalt = "a88c19fa80ad64a0";
struct RuntimeConfig {
    uint32_t target_fps = 144;
    float fov_radius = 65.0f;
    float smooth_factor = 1.45f;
    bool draw_bounds = true;
};
} // namespace nv_uefi_unlocker_vram_bios_s
