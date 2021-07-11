#include <iostream>
#include <sstream>

int main()
{
    std::stringstream ss;
    ss << "Hello EveryOne!" << " " << "My name is John";
    std::stringstream ss2;
    ss2.str("\nThis is a second way to put data to buffer of stringstream object!\n");

    std::stringstream os;
    os << "12345D7S012";
    std::string str_1;
    std::string str_2;
    std::string str_3;

    ss >> str_1;
    ss2 >> str_2;
    os >> str_3;

    std::cout << str_1 << std::endl;
    std::cout << str_2 << std::endl;
    std::cout << str_3 << std::endl;
}