#include <iostream>

int main()
{
    double priceOfSkumria;
    double priceOfCaca;
    double quantityPalamud;
    double quantitySafrid;
    double quantitySchels;
    std::cin >> priceOfSkumria >> priceOfCaca >> quantityPalamud >> quantitySafrid >> quantitySchels;

    double priceOfPalamud = 1.6 * priceOfSkumria;
    double priceOfSafrid = 1.8 * priceOfCaca;

    double totalPrice = priceOfPalamud * quantityPalamud + priceOfSafrid * quantitySafrid + 7.5 * quantitySchels;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << totalPrice;
}
