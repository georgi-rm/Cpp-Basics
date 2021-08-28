#include <iostream>

int main()
{
    double heightOfWalls;
    double widthOfWalls;
    double heightOfRoof;
    std::cin >> heightOfWalls >> widthOfWalls >> heightOfRoof;

    double areaOfFrontWalls = 2 * heightOfWalls * heightOfWalls - 1.2 * 2;
    double areaOfSideWalls = 2 * heightOfWalls * widthOfWalls - 2 * 1.5 * 1.5;
    double areaOfRoof = 2* heightOfWalls * widthOfWalls + heightOfWalls * heightOfRoof / 2 * 2;
    double areaOfWalls = areaOfFrontWalls + areaOfSideWalls;

    double litersOfGreenPaint = areaOfWalls / 3.4;
    double litersOfRedPaint = areaOfRoof / 4.3;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << litersOfGreenPaint << std::endl << litersOfRedPaint;
}
