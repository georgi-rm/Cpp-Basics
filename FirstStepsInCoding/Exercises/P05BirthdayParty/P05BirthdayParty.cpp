#include <iostream>

int main()
{
    int rentForTheHall;
    std::cin >> rentForTheHall;

    double priceOfCake = rentForTheHall * 0.2;
    double priceOfDrinks = priceOfCake * 0.55;
    double priceOfAnimator = rentForTheHall / 3;

    double totalPrice = rentForTheHall + priceOfCake + priceOfDrinks + priceOfAnimator;

    std::cout << totalPrice;
}
