// getline()
#include <iostream>
#include <string>

int main()
{
    std::string str;
    int n = 4;
    while (n--)
    {
        std::cout << "Input: ";
        std::getline(std::cin,str);
        std::cout << "Output: " << str << ": New Line! " << std::endl;
    }
    
    return 0;
}