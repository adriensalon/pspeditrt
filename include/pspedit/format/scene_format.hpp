#pragma once

#include <pspedit/format/image_format.hpp>
#include <pspedit/format/material_format.hpp>
#include <pspedit/format/mesh_format.hpp>

namespace pspedit {

struct scene_format {
    std::vector<id_format> entities;
    std::vector<image_reference_format> images; // go sparse
    std::vector<material_reference_format> materials; // go sparse
    std::vector<mesh_reference_format> meshes; // go sparse
};

struct scene_reference_format : public id_format { };

}