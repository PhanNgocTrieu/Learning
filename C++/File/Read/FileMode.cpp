#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // co the su dung cac mode de mo file
    // open file in read mode (std::ios::in);
    // open file in read mode (std::ios::binary);
    std::ifstream inputFile("D:/studying/programming/Data_Structure_and_Algorithm/File/FileMode.txt",std::ios::in | std::ios::binary);

    if (inputFile.fail())
        std::cout << "Error: Reading Failed" << std::endl;
    
    while (!inputFile.eof())
    {
    char temp[255];
    inputFile.getline(temp, 255);
    std::string line = temp;
    std::cout << line << std::endl;
    }
    std::cout << std::endl;

    inputFile.close();

    return 0;
}