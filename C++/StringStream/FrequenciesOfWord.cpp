#include <iostream>
#include <string>
#include <sstream>
#include <map>

void PrintFrequency(std::string str)
{
    // each word it mapped to its frequency
    std::map<std::string,int> FW;
    std::stringstream ss(str);
    std::string Word; //to store word

    while (ss >> Word)
    {
        FW[Word]++;
    }

    for (std::map<std::string,int>::iterator m = FW.begin(); m != FW.end(); m++)
    {
        /* code */
        std::cout << m -> first << " -> " << m -> second << std::endl;
    }
}    
    

int main()
{
    std::string str = "Geeks For Geeks Ide";
    PrintFrequency(str);
    return 0;
}