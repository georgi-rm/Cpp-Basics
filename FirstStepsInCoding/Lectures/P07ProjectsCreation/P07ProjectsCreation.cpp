#include <iostream>

int main()
{
    std::string nameOfArchitect;
    std::cin >> nameOfArchitect;
    int numberOfProjects;
    std::cin >> numberOfProjects;

    int timeForProjects = numberOfProjects * 3;
    std::cout << "The architect " << nameOfArchitect << " will need " << timeForProjects << " hours to complete " << numberOfProjects << " project/s.";
}
