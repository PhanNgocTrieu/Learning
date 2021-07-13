#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Using hashing
int SearchMinNonNeg(std::vector<int> arr)
{
    int n = arr.size();
    bool miss_one = true;
    // checking one!
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            miss_one = false;
            break;
        }
    }
    if (miss_one)
        return 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0 || arr[i] >= n)
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[(arr[i] - 1) % n] += n;
        cout << arr[(arr[i] - 1) % n] + n << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= n)
        {
            return i + 1;
        }
    }
    return (n + 1);
}

int main()
{
    vector<int> arr = {0, 1, 4, 3, 2, 8, 7, 5, 6, 9, 11};
    vector<int> arr2 = {1, 4, 5, 2, 3, 4, 5, 6};
    vector<int> arr3 = {-1, -4, -5, -2, -3, -4, -5, -6};
    vector<int> arr4 = {2,1};
    int n2 = sizeof(arr2)/sizeof(int);
    int n = sizeof(arr) / sizeof(int);
    //cout << n << endl;
    //std::cout << FindMissingNonNeg(arr, n) << std::endl;
    std:;cout << SearchMinNonNeg(arr) << std::endl;
    std::cout << SearchMinNonNeg(arr2) << std::endl;
    std::cout << SearchMinNonNeg(arr3) << std::endl;
    std::cout << SearchMinNonNeg(arr4) << std::endl;
    return 0;
}