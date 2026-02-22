#pragma once

#include <chrono>

#include <pspedit/core/input.hpp>

namespace pspedit {

struct create_context {

};

struct update_context {
    input_state input;
    input_state last_input;
    std::chrono::milliseconds delta_time;
};


struct destroy_context {

};

}