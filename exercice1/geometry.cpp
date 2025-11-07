#include "geometry.h"
#include <cmath>
namespace geometry
{
    Circle::Circle(double x, double y, double r): x(x), y(y), r(r) {};

    void Circle::set_pos(double x, double y ){
        this->x = x;
        this->y = y;
    }
    double const Circle::perimeter(){
        return 2 * M_PI * this->r; 
    }
    
    const double Circle::area(){
        return M_PI*(r*r);
    }

    Rectangle::Rectangle(double x, double y, double w, double h) : x(x), y(y), w(w), h(h){};

    // Set the position of the top left corner

    void Rectangle::set_pos( double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Calculate the perimeter of the rectangle

    double const Rectangle::perimeter() {
        return 2 * (w + h);
    }

    const double Rectangle::area(){
        return w*h;
    }


} // namespace geometry
