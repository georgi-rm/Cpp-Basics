#include <iostream>

int main()
{
    double depositedSum;
    int periodOfDeposit;
    double yearlyPercentage;
    std::cin >> depositedSum >> periodOfDeposit >> yearlyPercentage;

    double finalSum = depositedSum + periodOfDeposit * (depositedSum * yearlyPercentage / 100 / 12);

    std::cout << finalSum;
}
