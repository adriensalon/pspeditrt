#pragma once

#include <memory>

#include <pspedit/core/scalar.hpp>

namespace pspedit {

struct shader_descriptor {
    bool cull_enable = false;
    int cull_face = GU_BACK;
    int front_face = GU_CCW;
    bool depth_test = false;
    int depth_func = GU_LEQUAL;
    bool depth_write = true;
    bool blend_enable = false;
    int blend_op = GU_ADD;
    int blend_src = GU_SRC_ALPHA;
    int blend_dst = GU_ONE_MINUS_SRC_ALPHA;
    bool texture_enable = true;
};

struct shader_object {
    shader_object(const shader_descriptor& descriptor = {});
    shader_object(const shader_object&) = delete;
    shader_object& operator=(const shader_object&) = delete;
    shader_object(shader_object&&) = default;
    shader_object& operator=(shader_object&&) = default;
    ~shader_object();

    void bind(command_object& command) const;

private:
    struct shader_object_implementation;
    std::shared_ptr<shader_object_implementation> _implementation;
};

}