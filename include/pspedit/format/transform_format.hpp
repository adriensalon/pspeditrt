#pragma once

#include <vector>

#include <pspedit/format/id_format.hpp>

namespace pspedit {

struct transform_reference_format;

struct transform_format {
    mat4_f32 transform;
    std::vector<transform_reference_format> children;
};

struct transform_reference_format {
    id_format id;
};

}