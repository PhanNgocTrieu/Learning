#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream inputFile("D:/studying/programming/Data_Structure_and_Algorithm/File/readline.txt");

    if (inputFile.fail())
    {
        std::cout << "Failed!" << std::endl;
        return -1;
    }

    while (!inputFile.eof())
    {
        char temp[255];
        inputFile.getline(temp,255);

        // su dung string de giam kich thuoc du thua
        std::string line = temp;
        std::cout << line << std::endl;

    }
    
    inputFile.close();


    return 0;
}