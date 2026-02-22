#pragma once

#include <pspedit/core/scalar.hpp>

namespace pspedit {

enum struct texture_storage {
    ram,
    vram
};

enum struct texture_format {
    rgba5650,
    rgba4444,
    rgba5551,
    rgba8888
};

enum struct texture_filter {
    nearest,
    linear,
    /// etc
};

struct texture_descriptor {
    texture_storage storage;
    u32 width;
    u32 height;
    texture_format format;
    texture_filter min_filter;
    texture_filter mag_filter;
    u8 swizzle;
    u8 mipmaps_count;
};

struct texture_handle {
    texture_handle(const texture_descriptor& descriptor);
    texture_handle(const texture_handle& other) = delete;
    texture_handle& operator=(const texture_handle& other) = delete;
    texture_handle(texture_handle&& other);
    texture_handle& operator=(texture_handle&& other);
    ~texture_handle();

    void transfer(const texture_storage storage);
    void bind();

private:
    texture_descriptor _descriptor;
    void* _vram_ptr;
    void* _ram_ptr;
};

};