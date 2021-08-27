#include <iostream>

int main()
{
    int numberOfPages;
    int pagesPerHour;
    int numberOfDays;
    std::cin >> numberOfPages >> pagesPerHour >> numberOfDays;

    int hoursToReadTheBook = numberOfPages / pagesPerHour;
    int hoursToReadEachDay = hoursToReadTheBook / numberOfDays;
    std::cout << hoursToReadEachDay;
}
