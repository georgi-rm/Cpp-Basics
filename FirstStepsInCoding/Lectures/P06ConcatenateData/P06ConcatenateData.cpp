#include <iostream>

int main()
{
    std::string firstName;
    std::cin >> firstName;

    std::string lastName;
    std::cin >> lastName;

    int age;
    std::cin >> age;

    std::string town;
    std::cin >> town;

    std::cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << ".";
}
