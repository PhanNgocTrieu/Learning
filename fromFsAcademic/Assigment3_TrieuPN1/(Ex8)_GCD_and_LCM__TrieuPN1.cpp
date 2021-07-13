/*Write a program to find:
 *Greatest Common Divisor and Least Common Multiple of two numbers A and B enter by keyboard(1 <= A, B <= 10000).

Example:

Input: A = 4, B = 12

Output : GCD(4, 12) = 4

LCM(4, 12) = 12*/

#include <iostream>




int GCD(int a, int b)
{
	for (int i = a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}

int LCM(int a, int b)
{
	for (int i = 1; ; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
	}
}

void solve_GCD_and_LCM()
{
	int a, b;
	std::cout << "Enter a & b: ";
	std::cin >> a >> b;

	std::cout << "\nOutput\n";
	std::cout << "GCD: " << GCD(a, b) << "\n";
	std::cout << "LCM: " << LCM(a, b) << "\n";
	
}