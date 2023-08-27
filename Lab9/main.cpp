#include <iostream>
#include "Circle.hpp"
#include "Func.hpp"



int main() {
    double R;
    fs::inputData(R);
    ms::Circle circle = ms::Circle(R);
    circle.countLength();
//    fs::outputData(circle.getLength());
    circle.outInformation();
    return 0;
}
