#include <iostream>
#include <vector>

// h/t to potterman28wxcv for a variant of this code
int recuresiveSum(int count)
{
	// We'll use a static std::vector to cache calculated results
	static std::vector<int> results{ count };

    if (count < 10)
    {
        return count;
    }
    else
    {
        return (count % 10) + recuresiveSum(count / 10);
    }
    
	
}

// And a main program to display the first 13 Fibonacci numbers
int main()
{
	for (int count = 0; count < 1123; ++count)
		std::cout << recuresiveSum(count) << " ";

	return 0;
}