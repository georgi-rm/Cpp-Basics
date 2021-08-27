#include <iostream>

int main()
{
    double priceOfStrawberies;
    double quantityOfBananas;
    double quantityOfOranges;
    double quantityOfRaspberies;
    double quantityOfStrawberies;
    std::cin >> priceOfStrawberies >> quantityOfBananas >> quantityOfOranges >> quantityOfRaspberies >> quantityOfStrawberies;

    double priceOfRaspberies = priceOfStrawberies / 2;
    double priceOfOranges = priceOfRaspberies * 0.6;
    double priceOfBananas = priceOfRaspberies * 0.2;

    double totalPrice = priceOfStrawberies * quantityOfStrawberies
        + priceOfBananas * quantityOfBananas
        + priceOfOranges * quantityOfOranges
        + priceOfRaspberies * quantityOfRaspberies;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << totalPrice;
}
