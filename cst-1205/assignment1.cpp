
#include <iostream>

void assignment1()
{
    char char1, char2, char3, char4, char5;
    int int1, int2, int3, int4, int5;
    std::cout << "Please enter character and integer seperated by space and press enter. ";
    std::cin >> char1 >> int1;
    std::cout << "Please enter character and integer seperated by space and press enter. ";
    std::cin >> char2 >> int2;
    std::cout << "Please enter character and integer seperated by space and press enter. ";
    std::cin >> char3 >> int3;
    std::cout << "Please enter character and integer seperated by space and press enter. ";
    std::cin >> char4 >> int4;
    std::cout << "Please enter character and integer seperated by space and press enter. ";
    std::cin >> char5 >> int5;
    double total = int1 + int2 + int3 + int4 + int5;
    double average = total / 5;
    std::cout << "\nYour input is-\nYour first character and integer is " << char1 << " = " << int1 << "\nYour second character and integer is " << char2 << " = " << int2 << "\nYour third character and integer is " << char3 << " = " << int3 <<
        "\nYour fourth character and integer is " << char4 << " = " << int4 << "\nYour fifth character and integer is " << char5 << " = " << int5 <<
        "\n\nYour output-\nTotal value is- " << total << "\nAverage value is- " << average << "\n";
}