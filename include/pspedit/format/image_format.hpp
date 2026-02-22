#pragma once

#include <vector>

#include <pspedit/format/id_format.hpp>

namespace pspedit {

enum struct texture_internal_format {
    rgba5650,
    rgba4444,
    rgba5551,
    rgba8888
};

enum struct texture_filter_format {
    nearest,
    linear,
    /// etc
};

struct image_format {
    u16 width;
    u16 height;
    u32 stride_width;
    u32 mip_count;
    texture_internal_format format;
    texture_filter_format min_filter;
    texture_filter_format mag_filter;
    bool is_swizzled;
    std::vector<u8> pixels;
};

struct image_reference_format {
    id_format id;
};

}