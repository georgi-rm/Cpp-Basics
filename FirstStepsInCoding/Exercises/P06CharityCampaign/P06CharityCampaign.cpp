#include <iostream>

int main()
{
    int numberOfDays;
    int numberOfSweetMakers;
    int numberOfCakes;
    int numberOfWaffles;
    int numberOfPancakes;
    std::cin >> numberOfDays >> numberOfSweetMakers >> numberOfCakes >> numberOfWaffles >> numberOfPancakes;
    
    double profitFromCakes = numberOfCakes * 45;
    double profitFromWaffles = numberOfWaffles * 5.80;
    double profitFromPancakes = numberOfPancakes * 3.20;
    double profitFromOneSweetMaker = profitFromCakes + profitFromWaffles + profitFromPancakes;

    double totalProfit = profitFromOneSweetMaker * numberOfSweetMakers * numberOfDays * 7 / 8;  

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << totalProfit;
}
