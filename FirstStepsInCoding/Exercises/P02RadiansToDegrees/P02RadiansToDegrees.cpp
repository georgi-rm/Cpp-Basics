#include <iostream>
#include <math.h>

int main()
{
    double radians;
    std::cin >> radians;
    double degree = radians * 180 / 3.14;
    degree = std::round(degree);
    std::cout << degree;
}