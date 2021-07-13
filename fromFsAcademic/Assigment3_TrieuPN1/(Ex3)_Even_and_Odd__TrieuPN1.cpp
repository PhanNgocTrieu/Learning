#include <iostream>

bool isEven(int32_t x)
{
	return x % 2 == 0 ? true : false;
}

void solve_Even()
{
	int32_t x;
	std::cout << "Enter x (checking even or odd): ";
	std::cin >> x;


	std::cout << "\nOutput\n";
	if (isEven(x))
		std::cout << "This is even number!\n";
	else
		std::cout << "This is odd number!\n";
}