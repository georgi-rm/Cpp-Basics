#include <iostream>

int main()
{
    std::string weatherType;
    std::cin >> weatherType;

    if (weatherType == "sunny") {
        std::cout << "It's warm outside!";
    }
    else {
        std::cout << "It's cold outside!";
    }
}
