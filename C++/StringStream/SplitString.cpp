#include <iostream>
#include <sstream>
#include <string>
#include <vector>
int main()
{
    std::string data = "Phan Ngoc Trieu";
    std::stringstream spliter;

    spliter << data;
    std::vector<std::string> result;
    int count = 0;
    while (!spliter.eof())
    {
        count++;
        std::string str;
        spliter >> str;
        result.push_back(str);
    }

    
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl << count << "\n";
    

    return 0;
}