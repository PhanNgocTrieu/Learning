#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;


// method 1:
// first way:
string beforeReverse(int n)
{
    string s = "";
    if (n == 0)
        return s;
    s += to_string(n % 2) + beforeReverse(n / 2);

    return s;
}

string toBinary(int n)
{
    string s = beforeReverse(n);
    reverse(s.begin(),s.end());
    return s;
}

// second way:
void printBinary(int x)
{
    if (x == 0)
        return;
    
    printBinary(x / 2);

    cout << x % 2;
}


// method 2:
void printBinary_2(unsigned int n)
{
	if (n > 1) // we only recurse if n > 1, so this is our termination case for n == 0
	{
		printBinary_2(n / 2);
	}
 
	std::cout << n % 2;
}

int main()
{
    //cout << toBinary(151) << "\n";
    printBinary(12);
    cout << "\n";
    // syntax: static_cast<new_type>(expression): returns a value of type new_type
    printBinary_2(static_cast<unsigned int>(-15));
    return 0;
}