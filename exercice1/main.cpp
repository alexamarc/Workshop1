#include <iostream>
#include <cmath>


#include "geometry.h"


int main() {
    geometry::Circle c{0, 0, 1};
    c.set_pos(1, 1);
    geometry::Rectangle r{0, 0, 1, 2};
    r.set_pos(-1, -1);
    geometry::Circle c{0, 0, 1};
    c.set_pos(1, 1);
    geometry::Rectangle r{0, 0, 1, 2};
    r.set_pos( -1, -1);

    return 0;
}