#include <iostream>

int main()
{
    int length;
    int width;
    int height;
    double alreadyFilledPercentage;
    std::cin >> length >> width >> height >> alreadyFilledPercentage;

    double volumeOfFishTankInLiters = 0.001 * length * width * height;
    double volumeOfWatter = volumeOfFishTankInLiters - (volumeOfFishTankInLiters * alreadyFilledPercentage / 100);
    
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << volumeOfWatter;
}
