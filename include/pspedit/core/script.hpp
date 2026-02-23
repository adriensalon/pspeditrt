#pragma once

#include <vector>

#include <pspedit/core/id.hpp>
#include <pspedit/core/scalar.hpp>

namespace pspedit {

struct script_field_format {
    u32 field_id;
    u32 value_type_id;
    std::vector<u8> bytes;
};

struct script_format {
    u32 script_id;
    std::vector<script_field_format> fields;
};

struct script_reference_format {
    id_format id;
};

// runtime_script

template <typename Script>
struct shared_script {
    runtime_id id = null_runtime_id;
};

}