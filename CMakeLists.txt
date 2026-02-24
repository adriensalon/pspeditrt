cmake_minimum_required(VERSION 3.13)
project(pspeditrt)

add_executable(pspedirt "source/entry.cpp")
set_property(TARGET pspedirt PROPERTY CXX_STANDARD 17)
target_link_libraries(pspedirt PRIVATE pspdebug pspge pspdisplay pspctrl pspgu psprtc)

create_pbp_file(
    TARGET pspedirt
    ICON_PATH NULL
    BACKGROUND_PATH NULL
    PREVIEW_PATH NULL
    TITLE pspedirt
    VERSION 01.00)