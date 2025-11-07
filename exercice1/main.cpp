#include <iostream>
#include <cmath>

#include "geometry.h"


int main() {
    geometry::Circle c{0, 0, 1};
    std::cout << c.perimeter() << std::endl;
    c.set_pos(1, 1);
    geometry::Rectangle r{0, 0, 1, 2};
    std::cout << r.perimeter() << std::endl;
    r.set_pos( -1, -1);

    std::cout << " L'aire du cercle est " << c.area() << std::endl;
    std::cout << " L'aire du rectangle est " << r.area() << std::endl;
    return 0;
}