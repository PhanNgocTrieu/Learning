#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::stringstream ss;
    int iValue = 123456;
    double dValue = 6451.1515;

    // covert number to string
    ss << iValue << " " << dValue;
    std::string strValue1, strValue2;
    ss >> strValue1 >> strValue2;
    std::cout << "First: "  << strValue1 << " " << strValue2 << std::endl;


    std::stringstream ss_2;
    ss_2 << "12321412 123124.23123";
    ss_2 >> iValue >> dValue;
    
    std::cout << "Last: " << iValue << " " << dValue;
}