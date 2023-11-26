#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string name, surname;

    int phone_number;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter surname: ";
    std::cin >> surname;

    std::cout << "Enter phone number: ";
    std::cin >> phone_number;

    std::fstream file;
    file.open("card.txt", std::ios::out | std::ios::app);

    file << name << std::endl;
    file << surname << std::endl;
    file << phone_number << std::endl;

    file.close();

}
