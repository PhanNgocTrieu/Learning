#include <iostream>
#include <string>
#include <cassert>
//#include <stdlib.h>

void enterName(std::string &name){
    std::cout << "What is your full name?: ";
    std::getline(std::cin,name);
}

void enterAge(int &age)
{
    std::cout << "What is your age?: ";
    std::cin >> age;
}

void yearPerLetter(std::string name, int age)
{
    double result = static_cast<double>(age)/static_cast<double>(name.length());
    std::cout << "You've lived " << result << " years for each letter in your name!\n";
}
int main()
{
    std::string name{};
    int age{};
    enterName(name);
    enterAge(age);
    yearPerLetter(name,age);
    return 0;
}