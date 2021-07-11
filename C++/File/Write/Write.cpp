#include <iostream>
#include <string>
#include <fstream>

void writeDataToFile(std::string file)
{
	std::ofstream fileOutput(file);
    if (fileOutput.fail())
    {
        std::cout << "Cannot open file at " << file << std::endl;
        return;
    }

    fileOutput << "Hello EveryOne!" << std::endl;
    fileOutput << "My name is Trieu John!" << std::endl;
    fileOutput << "I'm trying to write somethings to file!" << std::endl;
    
    for (int i = 0; i < 10; i++)
    {
        fileOutput << i;
    }
    
}

void readDataFromFile(std::string file)
{
	std::ifstream fileInput(file);

    if (fileInput.fail())
    {
        std::cout << "Cannot open file" << std::endl;
        return;
    }

    while (!fileInput.eof())
    {
        char line[255];
        fileInput.getline(line,255);
        std::string out_line = line;
        std::cout << out_line << std::endl;
    }
}

int main()
{
	std::string filePath = "D:/studying/programming/Data_Structure_and_Algorithm/File/Write/FileToWrite.txt";

	writeDataToFile(filePath);
	readDataFromFile(filePath);

	return 0;
}