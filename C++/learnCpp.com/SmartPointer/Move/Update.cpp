#include <iostream>
#include <string>
#include <utility> // for std::move
#include <vector>
using namespace std;

template <typename T1, typename T2>
pair<T1,T2>::pair(pair&& old)
  : first(std::move(old.first)),
    second(std::move(old.second))
{}

int main()
{
	std::vector<std::string> v;
	std::string str = "Knock";
 
	std::cout << "Copying str\n";
	v.push_back(str); // calls l-value version of push_back, which copies str into the array element
	
	std::cout << "str: " << str << '\n';
	std::cout << "vector: " << v[0] << '\n';
 
	std::cout << "\nMoving str\n";
 
	v.push_back(std::move(str)); // calls r-value version of push_back, which moves str into the array element
	
	std::cout << "str: " << str << '\n';
	std::cout << "vector:" << v[0] << ' ' << v[1] << '\n';
 
	return 0;
}

/*
This program prints:

Copying str
str: Knock
vector: Knock

Moving str
str:
vector: Knock Knock
*/
