#pragma once

#include <vector>

#include <pspedit/core/id.hpp>
#include <pspedit/core/scalar.hpp>

namespace pspedit {

struct script_object_field {
    u32 field_id;
    u32 value_type_id;
    std::vector<u8> bytes;
};

struct script_object {
    u32 script_id;
    std::vector<script_object_field> fields;
    bool has_create;
    bool has_update;
    bool has_draw;
    bool has_destroy;
};

struct script_object_reference {
    object_id id;
};

// runtime_script

template <typename Script>
struct shared_script {
    runtime_id id = null_runtime_id;
};

}