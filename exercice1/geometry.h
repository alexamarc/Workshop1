#pragma once
 
namespace geometry
{
    class Circle {
        public :
            double x;
            double y;
            double r;
 
            Circle() = default;
            Circle(int, int, int);
        private :
 
    };
 
    class Rectangle {
        public :
            double x;
            double y;
            double w;
            double h;
            Rectangle() = default;
            Rectangle(int, int, int, int);
    };
 
 
 
}