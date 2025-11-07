#pragma once

namespace geometry
{
    class Circle {
        public : 
            double x;
            double y;
            double r; // radius 7

            Circle() = default;
            Circle(int, int, int);
        private :

    };

    class Rectangle{
    //Position of the top left corner
        public : 
            double x;
            double y;
            double w; //width
            double h; //height
            Rectangle() = default;
            Rectangle(int, int, int, int);
        
        private :
    };


} 
