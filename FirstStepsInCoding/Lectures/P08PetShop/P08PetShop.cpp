#include <iostream>

int main()
{
    int numberOfDogs;
    std::cin >> numberOfDogs;

    int numberOfOtherAnimals;
    std::cin >> numberOfOtherAnimals;

    double totalDogFood = numberOfDogs * 2.5;
    double totalOtherAnimalsFood = 4.0 * numberOfOtherAnimals;
    double totalPriceOfFood = totalDogFood + totalOtherAnimalsFood;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << totalPriceOfFood << " lv.";
    return 0;
}
