#include <iostream>
#include <string>
#include <utility> // for std::move
 
template<class T>
void myswap(T& a, T& b) 
{ 
  T tmp { std::move(a) }; // invokes move constructor
  a = std::move(b); // invokes move assignment
  b = std::move(tmp); // invokes move assignment
}
 
int main()
{
	std::string x{ "abc" };
	std::string y{ "de" };
 
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
 
	myswap(x, y);
 
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
 
	return 0;
}

/*
This prints the same result as above:

x: abc
y: de
x: de
y: abc
But it’s much more efficient about it. 
When tmp is initialized, instead of making a copy of x, 
we use std::move to convert l-value variable x into an r-value. 
Since the parameter is an r-value, move semantics are invoked, and x is moved into tmp.

With a couple of more swaps, the value of variable x has been moved to y, 
and the value of y has been moved to x.
*/
