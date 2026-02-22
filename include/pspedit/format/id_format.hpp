#pragma once

#include <pspedit/base/scalar.hpp>

namespace pspedit {

struct id_format {
    u64 low;
    u64 high;
};

static constexpr id_format format_id_null { 0, 0 };

}