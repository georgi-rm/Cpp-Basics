#include <iostream>

int main()
{
    double priceOfVegetables;
    double priceOfFruits;
    int quantityOfVegetables;
    int quantityOfFruits;
    std::cin >> priceOfVegetables >> priceOfFruits >> quantityOfVegetables >> quantityOfFruits;

    double totalInLv = priceOfVegetables * quantityOfVegetables + priceOfFruits * quantityOfFruits;
    double totalInEur = totalInLv / 1.94;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << totalInEur;
}
