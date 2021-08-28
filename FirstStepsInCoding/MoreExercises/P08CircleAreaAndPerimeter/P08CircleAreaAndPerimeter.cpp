#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double radius;
    std::cin >> radius;

    double perimeter = 2 * M_PI * radius;
    double area = M_PI * radius * radius;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << area << std::endl << perimeter;
}
