#pragma once

#include <iostream>
#include <cmath>
//C = 2πr
namespace ms {
    class Circle {
    public:
        Circle(double radius);
        ~Circle();
        void countLength();
        double getLength();
        void setRadius(double radius);
        void outInformation();


    private:
        double baseRadius = -1;
        double PI = M_PI;
        double length = -1;


    };
}

