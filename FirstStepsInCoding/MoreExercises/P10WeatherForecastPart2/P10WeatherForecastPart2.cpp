#include <iostream>

int main()
{
    double temperature;
    std::cin >> temperature;

    if (temperature < 5) {
        std::cout << "unknown";
    }
    else if (temperature < 12) {
        std::cout << "Cold";
    }
    else if (temperature < 15) {
        std::cout << "Cool";
    }
    else if (temperature <= 20) {
        std::cout << "Mild";
    }
    else if (temperature < 26) {
        std::cout << "Warm";
    }
    else if (temperature <= 35) {
        std::cout << "Hot";
    }
    else {
        std::cout << "unknown";
    }
}
