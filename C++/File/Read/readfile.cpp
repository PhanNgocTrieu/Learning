#include <iostream>
#include <fstream>

int main()
{
    //open file
    std::ifstream fileInput("D:/studying/programming/Data_Structure_and_Algorithm/File/readfile.txt");


    //check failed or not
    if (fileInput.fail())
    {
        std::cout << "Failed to open this file" << std::endl;
        return -1;
    }

    // 
    while (!fileInput.eof())
    {
        char n;
        // khiem tra dinh dang va in ra man hinh
        if (fileInput >> n)
        { 
            // in ra gia tri da luu
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
    fileInput.close();

    return 0;
}  