#include <iostream>
#include <fstream>

int main()
{

std::ifstream fileInput("D:/studying/programming/Data_Structure_and_Algorithm/File/FileMode.txt");
if (fileInput.fail())
        std::cout << "Error: Reading Failed" << std::endl;
    
    while (!fileInput.eof())
    {
    char temp[255];
    fileInput.getline(temp, 255);
    std::string line = temp;
    std::cout << line << std::endl;
    }
    std::cout << std::endl;
fileInput.close();

fileInput.open("D:/studying/programming/Data_Structure_and_Algorithm/File/readline.txt");
if (fileInput.fail())
        std::cout << "Error: Reading Failed" << std::endl;
    
    while (!fileInput.eof())
    {
    char temp[255];
    fileInput.getline(temp, 255);
    std::string line = temp;
    std::cout << line << std::endl;
    }
    std::cout << std::endl;
fileInput.close();

return 0;
}