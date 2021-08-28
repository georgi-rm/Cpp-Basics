#include <iostream>

int main()
{
    double b1;
    double b2;
    double h;
    std::cin >> b1 >> b2 >> h;
    double area = (b1 + b2) * h / 2;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << area;
}
