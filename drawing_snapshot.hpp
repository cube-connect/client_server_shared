#ifndef DRAWING_SNAPSHOT_HPP
#define DRAWING_SNAPSHOT_HPP

#include <vector>

struct DrawingSnapshot
{
    /* camera */  
    double world_to_camera_to_clip[4][4];

    /* per object in the scene */  
    std::vector<double [4][4]> local_to_world_matrices; // TODO: put in unique ID to identify object
};

#endif