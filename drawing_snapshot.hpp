#ifndef DRAWING_SNAPSHOT_HPP
#define DRAWING_SNAPSHOT_HPP

#include <vector>

struct DrawingSnapshot
{
    /* camera */
    std::array<float, 3> camera_pos;
    std::array<float, 16> world_to_camera; // view matrix
    std::array<float, 16> camera_to_clip; // projection matrix

    /* per object in the scene */
    std::array<std::array<float, 16>, 27> local_to_world_matrices; // TODO: put in unique ID to identify object
};

#endif
