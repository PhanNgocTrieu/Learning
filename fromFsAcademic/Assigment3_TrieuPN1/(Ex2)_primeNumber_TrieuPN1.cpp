#include <iostream>


bool isPrime(int32_t x)
{
	if (x % 2 == 0 || x == 1)
		return false;
	
	for (int i = 3; i <= sqrt(x); i++)
	{
		if (x % i == 0);
			return false;
	}
	return true;
}

void solve_primeNumber()
{
	int32_t n;
	std::cout << "Enter number for checking: ";
	std::cin >> n;

	std::cout << "\nOutput:\n";
	if (isPrime(n))
		std::cout << "Prime!\n";
	else
		std::cout << "Not Prime!\n";
}