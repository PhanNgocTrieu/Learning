#include <iostream>
#include <iomanip>

int64_t Fibonacci(int64_t n_th)
{
	int64_t f0 = 0; int64_t f1 = 1;
	int64_t i = 1;
	
	int64_t res_nth{};
	while (i < n_th)
	{
		res_nth = f0 + f1;
		f0 = f1;
		f1 = res_nth;
		i++;
	}
	return res_nth;
}

void solve_find_nthFibonacci()
{
	int64_t n;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "\nOutput: Fib(" << n << ") = " << Fibonacci(n) << std::endl;

}