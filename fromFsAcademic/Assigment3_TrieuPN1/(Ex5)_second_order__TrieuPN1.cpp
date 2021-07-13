#include <iostream>

void second_order(double num_a, double num_b, double num_c)
{
	if (num_a == 0)
	{
		if (num_b == 0)
		{
			if (num_c == 0)
			{
				std::cout << "This equation has countless roots!\n";
			}
			else
				std::cout << "This equation has no root!\n";
			
		}
		else
		{
			
			std::cout << "This has a root = " << -num_c / num_b << "\n";
		}
	}
	else
	{
		double denta = static_cast<double>(num_b)* num_b - (4* static_cast<double>(num_a) * static_cast<double>(num_c));
		double root_1, root_2;

		if (denta < 0)
		{
			std::cout << "This equation has no root!\n";
		}
		else
		{
			if (denta == 0)
			{
				std::cout << "This equation has two equally roots: " << -num_b / (2* num_a);
			}
			else
			{
				root_1 = (-num_b - sqrt(denta)) / (2 * static_cast<double>(num_a));
				root_2 = (-num_b + sqrt(denta)) / (2 * static_cast<double>(num_a));
				std::cout << "This equation has two individual roots: \n";
				std::cout << "x1 = " << root_1 << "\n";
				std::cout << "x2 = " << root_2 << "\n";
				
			}
		}
	}
}

void solve_second_order()
{
	// second order: ax + by + c = 0;
	double num_a, num_b, num_c;
	std::cout << "Enter a, b, c: ";
	std::cin >> num_a >> num_b >> num_c;
	std::cout << "\nOutput:\n";
	second_order(num_a, num_b, num_c);
}