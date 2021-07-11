#include <sstream>
#include <iostream>

int main()
{
    // two ways to put data in buffer of stringstream object;
    // using string in strem

    // first way:
    std::stringstream ss; //return to string
    ss << "Hello EveryOne!" << " " << "My name is John";

    // second way:
    std::stringstream ss2;
    ss2.str("\nThis is a second way to put data to buffer of stringstream object!\n");

    std::cout << ss.str();
    std::cout << ss2.str();

    return 0;
}