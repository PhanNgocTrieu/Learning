#include "(Ex1)_Division_TrieuPN1.h"
#include <iostream>
#include <cassert>


void enterDivision(division& d)
{
	std::cout << "Enter numerator: ";
	std::cin >> d.numerator;
	std::cout << "Enter denominator (it should be larger 0): ";
	std::cin >> d.denominator;
}

void Output(division d)
{
	assert(d.denominator > 0);
	
	std::cout << std::endl << "\nOutput:\n quotient = " << d.numerator / d.denominator << ", remainder = " << d.numerator % d.denominator << std::endl;
	
}

void solve_division()
{
	division d;
	enterDivision(d);
	Output(d);
}
