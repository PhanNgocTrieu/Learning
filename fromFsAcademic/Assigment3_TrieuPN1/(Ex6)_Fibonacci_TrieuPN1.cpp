/*
* A = 10 first_fib_nums
* Print(A) & print(sum(A));
*/


#include <iostream>

int32_t printFibonacci(int32_t x)
{
	int32_t f0 = 0;
	int32_t f1 = 1;
	int32_t i = 1;
	int32_t res_nth{};
	std::cout << "\nOutput: \n";
	std::cout << "10 first fib numbers: ";
	std::cout << f0 << " ";
	while (i < x)
	{
		std::cout << f1 << " ";
		res_nth = static_cast<int32_t>(f0 + f1);
		f0 = f1;
		f1 = res_nth;
		i++;
	}
	std::cout << "\n";
	return res_nth;
}

void solve_fibonacci()
{
	// Fibonacci start with 0: 0 1 1 2 3 5 ... 	
	std::cout << "sum_Fib(10) = " << printFibonacci(10) << "\n";

}