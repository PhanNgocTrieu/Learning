#include <iostream>


int main()
{

    int input;
    int count = 0;
    while (std::cin >> input) //if this condition is true! meaning that input is right type
    {
        count++;
    }

    std::cout << "Total of inputs: " << count;
    


    return 0;
}