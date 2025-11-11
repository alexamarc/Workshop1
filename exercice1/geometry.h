#pragma once

namespace geometry
{
    class Circle {
        public : 
            Circle() = default;
            Circle(double, double, double);
            void set_pos(double , double);
            const double  perimeter();
            const double area();
        private :
            double x;
            double y;
            double r; // radius 7


    };

    class Rectangle{
    //Position of the top left corner
        public : 
            Rectangle() = default;
            Rectangle(double, double, double, double);
            void set_pos(double, double);
            const double perimeter(); 
            const double area();
        private :
            double x;
            double y;
            double w; //width
            double h; //height
    };


} 