#include <iostream>
#include <vector>

// h/t to potterman28wxcv for a variant of this code
int factorial(int count)
{
	// We'll use a static std::vector to cache calculated results
	static std::vector<int> results{ 1 };

	// If we've already seen this count, then use the cache'd result
	if (count < static_cast<int>(results.size()))
		return results[count];
	else
	{
		// Otherwise calculate the new result and add it
		results.push_back(count*factorial(count - 1));
		return results[count];
	}
}

// And a main program to display the first 13 Fibonacci numbers
int main()
{
	for (int count = 0; count < 13; ++count)
		std::cout << factorial(count) << " ";

	return 0;
}