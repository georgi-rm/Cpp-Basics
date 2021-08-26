#include <iostream>

int main()
{
    double area;
    std::cin >> area;

    double normalPrice = area * 7.61;
    double discount = normalPrice * 0.18;
    double finalPrice = normalPrice - discount;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << "The final price is: " << finalPrice <<" lv." << std::endl;
    std::cout << "The discount is: " << discount << " lv.";
}
