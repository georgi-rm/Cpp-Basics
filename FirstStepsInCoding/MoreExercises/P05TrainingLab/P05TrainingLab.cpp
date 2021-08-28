#include <iostream>

int main()
{
    double length;
    double width;
    std::cin >> length >> width;
    
    length *= 100;
    width *= 100;
    width -= 100;
    int chairsByWidth = width / 70;
    int chairsByLength = length / 120;
    int totalChairs = chairsByLength * chairsByWidth - 3;
    std::cout << totalChairs;
}
