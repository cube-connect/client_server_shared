#ifndef INPUT_SNAPSHOT_HPP
#define INPUT_SNAPSHOT_HPP

struct InputSnapshot
{
    bool f_pressed;
    bool b_pressed;
    bool r_pressed;
    bool l_pressed;
    bool u_pressed;
    bool d_pressed;
    bool shift_pressed;
    bool enter_pressed;

    bool left_mouse_button_pressed;
    bool right_mouse_button_pressed;

    double mouse_position_x;
    double mouse_position_y;
};

#endif
